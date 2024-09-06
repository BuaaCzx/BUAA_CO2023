.data
string: .space 128 # int string[32]

.macro readInt(%ad)
	li $v0, 5
	syscall
	move %ad, $v0
.end_macro

.macro printInt(%ad)
	li $v0, 1
	move $a0, %ad
	syscall
.end_macro

.macro readChar(%ad)
	li $v0, 12
	syscall
	move %ad, $v0
.end_macro

.macro getIndex(%res, %i)
	move %res, %i
	sll %res, %res, 2
.end_macro

.text

readInt($s0) # $s0 = n
li $t1, 1

read_loop:
bgt $t1, $s0, read_loop_end
	readChar($t0)
	getIndex($t2, $t1)
	sw $t0, string($t2)
addi $t1, $t1, 1
j read_loop
read_loop_end:

li $s1, 1
li $t1, 1
move $t2, $s0

solve_loop:
bge $t1, $t2, solve_loop_end
	
	getIndex($t3, $t1)
	lw $t3, string($t3)
	getIndex($t4, $t2)
	lw $t4, string($t4)
	beq $t3, $t4, equal
		li $s1, 0
	equal:
	
addi $t1, $t1, 1
addi $t2, $t2, -1
j solve_loop
solve_loop_end:

printInt($s1)