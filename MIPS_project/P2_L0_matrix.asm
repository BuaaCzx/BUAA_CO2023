.data
matrix1: .space 256 # int matrix1[8][8]
matrix2: .space 256 # int matrix2[8][8]
matrix_res: .space 256 # int matrix_res[8][8]
endl: .asciiz "\n"
space: .asciiz " "

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

.macro printStr(%ad)
	la $a0, %ad
	li $v0, 4
	syscall
.end_macro

.macro getIndex(%res, %i, %j)
	sll %res, %i, 3 # res = i * 8
	add %res, %res, %j # res += j
	sll %res, %res, 2 # res *= 4
.end_macro

.text
getInt($s0) # n = read()

# get matrix1
li $t1, 0 # $t1 = i = 0
loop1:
beq $t1, $s0, loop1_end # if(i==n) break
	
	li $t2, 0 # $t2 = j = 0
	loop2:
	beq $t2, $s0, loop2_end # if(j==m) break
		getInt($t0)
		getIndex($t3, $t1, $t2)
		sw $t0, matrix1($t3) # matrix1[i][j] = read()
	addi $t2, $t2, 1
	j loop2
	loop2_end:
	
addi $t1, $t1, 1 # i++
j loop1
loop1_end:

# get matrix2
li $t1, 0 # $t1 = i = 0
loop3:
beq $t1, $s0, loop3_end # if(i==n) break
	
	li $t2, 0 # $t2 = j = 0
	loop4:
	beq $t2, $s0, loop4_end # if(j==m) break
		getInt($t0)
		getIndex($t3, $t1, $t2)
		sw $t0, matrix2($t3) # matrix2[i][j] = read()
	addi $t2, $t2, 1
	j loop4
	loop4_end:
	
addi $t1, $t1, 1 # i++
j loop3
loop3_end:

# calc res
#for(int i=0;i<n;i++){
#	for(int j=0;j<n;j++){// calc res[i][j]
#		for(int k=0;k<n;k++){
#			res[i][j] += matrix1[i][k]*matrix2[k][j]
#		}
#	}
#}
li $t1, 0 # $t1 = i = 0
calc_loop1:
beq $t1, $s0, calc_loop1_end # if(i==n) break
	
	li $t2, 0 # $t2 = j = 0
	calc_loop2:
	beq $t2, $s0, calc_loop2_end # if(j==m) break
		li $t0, 0 # res = 0
		
		li $t3, 0 # $t3 = k = 0
		calc_loop3:
		beq $t3, $s0, calc_loop3_end
			# res[i][j] += matrix1[i][k]*matrix2[k][j]
			getIndex($t4, $t1, $t3)
			lw $t4, matrix1($t4) # $t4 = matrix1[i][k]
			getIndex($t5, $t3, $t2)
			lw $t5, matrix2($t5) # $t5 = matrix2[k][j]
			mult $t4, $t5 # lo = matrix1[i][k]*matrix2[k][j]
			mflo $t4
			add $t0, $t0, $t4 # $t0 += lo
		addi $t3, $t3, 1
		j calc_loop3
		calc_loop3_end:
		
		printInt($t0)
		printStr(space)
		
	addi $t2, $t2, 1
	j calc_loop2
	calc_loop2_end:
	
	printStr(endl)
	
addi $t1, $t1, 1 # i++
j calc_loop1
calc_loop1_end:
