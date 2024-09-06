.macro getInt(%ad)
	li $v0 5
	syscall
	move %ad, $v0
.end_macro

.macro printInt(%ad)
	li $v0 1
	move $a0, %ad
	syscall
.end_macro

.text

getInt($s0) # $s0 = n
li $t0, 4
div $s0, $t0 # hi = n mod 4
mfhi $s1 # $s1 = n mod 4
li $t0, 100
div $s0, $t0 # hi = n mod 100
mfhi $s2 # $s2 = n mod 100
seq $s3, $s1, 0 # if($s1 == 0) $s3 = 1 
sgt $s4, $s2, 0 # if($s2 > 0) $s4 = 1
li $t0, 400
div $s0, $t0
mfhi $s6
seq $s7, $s6, 0 # if($s6 == 0) $s7 = 1
and $s5, $s3, $s4 # $s5 = $s1 && $s2
or $s5, $s5, $s7
printInt($s5)