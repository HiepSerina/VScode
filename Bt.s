
//tach so duong va so am ve hai o nho 3000H va 5000H
    MOV R0,#0
    MOV R1,#1000H
    MOV R2,#3000H
    MOV R3, #5000H

loop
    LRR R4, [R1],#4
    CMP R4. #0
    STRLT R4,[R2],#4
    STRGE R4,[R3],#4
    ADD R0,R0,#1
    CMP R0, #1024
    BNE loop