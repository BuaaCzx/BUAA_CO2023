.data
value: .space 1024 # 256*4
row: .space 1024 # 128*4
column: .space 1024 #128*4
space: .asciiz " "
endl: .asciiz "\n"


.macro getIndex(%res, %i, %j) # get matrix[i][j] index
	sll %res, %i, 6
	add %res, %res, %res
	sll %res, %res, 2
.end_macro

.macro getInt(%ad)
	li $v0 5
	syscall
	move %ad $v0
.end_macro

.macro printInt(%ad)
	li $v0 1
	move $a0 %ad
	syscall
.end_macro

.macro printStr(%ad)
	la $a0 %ad
	li $v0 4
	syscall
.end_macro

.text

getInt($s0) # $s0 = n
getInt($s1) # $s1 = m
la $t7, value
la $t8, row
la $t9, column
li $t6, 0 # num of not_zero

li $t0 1
loop_i:
bgt $t0, $s0, loop_i_end # $t0 [0,n-1], row
	li $t1 1
	loop_j:
	bgt $t1, $s1, loop_j_end # $t1 [0,m-1], column
	getInt($t3) # $t3 = value
	beq $t3, 0, if_eqz # if($t3 == 0) next ; else goto if_eqz;
	sw $t3, ($t7)
	addi $t7, $t7, 4
	sw $t0, ($t8)
	addi $t8, $t8, 4
	sw $t1, ($t9)
	addi $t9, $t9, 4
	addi $t6, $t6, 1
	if_eqz:
	addi $t1, $t1, 1
	j loop_j
	loop_j_end:
addi $t0, $t0, 1
j loop_i
loop_i_end:

move $t0, $t6
loop_out:
beq $t0, 0, loop_out_end
	subi $t9, $t9, 4
	subi $t8, $t8, 4
	subi $t7, $t7, 4
	lw $a0, ($t8)
	printInt($a0)
	la $a0, space
	li $v0, 4
	syscall
	lw $a0, ($t9)
	printInt($a0)
	la $a0, space
	li $v0, 4
	syscall
	lw $a0, ($t7)
	printInt($a0)
	la $a0, endl
	li $v0, 4
	syscall
subi $t0, $t0, 1
j loop_out
loop_out_end: