# Web site :
http://www.microchip.com/webdoc/avrassembler/avrassembler.wb_instructions.Arithmetic_and_Logic_Instructions.html

http://microchipdeveloper.com/8avr:avrcore

https://en.wikipedia.org/wiki/Atmel_AVR_instruction_set

```
SREG : Status register
C : Carry flag in status register

Z : Zero flag in status register

N : Negative flag in status register

V : Two's complement overflow indicator

S : N [+] V, For signed tests

H : Half Carry flag in the status register

T : Transfer bit used by BLD and BST instructions

I : Global interrupt enable/disable flag
```

## Registers and Operands
```
Rd : Destination (and source) register in the register file

Rr : Source register in the register file

R : Result after instruction is executed

K : Constant data

k : Constant address

b : Bit in the register file or I/O register (3 bit)

s: Bit in the status register (3 bit)

X,Y,Z : Indirect address register (X=R27:R26, Y=R29:R28 and Z=R31:R30)

A : I/O location address

q : Displacement for direct addressing (6 bit)
```

## Compilation :
```
mkdir build
cd build
cmake ..
make
./ALU
```

## Display:

### bin:
```
xxd -b file
```
### hex:
```
xxd file
```

## HEX to ASSEMBLY :
```
avr-objdump -m avr -D test.ino.with_bootloader.standard.hex
```
```
[:][10][0000][00][0C94 3400 0C94 4600 0C94 4600 0C94 4600][6A]

HEX  : 0C 94
BIN  : 00001100 10010100
HEX  : 34 00
BIN  : 00110100 00000000
INST : JMP 0b00110100 00000000 00000---
INST : JMP 68 00 0

HEX  : 0C 94
BIN  : 00001100 10010100
HEX  : 46 00
BIN  : 10001100 0000000
INST : JMP 0b10001100 0000000 00000
INST : JMP 8C 00 0

[:][10][0010][00][0C94 4600 0C94 4600 0C94 4600 0C94 4600][48]
```



http://nuft.github.io/avr/2015/08/02/avr-hex-programming.html
