#include "opcodes.h"

opcode_t AVR_opcodes[OpEND] = {
    {"OpADC"    , 0b0001110000000000}, // ADC Rd, Rr
    {"OpADD"    , 0b0000110000000000}, // ADD Rd, Rr
    {"OpADIW"   , 0b1001011000000000}, // ADIW Rdl, K
    {"OpAND"    , 0b0010000000000000}, // AND Rd, Rr
    {"OpANDI"   , 0b0111000000000000}, // ANDI Rd, K
    {"OpASR"    , 0b1001010000000101}, // ASR Rd
    {"OpBCLR"   , 0b1001010010001000}, // BCLR s
    {"OpBLD"    , 0b1111100000000000}, // BLD Rd, b
    {"OpBSET"   , 0b1001010000001000}, // BSET s
    {"OpBST"    , 0b1111101000000000}, // BST Rr}, b
    {"OpCOM"    , 0b1001010000000000}, // COM Rd
    {"OpCP"     , 0b0001010000000000}, // CP Rd, Rr
    {"OpCPC"    , 0b0000010000000000}, // CPC Rd, Rr
    {"OpCPI"    , 0b0011000000000000}, // CPI Rd, K
    {"OpDEC"    , 0b1001010000001010}, // DEC Rd
    {"OpEOR"    , 0b0010010000000000}, // EOR Rd, Rr
    {"OpFMUL"   , 0b0000001100001000}, // FMUL Rd, Rr
    {"OpFMULS"  , 0b0000001110000000}, // FMULS Rd, Rr
    {"OpFMULSU" , 0b0000001110001000}, // FMULSU Rd, Rr
    {"OpINC"    , 0b1001010000000011}, // INC Rd
    {"OpLSR"    , 0b1001010000000110}, // LSR Rd
    {"OpMUL"    , 0b1001110000000000}, // MUL Rd, Rr
    {"OpMULS"   , 0b0000001000000000}, // MULS Rd, Rr
    {"OpMULSU"  , 0b0000001100000000}, // MULSU Rd, Rr
    {"OpNEG"    , 0b1001010000000001}, // NEG Rd
    {"OpOR"     , 0b0010100000000000}, // OR Rd, Rr
    {"OpORI"    , 0b0110000000000000}, // ORI Rd, K
    {"OpROR"    , 0b1001010000000111}, // ROR Rd
    {"OpSBC"    , 0b0000100000000000}, // SBC Rd, Rr
    {"OpSBCI"   , 0b0100000000000000}, // SBCI Rd, K
    {"OpSBIW"   , 0b1001011100000000}, // SBIW Rdl, K
    {"OpSUB"    , 0b0001100000000000}, // SUB Rd, Rr
    {"OpSUBI"   , 0b0101000000000000}, // SUBI Rd, K
    {"OpSWAP"   , 0b1001010000000010}, // SWAP Rd
// Load and Store Opcodes
    {"OpELPM"   , 0b1001010111011000}, // ELPM
    {"OpELPMZ"  , 0b1001000000000110}, // ELPM Rd, Z
    {"OpELPMZI" , 0b1001000000000111}, // ELPM Rd, Z+
    {"OpLDX"    , 0b1001000000001100}, // LD Rd, X
    {"OpLDXI"   , 0b1001000000001101}, // LD Rd, X+
    {"OpLDXD"   , 0b1001000000001110}, // LD Rd, 0X
    {"OpLDYI"   , 0b1001000000001001}, // LD Rd, Y+
    {"OpLDYD"   , 0b1001000000001010}, // LD Rd, 0Y
    {"OpLDDY"   , 0b1000000000001000}, // LDD Rd, Y + q
    {"OpLDZI"   , 0b1001000000000001}, // LD Rd, Z+
    {"OpLDZD"   , 0b1001000000000010}, // LD Rd, 0Z
    {"OpLDDZ"   , 0b1000000000000000}, // LDD Rd, Z + q
    {"OpLDI"    , 0b1110000000000000}, // LDI Rd, k
    {"OpLDS"    , 0b1001000000000000}, // LDS Rd, m
    {"OpLPM"    , 0b1001010111001000}, // LPM
    {"OpLPMZ"   , 0b1001000000000100}, // LPM Rd, Z
    {"OpLPMZI"  , 0b1001000000000101}, // LPM Rd, Z+
    {"OpMOV"    , 0b0010110000000000}, // MOV Rd, Rr
    {"OpMOVW"   , 0b0000000100000000}, // MOVW Rd, Rr
    {"OpSPM"    , 0b1001010111101000}, // SPM
    {"OpSTX"    , 0b1001001000001100}, // ST X, Rr
    {"OpSTXI"   , 0b1001001000001101}, // ST X+, Rr
    {"OpSTXD"   , 0b1001001000001110}, // ST 0X, Rr
    {"OpSTYI"   , 0b1001001000001001}, // ST Y+, Rr
    {"OpSTYD"   , 0b1001001000001010}, // ST 0Y, Rr
    {"OpSTDY"   , 0b1000001000001000}, // STD Y + q, Rr
    {"OpSTZI"   , 0b1001001000000001}, // ST Z+, Rr
    {"OpSTZD"   , 0b1001001000000010}, // ST 0Z, Rr
    {"OpSTDZ"   , 0b1000001000000000}, // STD Z + q, Rr
    {"OpSTS"    , 0b1001001000000000}, // STS m, Rr
// Push and Pop Opcodes
    {"OpPOP"    , 0b1001000000001111}, // POP Rd
    {"OpPUSH"   , 0b1001001000001111}, // PUSH Rd
// Unconditional Branches
    {"OpEICALL" , 0b1001010100011001}, // EICALL
    {"OpEIJMP"  , 0b1001010000011001}, // EIJMP
    {"OpJMP"    , 0b1001010000001100}, // JMP a
    {"OpRJMP"   , 0b1100000000000000}, // RJMP j
    {"OpIJMP"   , 0b1001010000001001}, // IJMP
    {"OpCALL"   , 0b1001010000001110}, // CALL a
    {"OpRCALL"  , 0b1101000000000000}, // RCALL j
    {"OpICALL"  , 0b1001010100001001}, // ICALL
    {"OpRET"    , 0b1001010100001000}, // RET
    {"OpRETI"   , 0b1001010100011000}, // RETI
// Conditional Branches
    {"OpBRBC"   , 0b1111010000000000}, // BRBC s, r
    {"OpBRBS"   , 0b1111000000000000}, // BRBS s, r
// Skip Instructions
    {"OpCPSE"   , 0b0001000000000000}, // CPSE Rd, Rr
    {"OpSBIC"   , 0b1001100100000000}, // SBIC p, b
    {"OpSBIS"   , 0b1001101100000000}, // SBIS p, b
    {"OpSBRC"   , 0b1111110000000000}, // SBRC Rr, b
    {"OpSBRS"   , 0b1111111000000000}, // SBRS Rr, b
// I/O Instructions
    {"OpCBI"    , 0b1001100000000000}, // CBI p, b
    {"OpIN"     , 0b1011000000000000}, // IN Rd, p
    {"OpOUT"    , 0b1011100000000000}, // OUT p, Rr
    {"OpSBI"    , 0b1001101000000000}, // SBI p, b
// Miscellaneous Instructions
    {"OpBREAK"  , 0b1001010110011000}, // BREAK
    {"OpNOP"    , 0b0000000000000000}, // NOP
    {"OpSLP"    , 0b1001010110001000}, // SLEEP
    {"OpWDR"    , 0b1001010110101000}, // WDR
};
