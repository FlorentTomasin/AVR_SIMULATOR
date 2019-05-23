#ifndef _OPCODES_H
#define _OPCODES_H
/*
 *
 * ALU opcodes
 *
 */
#include "common.h"

enum opcode{
    OpADC = 0, // ADC Rd, Rr
    OpADD    , // ADD Rd, Rr
    OpADIW   , // ADIW Rdl, K
    OpAND    , // AND Rd, Rr
    OpANDI   , // ANDI Rd, K
    OpASR    , // ASR Rd
    OpBCLR   , // BCLR s
    OpBLD    , // BLD Rd, b
    OpBSET   , // BSET s
    OpBST    , // BST Rr, b
    OpCOM    , // COM Rd
    OpCP     , // CP Rd, Rr
    OpCPC    , // CPC Rd, Rr
    OpCPI    , // CPI Rd, K
    OpDEC    , // DEC Rd
    OpEOR    , // EOR Rd, Rr
    OpFMUL   , // FMUL Rd, Rr
    OpFMULS  , // FMULS Rd, Rr
    OpFMULSU , // FMULSU Rd, Rr
    OpINC    , // INC Rd
    OpLSR    , // LSR Rd
    OpMUL    , // MUL Rd, Rr
    OpMULS   , // MULS Rd, Rr
    OpMULSU  , // MULSU Rd, Rr
    OpNEG    , // NEG Rd
    OpOR     , // OR Rd, Rr
    OpORI    , // ORI Rd, K
    OpROR    , // ROR Rd
    OpSBC    , // SBC Rd, Rr
    OpSBCI   , // SBCI Rd, K
    OpSBIW   , // SBIW Rdl, K
    OpSUB    , // SUB Rd, Rr
    OpSUBI   , // SUBI Rd, K
    OpSWAP   , // SWAP Rd
// Load and Store Opcodes
    OpELPM   , // ELPM
    OpELPMZ  , // ELPM Rd, Z
    OpELPMZI , // ELPM Rd, Z+
    OpLDX    , // LD Rd, X
    OpLDXI   , // LD Rd, X+
    OpLDXD   , // LD Rd, 0X
    OpLDYI   , // LD Rd, Y+
    OpLDYD   , // LD Rd, 0Y
    OpLDDY   , // LDD Rd, Y + q
    OpLDZI   , // LD Rd, Z+
    OpLDZD   , // LD Rd, 0Z
    OpLDDZ   , // LDD Rd, Z + q
    OpLDI    , // LDI Rd, k
    OpLDS    , // LDS Rd, m
    OpLPM    , // LPM
    OpLPMZ   , // LPM Rd, Z
    OpLPMZI  , // LPM Rd, Z+
    OpMOV    , // MOV Rd, Rr
    OpMOVW   , // MOVW Rd, Rr
    OpSPM    , // SPM
    OpSTX    , // ST X, Rr
    OpSTXI   , // ST X+, Rr
    OpSTXD   , // ST 0X, Rr
    OpSTYI   , // ST Y+, Rr
    OpSTYD   , // ST 0Y, Rr
    OpSTDY   , // STD Y + q, Rr
    OpSTZI   , // ST Z+, Rr
    OpSTZD   , // ST 0Z, Rr
    OpSTDZ   , // STD Z + q, Rr
    OpSTS    , // STS m, Rr
// Push and Pop Opcodes
    OpPOP    , // POP Rd
    OpPUSH   , // PUSH Rd
// Unconditional Branches
    OpEICALL , // EICALL
    OpEIJMP  , // EIJMP
    OpJMP    , // JMP a
    OpRJMP   , // RJMP j
    OpIJMP   , // IJMP
    OpCALL   , // CALL a
    OpRCALL  , // RCALL j
    OpICALL  , // ICALL
    OpRET    , // RET
    OpRETI   , // RETI
// Conditional Branches
    OpBRBC   , // BRBC s, r
    OpBRBS   , // BRBS s, r
// Skip Instructions
    OpCPSE   , // CPSE Rd, Rr
    OpSBIC   , // SBIC p, b
    OpSBIS   , // SBIS p, b
    OpSBRC   , // SBRC Rr, b
    OpSBRS   , // SBRS Rr, b
// I/O Instructions
    OpCBI    , // CBI p, b
    OpIN     , // IN Rd, p
    OpOUT    , // OUT p, Rr
    OpSBI    , // SBI p, b
// Miscellaneous Instructions
    OpBREAK  , // BREAK
    OpNOP    , // NOP
    OpSLP    , // SLEEP
    OpWDR    , // WDR
    OpEND,
};

typedef struct {
    char name[16];
    uint16_t val;
} opcode_t;

extern opcode_t AVR_opcodes[OpEND];
#endif /* _OPCODES_H */
