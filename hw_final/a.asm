	      INT	0, 12
	      SUP	0, main
	      RET	0, 0
sort:
	      INT	0, 32
	      LDA	1, 20
	     LITI	0, 0
	      STX	0, 0
	      POP	0, 1
L2:
	      LOD	1, 20
	      LOD	1, 16
	     LSSI	0, 0
	      JPC	0, L3
	      LDA	1, 24
	      LOD	1, 20
	     LITI	0, 1
	     ADDI	0, 0
	      STX	0, 0
	      POP	0, 1
L5:
	      LOD	1, 24
	      LOD	1, 16
	     LSSI	0, 0
	      JPC	0, L6
	      LOD	1, 12
	      LOD	1, 20
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	      LOD	1, 12
	      LOD	1, 24
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	     LSSI	0, 0
	      JPC	0, L7
	      LDA	1, 28
	      LOD	1, 12
	      LOD	1, 20
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	      STX	0, 0
	      POP	0, 1
	      LOD	1, 12
	      LOD	1, 20
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LOD	1, 12
	      LOD	1, 24
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LDI	0, 0
	      STX	0, 0
	      POP	0, 1
	      LOD	1, 12
	      LOD	1, 24
	     LITI	0, 4
	     MULI	0, 0
	   OFFSET	0, 0
	      LOD	1, 28
	      STX	0, 0
	      POP	0, 1
L7:
L4:
	      LDA	1, 24
	      LOD	1, 24
	     LITI	0, 1
	     ADDI	0, 0
	      STX	0, 0
	      POP	0, 1
	      JMP	0, L5
L6:
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
