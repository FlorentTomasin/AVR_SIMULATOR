/*
 * 
 * Arithmetic and logic instructions
 * 
 */

#include <stdint.h>

/*
 * Add two registers without carry 
 */
void add(int8_t * Rd, int8_t * Rr);
/*
 * Add two registers with carry 
 */
void adc(int8_t * Rd, int8_t * Rr);
/*
 * Add immediate to word 
 */
void adiw(int8_t * Rd, int8_t K);
/*
 * Substrate two registers 
 */
void sub(int8_t * Rd, int8_t * Rr);
/*
 * Substrate constant from register 
 */
void subi(int8_t * Rd, int8_t K);
/*
 * Substrate two registers with carry 
 */
void sbc(int8_t * Rd, int8_t * Rr);
/*
 * Substrate constant from register with carry 
 */
void sbci(int8_t * Rd, int8_t K);
/*
 * Logical AND registers 
 */
void and(int8_t * Rd, int8_t * Rr);
/*
 * Logical AND registers and constant 
 */
void andi(int8_t * Rd, int8_t K);

/*
 * Logical OR registers 
 */
void or(int8_t * Rd, int8_t * Rr);
/*
 * Logical OR registers and constant 
 */
void ori(int8_t * Rd, int8_t K);
/*
 * Exclusive OR Registers 
 */
void eor(int8_t * Rd, int8_t * Rr);
/*
 * One's complement
 */
void com(int8_t * Rd);
/*
 * Two's complement
 */
void neg(int8_t * Rd);
/*
 * Set Bit(s) in Register
 */
void sbr(int8_t * Rd, int8_t K);
/*
 * Clear Bit(s) in Register
 */
void cbr(int8_t * Rd, int8_t K);
/*
 * Increment register 
 */
void inc(int8_t *Rd);
/*
 * Decrement register 
 */
void dec(int8_t * Rd);
/*
 * Test for zero or negative 
 */
void tst(int8_t * Rd);
/*
 * Clear register 
 */
void clr(int8_t * Rd);

/*
 * Set register 
 */
void ser(int8_t * Rd);
/*
 * Substrate immediate from word
 */
void sbiw();
/*
 * Multiply unsigned 
 */
void mul(uint8_t * Rd, uint8_t *Rr);
/*
 * Multiply signed 
 */
void muls(int8_t * Rd, int8_t *Rr);
/*
 * Multiply signed with unsigned 
 */
void mulsu(int8_t * Rd, uint8_t *Rr);
/*
 * Fractional multiply unsigned 
 */
void fmul(int8_t * Rd, int8_t *Rr);
/*
 * Fractional multiply signed
 */
void fmuls(int8_t * Rd, int8_t *Rr);
/*
 * Fractional multiply signed with unsigned
 */
void fmulsu(int8_t * Rd, uint8_t *Rr);
