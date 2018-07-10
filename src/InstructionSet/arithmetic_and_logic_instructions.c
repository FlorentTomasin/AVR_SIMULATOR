/*
 * 
 * Arithmetic and logic instructions
 * 
 */

#include <stdint.h>

int8_t carry;

/*
 * Add two registers without carry 
 */
void add(int8_t * Rd, int8_t * Rr){
	*Rd = *Rd + *Rr; 
} 

/*
 * Add two registers with carry 
 */
void adc(int8_t * Rd, int8_t * Rr){
	add(Rd, Rr);
	*Rd = *Rd + carry; 
} 

/*
 * Add immediate to word 
 */
void adiw(int8_t * Rd, int8_t K){
	// TODO
} 

/*
 * Substrate two registers 
 */
void sub(int8_t * Rd, int8_t * Rr){
	*Rd = *Rd - *Rr; 
} 

/*
 * Substrate constant from register 
 */
void subi(int8_t * Rd, int8_t K){
	*Rd = *Rd - K; 
} 

/*
 * Substrate two registers with carry 
 */
void sbc(int8_t * Rd, int8_t * Rr){
	sub(Rd, Rr);
	*Rd = *Rd - carry; 
} 

/*
 * Substrate constant from register with carry 
 */
void sbci(int8_t * Rd, int8_t K){
	subi(Rd, K);
	*Rd = *Rd - carry; 
}

/*
 * Logical AND registers 
 */
void and(int8_t * Rd, int8_t * Rr){
	*Rd = *Rd & *Rr; 
} 

/*
 * Logical AND registers and constant 
 */
void andi(int8_t * Rd, int8_t K){
	*Rd = *Rd & K; 
} 

/*
 * Logical OR registers 
 */
void or(int8_t * Rd, int8_t * Rr){
	*Rd = *Rd | *Rr; 
} 

/*
 * Logical OR registers and constant 
 */
void ori(int8_t * Rd, int8_t K){
	*Rd = *Rd | K; 
} 

/*
 * Exclusive OR Registers 
 */
void eor(int8_t * Rd, int8_t * Rr){
	*Rd = *Rd ^ *Rr; 
} 

/*
 * One's complement
 */
void com(int8_t * Rd){
	*Rd = 0xFF - *Rd;
}

/*
 * Two's complement
 */
void neg(int8_t * Rd){
	*Rd = 0x00 - *Rd;
}

/*
 * Set Bit(s) in Register
 */
void sbr(int8_t * Rd, int8_t K){
	ori(Rd, K);
}

/*
 * Clear Bit(s) in Register
 */
void cbr(int8_t * Rd, int8_t K){
	and(Rd, (0xFF - K));
}

/*
 * Increment register 
 */
void inc(int8_t *Rd){
	*Rd ++;
}

/*
 * Decrement register 
 */
void dec(int8_t * Rd){
	*Rd --;
}

/*
 * Test for zero or negative 
 */
void tst(int8_t * Rd){
	and(Rd, Rd); 
}

/*
 * Clear register 
 */
void clr(int8_t * Rd){
	*Rd = 0x00;
}

/*
 * Set register 
 */
void ser(int8_t * Rd){
	*Rd = 0xFF;
}

/*
 * Substrate immediate from word
 */
void sbiw(){
	// TODO
}

/*
 * Multiply unsigned 
 */
void mul(uint8_t * Rd, uint8_t *Rr){
	// TODO
	*Rd = *Rd * *Rr;
}

/*
 * Multiply signed 
 */
void muls(int8_t * Rd, int8_t *Rr){
	// TODO
}

/*
 * Multiply signed with unsigned 
 */
void mulsu(int8_t * Rd, uint8_t *Rr){
	// TODO
}

/*
 * Fractional multiply unsigned 
 */
void fmul(uint8_t * Rd, uint8_t *Rr){
	// TODO
}

/*
 * Fractional multiply signed
 */
void fmuls(int8_t * Rd, int8_t *Rr){
	// TODO
}

/*
 * Fractional multiply signed with unsigned
 */
void fmulsu(int8_t * Rd, uint8_t *Rr){
	// TODO
}
