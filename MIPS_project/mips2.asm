.data
array: .space 40 # int * 10 = 40
str: .asciiz "The numbers are:\n"
space: .asciiz " "

.text
li $v0, 5 
syscall # in: $v0 = n
move $s0, $v0 # $s0 = n
li $t0, 0 # $t0 = 0

loop_in:
beq $t0, $s0, loop_in_end # if $t0 == $s0 outloop
li $v0, 5 
syscall # in: $v0 = num 
move $s1, $v0 # $s1 = $v0
sll $t1, $t0, 2  # $t1 = $t0 << 2
sw $s1, array($t1) # $array[$t0] = $s1
addi $t0, $t0, 1 # $t0 += 1
j loop_in

loop_in_end:
la $a0, str # $a0 = str
li $v0, 4 
syscall # print string: $a0
li $t0, 0 # $t0 = 0 

loop_out:
beq $t0, $s0, loop_out_end # if $t0 == $s0 outloop
sll $t1, $t0, 2 # $t1 = $t0 << 2
lw $a0, array($t1) # $a0 = array[$t0]
li $v0, 1 
syscall # print integer: $a0
la $a0 space # $a0 = space
li $v0 4
syscall # print string: space
j loop_out

loop_out_end:
li $v0, 10
syscall # end