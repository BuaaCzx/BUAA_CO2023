.data
array: .space 4096
endl: .asciiz "\n"

.macro readInt(%ad)
	li $v0, 5
	syscall
	move %ad, $v0
.end_macro

.macro printInt(%ad)
	move $a0, %ad
	li $v0, 1
	syscall
.end_macro

.macro printStr(%ad)
	li $v0, 4
	la $a0, %ad
	syscall
.end_macro

.macro getIndex(%res, %i)
	sll %res, %i, 2
.end_macro

.macro push(%ad)
	sw %ad, ($sp)
	subi $sp, $sp, 4
.end_macro

.macro pop(%ad)
	addi $sp, $sp, 4
	lw %ad, ($sp)
.end_macro

.text

readInt($s0) # $s0 = m
li $t0, 0
read_loop:
beq $t0, $s0, read_loop_end
	readInt($t1)
	getIndex($t2, $t0)
	sw $t1, array($t2) # array[i] = read()
addi $t0, $t0, 1
j read_loop
read_loop_end:

readInt($s1) # $s1 = n
li $t0, 0
solve_loop:
beq $t0, $s1, solve_loop_end
	readInt($s2) # s2 = x
	li $a0, 0
	move $a1, $s0
	jal b_search
	printInt($v0)
	printStr(endl)
addi $t0, $t0, 1
j solve_loop
solve_loop_end:

li $v0, 10
syscall

b_search:
# push
push($ra)
push($t0)
push($t1)
push($t2)
push($t3)
# move a
move $t0, $a0
move $t1, $a1

# do sth.
bne $t0, $t1, uneq
	getIndex($t2, $t0)
	lw $t2, array($t2)
	bne $t2, $s2, else
		beq $t2, $s0, else
			li $v0, 1
			j return
	else:
		li $v0, 0
		j return

uneq:
	add $t2, $t0, $t1
	div $t2, $t2, 2
	sll $t3, $t2, 2
	lw $t3, array($t3)
	bge $t3, $s2, else2
		addi $t2, $t2, 1
		move $a0, $t2
		move $a1, $t1
		jal b_search
		j return
	else2:
		move $a0, $t0
		move $a1, $t2
		jal b_search
		j return
	

return:
# pop
pop($t3)
pop($t2)
pop($t1)
pop($t0)
pop($ra)

# return
jr $ra