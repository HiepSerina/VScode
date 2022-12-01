.global _start
_start:
	LDR R0, =Str1
	LDR R1, =Str2
	BL SubString
	LDR R1,=Result
	CMP R6,#1
	LDREQ R0, =SubString
	LDRNE R0, =NotSubString
	BL SaveResult
	BAL exit
	
SubString:
	MOV R2, R0
	MOV R3, R1
	
loopfind:
	LDRB R4, [R2], #1
	LDRB R5, [R3], #1
	
	CMP R5, #0
	MOVEQ R6, #1
	BXEQ LR
	
	CMP R4, R5
	BEQ loopfind
	BNE nextstep
	
nextstep:
	ADD R0, R0, #1
	MOV R2, R0
	MOV R3, R1
	BAL loopfind

SaveResult:
	LDRB R2, [R0], #1
	STRB R2, [R1], #1
	CMP R2, #0x00
	BNE SaveResult
	BX LR

exit:
	MOV R7, #1
	SWI 0
.data
 	Str1: .asciz "Hello world\0"
	Str2: .asciz "world\0"
	Result: .asciz "xxx\0"
	Substring: .asciz "Sub\0"
	NotSubString: .asciz "Non\0"