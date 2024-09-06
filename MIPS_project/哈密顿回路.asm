.data
G: .space 256 # int G[8][8]
book: .space 32 # int book[8]

.macro getInt(%ad)
	li $v0, 5
	syscall
	move %ad, $v0
.end_macro

.macro printInt(%ad)
	li $v0, 1
	move $a0, %ad
	syscall
.end_macro

.macro pop(%ad)
	addi $sp, $sp, 4
	lw %ad, ($sp)
.end_macro

.macro push(%ad)
	sw %ad, ($sp)
	subi $sp, $sp, 4
.end_macro

.macro getIndex(%res, %i, %j)
	sll %res, %i, 3 # %res = %i * 8
	add %res, %res, %j #res += %j
	sll %res, %res, 2 # %res *= 4
.end_macro


.text
getInt($s0) # $s0 = n
getInt($s1) # $s1 = m
li $t0, 0
read_loop:
beq $t0, $s1, read_loop_end
	getInt($t1) # $t1 = x
	subi $t1, $t1, 1 # $t1 -= 1
	getInt($t2) # $t2 = y
	subi $t2, $t2, 1 # $t2 -= 1
	getIndex($t3, $t1, $t2)
	li $t4, 1
	sw $t4, G($t3)
	getIndex($t3, $t2, $t1)
	sw $t4, G($t3)
addi $t0, $t0, 1
j read_loop
read_loop_end:

li $t0, 0
li $v0, 0
move $a0, $t0 # $a0 = 0
jal dfs # dfs(0)
move $a0, $v0
printInt($a0)
li $v0, 10
syscall


dfs: # $a0 = (int) x   ,ans = $v0
	#push stack
	push($ra)
	push($t0)
	push($t1)
	push($t2)
	push($t3)
	push($t4)
	
	
	#move $a0
	move $t0, $a0 # $t0 = x
	
	
	#do sth.
	li $t1, 1 # $t1 = 1
	getIndex($t4, $zero, $t0) 
	sw $t1, book($t4) # book[x] = 1
	li $t2, 1 # $t2 = flag = 1
	
	# judge if pass all point
	li $t3, 0 
	loop1:
	beq $t3, $s0, loop1_end
		getIndex($t4, $zero, $t3)
		lw $t4, book($t4)
		and $t2, $t2, $t4 # flag &= book[i]
	addi $t3, $t3, 1
	j loop1
	loop1_end:
	
	# judge if build
	getIndex($t3, $t0, $zero)
	lw $t3, G($t3) # $t3 = G[x][0]
	and $t3, $t3, $t2 # $t3 = G[x][0] && flag
	beq $t3, 0, not_build 
	li $v0, 1
	j return # if ($t3 != 0) ans = 1; return;
	not_build: # if ($t3 == 0)
	
	# search
	li $t3, 0
	loop2:
	beq $t3, $s0, loop2_end
		getIndex($t2, $zero, $t3)
		lw $t2, book($t2) # $t2 = book[i]
		xori $t2, $t2, 1 # $t2 = !book[i]
		getIndex($t4, $t0, $t3)
		lw $t4, G($t4) # $t4 = G[x][i]
		and $t2, $t2, $t4 # $t2 = !book[i] && G[x][i]
		beq $t2, 0, not_hav_edge
			move $a0, $t3
			jal dfs
		not_hav_edge:
	addi $t3, $t3, 1
	j loop2
	loop2_end:
	
	getIndex($t4, $zero, $t0) 
	sw $zero, book($t4) # book[x] = 0
	
	return:
	#pop stack
	
	pop($t4)
	pop($t3)
	pop($t2)
	pop($t1)
	pop($t0)
	pop($ra)
	#return
	jr $ra
