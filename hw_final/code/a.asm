	      INT	0, 36
	      SUP	0, main
	      RET	0, 0
main:
	      INT	0, 1236
	      LDA	1, 36
	     LITI	0, 1
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	     LITI	0, 2
	      STX	0, 0
	      POP	0, 1
	      INT	0, 12
	      LDA	0, 12
	     LITI	0, 2
	      POP	0, 5
	     ADDR	0, printf
	      CAL	0, 0
	      LDA	1, 12
	     LITI	0, 100
	      STX	0, 0
	      POP	0, 1
	      LDA	1, 16
	     LITI	0, 1
	      STX	0, 0
	      POP	0, 1
	      LDA	1, 28
	     LITI	0, 1
	      STX	0, 0
	      POP	0, 1
	      LDA	1, 20
	     LITI	0, 2
	      STX	0, 0
	      POP	0, 1
L2:
	      LOD	1, 20
	      LOD	1, 12
	     LEQI	0, 0
	      JPC	0, L3
L6:
	      LDA	1, 16
	      LOD	1, 16
	     LITI	0, 1
	     ADDI	0, 0
	      STX	0, 0
	      POP	0, 1
	      LOD	1, 16
	      LDA	1, 16
	      LDX	0, 0
	     INCI	0, 0
	      STO	0, 0
	      POP	0, 1
	      LDA	1, 36
	      LOD	1, 28
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	      LDA	1, 36
	      LOD	1, 28
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	     MULI	0, 0
	      LOD	1, 16
	     LEQI	0, 0
	      JPC	0, L7
	      LOD	1, 28
	      LDA	1, 28
	      LDX	0, 0
	     INCI	0, 0
	      STO	0, 0
	      POP	0, 1
L7:
	      LDA	1, 24
	     LITI	0, 2
	      STX	0, 0
	      POP	0, 1
	      LDA	1, 32
	     LITI	0, 1
	      STX	0, 0
	      POP	0, 1
L9:
	      LOD	1, 32
	     JPCR	0, L10
	      LOD	1, 24
	      LOD	1, 28
	     LSSI	0, 0
L10:
	      JPC	0, L11
	      LDA	1, 32
	      LOD	1, 16
	      LDA	1, 36
	      LOD	1, 24
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	      MOD	0, 0
	      STX	0, 0
	      POP	0, 1
	      LOD	1, 24
	      LDA	1, 24
	      LDX	0, 0
	     INCI	0, 0
	      STO	0, 0
	      POP	0, 1
L8:
	      JMP	0, L9
L11:
L5:
	      LOD	1, 32
	      NOT	0, 0
	      JPT	0, L6
L4:
	      LDA	1, 36
	      LOD	1, 20
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LOD	1, 16
	      STX	0, 0
	      POP	0, 1
	      INT	0, 12
	      LDA	0, 20
	      LOD	1, 16
	      POP	0, 5
	     ADDR	0, printf
	      CAL	0, 0
	      LOD	1, 20
	     LITI	0, 10
	      MOD	0, 0
	     LITI	0, 0
	     EQLI	0, 0
	      JPC	0, L12
	      INT	0, 12
	      LDA	0, 28
	      POP	0, 4
	     ADDR	0, printf
	      CAL	0, 0
L12:
L1:
	      LOD	1, 20
	      LDA	1, 20
	      LDX	0, 0
	     INCI	0, 0
	      STO	0, 0
	      POP	0, 1
	      JMP	0, L2
L3:
	      RET	0, 0
.literal    12  "%d "
.literal    20  "%d "
.literal    28  "\n"
