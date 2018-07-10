// ALU opcodes

static uint16_t OpADC    = 0b0001110000000000; // ADC Rd, Rr
static uint16_t OpADD    = 0b0000110000000000; // ADD Rd, Rr
static uint16_t OpADIW   = 0b1001011000000000; // ADIW Rdl, K
static uint16_t OpAND    = 0b0010000000000000; // AND Rd, Rr
static uint16_t OpANDI   = 0b0111000000000000; // ANDI Rd, K
static uint16_t OpASR    = 0b1001010000000101; // ASR Rd
static uint16_t OpBCLR   = 0b1001010010001000; // BCLR s
static uint16_t OpBLD    = 0b1111100000000000; // BLD Rd, b
static uint16_t OpBSET   = 0b1001010000001000; // BSET s
static uint16_t OpBST    = 0b1111101000000000; // BST Rr, b
static uint16_t OpCOM    = 0b1001010000000000; // COM Rd
static uint16_t OpCP     = 0b0001010000000000; // CP Rd, Rr
static uint16_t OpCPC    = 0b0000010000000000; // CPC Rd, Rr
static uint16_t OpCPI    = 0b0011000000000000; // CPI Rd, K
static uint16_t OpDEC    = 0b1001010000001010; // DEC Rd
static uint16_t OpEOR    = 0b0010010000000000; // EOR Rd, Rr
static uint16_t OpFMUL   = 0b0000001100001000; // FMUL Rd, Rr
static uint16_t OpFMULS  = 0b0000001110000000; // FMULS Rd, Rr
static uint16_t OpFMULSU = 0b0000001110001000; // FMULSU Rd, Rr
static uint16_t OpINC    = 0b1001010000000011; // INC Rd
static uint16_t OpLSR    = 0b1001010000000110; // LSR Rd
static uint16_t OpMUL    = 0b1001110000000000; // MUL Rd, Rr
static uint16_t OpMULS   = 0b0000001000000000; // MULS Rd, Rr
static uint16_t OpMULSU  = 0b0000001100000000; // MULSU Rd, Rr
static uint16_t OpNEG    = 0b1001010000000001; // NEG Rd
static uint16_t OpOR     = 0b0010100000000000; // OR Rd, Rr
static uint16_t OpORI    = 0b0110000000000000; // ORI Rd, K
static uint16_t OpROR    = 0b1001010000000111; // ROR Rd
static uint16_t OpSBC    = 0b0000100000000000; // SBC Rd, Rr
static uint16_t OpSBCI   = 0b0100000000000000; // SBCI Rd, K
static uint16_t OpSBIW   = 0b1001011100000000; // SBIW Rdl, K
static uint16_t OpSUB    = 0b0001100000000000; // SUB Rd, Rr
static uint16_t OpSUBI   = 0b0101000000000000; // SUBI Rd, K
static uint16_t OpSWAP   = 0b1001010000000010; // SWAP Rd

// Load and Store Opcodes

static uint16_t OpELPM   = 0b1001010111011000; // ELPM
static uint16_t OpELPMZ  = 0b1001000000000110; // ELPM Rd, Z
static uint16_t OpELPMZI = 0b1001000000000111; // ELPM Rd, Z+
static uint16_t OpLDX    = 0b1001000000001100; // LD Rd, X
static uint16_t OpLDXI   = 0b1001000000001101; // LD Rd, X+
static uint16_t OpLDXD   = 0b1001000000001110; // LD Rd, 0X
static uint16_t OpLDYI   = 0b1001000000001001; // LD Rd, Y+
static uint16_t OpLDYD   = 0b1001000000001010; // LD Rd, 0Y
static uint16_t OpLDDY   = 0b1000000000001000; // LDD Rd, Y + q
static uint16_t OpLDZI   = 0b1001000000000001; // LD Rd, Z+
static uint16_t OpLDZD   = 0b1001000000000010; // LD Rd, 0Z
static uint16_t OpLDDZ   = 0b1000000000000000; // LDD Rd, Z + q
static uint16_t OpLDI    = 0b1110000000000000; // LDI Rd, k
static uint16_t OpLDS    = 0b1001000000000000; // LDS Rd, m
static uint16_t OpLPM    = 0b1001010111001000; // LPM
static uint16_t OpLPMZ   = 0b1001000000000100; // LPM Rd, Z
static uint16_t OpLPMZI  = 0b1001000000000101; // LPM Rd, Z+
static uint16_t OpMOV    = 0b0010110000000000; // MOV Rd, Rr
static uint16_t OpMOVW   = 0b0000000100000000; // MOVW Rd, Rr
static uint16_t OpSPM    = 0b1001010111101000; // SPM
static uint16_t OpSTX    = 0b1001001000001100; // ST X, Rr
static uint16_t OpSTXI   = 0b1001001000001101; // ST X+, Rr
static uint16_t OpSTXD   = 0b1001001000001110; // ST 0X, Rr
static uint16_t OpSTYI   = 0b1001001000001001; // ST Y+, Rr
static uint16_t OpSTYD   = 0b1001001000001010; // ST 0Y, Rr
static uint16_t OpSTDY   = 0b1000001000001000; // STD Y + q, Rr
static uint16_t OpSTZI   = 0b1001001000000001; // ST Z+, Rr
static uint16_t OpSTZD   = 0b1001001000000010; // ST 0Z, Rr
static uint16_t OpSTDZ   = 0b1000001000000000; // STD Z + q, Rr
static uint16_t OpSTS    = 0b1001001000000000; // STS m, Rr

// Push and Pop Opcodes

static uint16_t OpPOP    = 0b1001000000001111; // POP Rd
static uint16_t OpPUSH   = 0b1001001000001111; // PUSH Rd

// Unconditional Branches

static uint16_t OpEICALL = 0b1001010100011001; // EICALL
static uint16_t OpEIJMP  = 0b1001010000011001; // EIJMP
static uint16_t OpJMP    = 0b1001010000001100; // JMP a
static uint16_t OpRJMP   = 0b1100000000000000; // RJMP j
static uint16_t OpIJMP   = 0b1001010000001001; // IJMP
static uint16_t OpCALL   = 0b1001010000001110; // CALL a
static uint16_t OpRCALL  = 0b1101000000000000; // RCALL j
static uint16_t OpICALL  = 0b1001010100001001; // ICALL
static uint16_t OpRET    = 0b1001010100001000; // RET
static uint16_t OpRETI   = 0b1001010100011000; // RETI

// Conditional Branches

static uint16_t OpBRBC   = 0b1111010000000000; // BRBC s, r
static uint16_t OpBRBS   = 0b1111000000000000; // BRBS s, r

// Skip Instructions

static uint16_t OpCPSE   = 0b0001000000000000; // CPSE Rd, Rr
static uint16_t OpSBIC   = 0b1001100100000000; // SBIC p, b
static uint16_t OpSBIS   = 0b1001101100000000; // SBIS p, b
static uint16_t OpSBRC   = 0b1111110000000000; // SBRC Rr, b
static uint16_t OpSBRS   = 0b1111111000000000; // SBRS Rr, b

// I/O Instructions

static uint16_t OpCBI    = 0b1001100000000000; // CBI p, b
static uint16_t OpIN     = 0b1011000000000000; // IN Rd, p
static uint16_t OpOUT    = 0b1011100000000000; // OUT p, Rr
static uint16_t OpSBI    = 0b1001101000000000; // SBI p, b

// Miscellaneous Instructions

static uint16_t OpBREAK  = 0b1001010110011000; // BREAK
static uint16_t OpNOP    = 0b0000000000000000; // NOP
static uint16_t OpSLP    = 0b1001010110001000; // SLEEP
static uint16_t OpWDR    = 0b1001010110101000; // WDR 

