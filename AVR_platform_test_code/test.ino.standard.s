avr-objdump -m avr -D test.ino.standard.hex 

test.ino.standard.hex:     format de fichier ihex


Déassemblage de la section .sec1 :

00000000 <.sec1>:
   0:	0c 94 34 00 	jmp	0x68	;  0x68
   4:	0c 94 46 00 	jmp	0x8c	;  0x8c
   8:	0c 94 46 00 	jmp	0x8c	;  0x8c
   c:	0c 94 46 00 	jmp	0x8c	;  0x8c
  10:	0c 94 46 00 	jmp	0x8c	;  0x8c
  14:	0c 94 46 00 	jmp	0x8c	;  0x8c
  18:	0c 94 46 00 	jmp	0x8c	;  0x8c
  1c:	0c 94 46 00 	jmp	0x8c	;  0x8c
  20:	0c 94 46 00 	jmp	0x8c	;  0x8c
  24:	0c 94 46 00 	jmp	0x8c	;  0x8c
  28:	0c 94 46 00 	jmp	0x8c	;  0x8c
  2c:	0c 94 46 00 	jmp	0x8c	;  0x8c
  30:	0c 94 46 00 	jmp	0x8c	;  0x8c
  34:	0c 94 46 00 	jmp	0x8c	;  0x8c
  38:	0c 94 46 00 	jmp	0x8c	;  0x8c
  3c:	0c 94 46 00 	jmp	0x8c	;  0x8c
  40:	0c 94 48 00 	jmp	0x90	;  0x90
  44:	0c 94 46 00 	jmp	0x8c	;  0x8c
  48:	0c 94 46 00 	jmp	0x8c	;  0x8c
  4c:	0c 94 46 00 	jmp	0x8c	;  0x8c
  50:	0c 94 46 00 	jmp	0x8c	;  0x8c
  54:	0c 94 46 00 	jmp	0x8c	;  0x8c
  58:	0c 94 46 00 	jmp	0x8c	;  0x8c
  5c:	0c 94 46 00 	jmp	0x8c	;  0x8c
  60:	0c 94 46 00 	jmp	0x8c	;  0x8c
  64:	0c 94 46 00 	jmp	0x8c	;  0x8c
  68:	11 24       	eor	r1, r1
  6a:	1f be       	out	0x3f, r1	; 63
  6c:	cf ef       	ldi	r28, 0xFF	; 255
  6e:	d8 e0       	ldi	r29, 0x08	; 8
  70:	de bf       	out	0x3e, r29	; 62
  72:	cd bf       	out	0x3d, r28	; 61
  74:	21 e0       	ldi	r18, 0x01	; 1
  76:	a0 e0       	ldi	r26, 0x00	; 0
  78:	b1 e0       	ldi	r27, 0x01	; 1
  7a:	01 c0       	rjmp	.+2      	;  0x7e
  7c:	1d 92       	st	X+, r1
  7e:	a9 30       	cpi	r26, 0x09	; 9
  80:	b2 07       	cpc	r27, r18
  82:	e1 f7       	brne	.-8      	;  0x7c
  84:	0e 94 92 00 	call	0x124	;  0x124
  88:	0c 94 dc 00 	jmp	0x1b8	;  0x1b8
  8c:	0c 94 00 00 	jmp	0	;  0x0
  90:	1f 92       	push	r1
  92:	0f 92       	push	r0
  94:	0f b6       	in	r0, 0x3f	; 63
  96:	0f 92       	push	r0
  98:	11 24       	eor	r1, r1
  9a:	2f 93       	push	r18
  9c:	3f 93       	push	r19
  9e:	8f 93       	push	r24
  a0:	9f 93       	push	r25
  a2:	af 93       	push	r26
  a4:	bf 93       	push	r27
  a6:	80 91 05 01 	lds	r24, 0x0105
  aa:	90 91 06 01 	lds	r25, 0x0106
  ae:	a0 91 07 01 	lds	r26, 0x0107
  b2:	b0 91 08 01 	lds	r27, 0x0108
  b6:	30 91 04 01 	lds	r19, 0x0104
  ba:	23 e0       	ldi	r18, 0x03	; 3
  bc:	23 0f       	add	r18, r19
  be:	2d 37       	cpi	r18, 0x7D	; 125
  c0:	20 f4       	brcc	.+8      	;  0xca
  c2:	01 96       	adiw	r24, 0x01	; 1
  c4:	a1 1d       	adc	r26, r1
  c6:	b1 1d       	adc	r27, r1
  c8:	05 c0       	rjmp	.+10     	;  0xd4
  ca:	26 e8       	ldi	r18, 0x86	; 134
  cc:	23 0f       	add	r18, r19
  ce:	02 96       	adiw	r24, 0x02	; 2
  d0:	a1 1d       	adc	r26, r1
  d2:	b1 1d       	adc	r27, r1
  d4:	20 93 04 01 	sts	0x0104, r18
  d8:	80 93 05 01 	sts	0x0105, r24
  dc:	90 93 06 01 	sts	0x0106, r25
  e0:	a0 93 07 01 	sts	0x0107, r26
  e4:	b0 93 08 01 	sts	0x0108, r27
  e8:	80 91 00 01 	lds	r24, 0x0100
  ec:	90 91 01 01 	lds	r25, 0x0101
  f0:	a0 91 02 01 	lds	r26, 0x0102
  f4:	b0 91 03 01 	lds	r27, 0x0103
  f8:	01 96       	adiw	r24, 0x01	; 1
  fa:	a1 1d       	adc	r26, r1
  fc:	b1 1d       	adc	r27, r1
  fe:	80 93 00 01 	sts	0x0100, r24
 102:	90 93 01 01 	sts	0x0101, r25
 106:	a0 93 02 01 	sts	0x0102, r26
 10a:	b0 93 03 01 	sts	0x0103, r27
 10e:	bf 91       	pop	r27
 110:	af 91       	pop	r26
 112:	9f 91       	pop	r25
 114:	8f 91       	pop	r24
 116:	3f 91       	pop	r19
 118:	2f 91       	pop	r18
 11a:	0f 90       	pop	r0
 11c:	0f be       	out	0x3f, r0	; 63
 11e:	0f 90       	pop	r0
 120:	1f 90       	pop	r1
 122:	18 95       	reti
 124:	78 94       	sei
 126:	84 b5       	in	r24, 0x24	; 36
 128:	82 60       	ori	r24, 0x02	; 2
 12a:	84 bd       	out	0x24, r24	; 36
 12c:	84 b5       	in	r24, 0x24	; 36
 12e:	81 60       	ori	r24, 0x01	; 1
 130:	84 bd       	out	0x24, r24	; 36
 132:	85 b5       	in	r24, 0x25	; 37
 134:	82 60       	ori	r24, 0x02	; 2
 136:	85 bd       	out	0x25, r24	; 37
 138:	85 b5       	in	r24, 0x25	; 37
 13a:	81 60       	ori	r24, 0x01	; 1
 13c:	85 bd       	out	0x25, r24	; 37
 13e:	80 91 6e 00 	lds	r24, 0x006E
 142:	81 60       	ori	r24, 0x01	; 1
 144:	80 93 6e 00 	sts	0x006E, r24
 148:	10 92 81 00 	sts	0x0081, r1
 14c:	80 91 81 00 	lds	r24, 0x0081
 150:	82 60       	ori	r24, 0x02	; 2
 152:	80 93 81 00 	sts	0x0081, r24
 156:	80 91 81 00 	lds	r24, 0x0081
 15a:	81 60       	ori	r24, 0x01	; 1
 15c:	80 93 81 00 	sts	0x0081, r24
 160:	80 91 80 00 	lds	r24, 0x0080
 164:	81 60       	ori	r24, 0x01	; 1
 166:	80 93 80 00 	sts	0x0080, r24
 16a:	80 91 b1 00 	lds	r24, 0x00B1
 16e:	84 60       	ori	r24, 0x04	; 4
 170:	80 93 b1 00 	sts	0x00B1, r24
 174:	80 91 b0 00 	lds	r24, 0x00B0
 178:	81 60       	ori	r24, 0x01	; 1
 17a:	80 93 b0 00 	sts	0x00B0, r24
 17e:	80 91 7a 00 	lds	r24, 0x007A
 182:	84 60       	ori	r24, 0x04	; 4
 184:	80 93 7a 00 	sts	0x007A, r24
 188:	80 91 7a 00 	lds	r24, 0x007A
 18c:	82 60       	ori	r24, 0x02	; 2
 18e:	80 93 7a 00 	sts	0x007A, r24
 192:	80 91 7a 00 	lds	r24, 0x007A
 196:	81 60       	ori	r24, 0x01	; 1
 198:	80 93 7a 00 	sts	0x007A, r24
 19c:	80 91 7a 00 	lds	r24, 0x007A
 1a0:	80 68       	ori	r24, 0x80	; 128
 1a2:	80 93 7a 00 	sts	0x007A, r24
 1a6:	10 92 c1 00 	sts	0x00C1, r1
 1aa:	c0 e0       	ldi	r28, 0x00	; 0
 1ac:	d0 e0       	ldi	r29, 0x00	; 0
 1ae:	20 97       	sbiw	r28, 0x00	; 0
 1b0:	f1 f3       	breq	.-4      	;  0x1ae
 1b2:	0e 94 00 00 	call	0	;  0x0
 1b6:	fb cf       	rjmp	.-10     	;  0x1ae
 1b8:	f8 94       	cli
 1ba:	ff cf       	rjmp	.-2      	;  0x1ba
