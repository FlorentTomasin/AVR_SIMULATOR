#ifndef _REGISTER_H
#define _REGISTER_H
/*
 * Note:
 * 1. For compatibility with future devices, reserved bits should be written to zero if accessed. Reserved
 *    I/O memory addresses should never be written.
 * 2. I/O Registers within the address range 0x00 - 0x1F are directly bit-accessible using the SBI and
 *    CBI instructions. In these registers, the value of single bits can be checked by using the SBIS and
 *    SBIC instructions.
 * 3. Some of the Status Flags are cleared by writing a logical one to them. Note that, unlike most other
 *    AVRs, the CBI and SBI instructions will only operate on the specified bit, and can therefore be used
 *    on registers containing such Status Flags. The CBI and SBI instructions work with registers 0x00 to
 *    0x1F only.
 * 4. When using the I/O specific commands IN and OUT, the I/O addresses 0x00 - 0x3F must be used.
 *    When addressing I/O Registers as data space using LD and ST instructions, 0x20 must be added
 *    to these addresses. The ATmega328/P is a complex microcontroller with more peripheral units than
 *    can be supported within the 64 location reserved in Opcode for the IN and OUT instructions.
 *    For the Extended I/O space from 0x60 - 0xFF in SRAM, only the ST/STS/STD and LD/LDS/LDD
 *    instructions can be used.
 */
#include "common.h"

#define PINB_OFFSET 0x23u
#define PINB0  0u
#define PINB1  1u
#define PINB2  2u
#define PINB3  3u
#define PINB4  4u
#define PINB5  5u
#define PINB6  6u
#define PINB7  7u

#define DDRB_OFFSET 0x24u
#define DDRB0  0u
#define DDRB1  1u
#define DDRB2  2u
#define DDRB3  3u
#define DDRB4  4u
#define DDRB5  5u
#define DDRB6  6u
#define DDRB7  7u

#define PORTB_OFFSET 0x25u
#define PORTB0  0u
#define PORTB1  1u
#define PORTB2  2u
#define PORTB3  3u
#define PORTB4  4u
#define PORTB5  5u
#define PORTB6  6u
#define PORTB7  7u

#define PINC_OFFSET 0x26u
#define PINC0  0u
#define PINC1  1u
#define PINC2  2u
#define PINC3  3u
#define PINC4  4u
#define PINC5  5u
#define PINC6  6u

#define DDRC_OFFSET 0x27u
#define DDRC0  0u
#define DDRC1  1u
#define DDRC2  2u
#define DDRC3  3u
#define DDRC4  4u
#define DDRC5  5u
#define DDRC6  6u

#define PORTC_OFFSET 0x28u
#define PORTC0  0u
#define PORTC1  1u
#define PORTC2  2u
#define PORTC3  3u
#define PORTC4  4u
#define PORTC5  5u
#define PORTC6  6u

#define PIND_OFFSET 0x29u
#define PIND0  0u
#define PIND1  1u
#define PIND2  2u
#define PIND3  3u
#define PIND4  4u
#define PIND5  5u
#define PIND6  6u
#define PIND7  7u

#define DDRD_OFFSET 0x2Au
#define DDRD0  0u
#define DDRD1  1u
#define DDRD2  2u
#define DDRD3  3u
#define DDRD4  4u
#define DDRD5  5u
#define DDRD6  6u
#define DDRD7  7u

#define PORTD_OFFSET 0x2Bu
#define PORTD0  0u
#define PORTD1  1u
#define PORTD2  2u
#define PORTD3  3u
#define PORTD4  4u
#define PORTD5  5u
#define PORTD6  6u
#define PORTD7  7u

/* Offset 0x2C to 0x34 Reserved */

#define TIFR0_OFFSET 0x35u
#define TIFR0_TOV  0u
#define TIFR0_OCFA 1u
#define TIFR0_OCFB 2u

#define TIFR1_OFFSET 0x36u
#define TIFR1_TOV  0u
#define TIFR1_OCFA 1u
#define TIFR1_OCFB 2u
#define TIFR1_ICF  5u

#define TIFR2_OFFSET 0x37u
#define TIFR2_TOV  0u
#define TIFR2_OCFA 1u
#define TIFR2_OCFB 2u

/* Offset 0x38 to 0x3A Reserved */

#define PCIFR_OFFSET 0x3Bu
#define PCIFR_PCIF0 0u
#define PCIFR_PCIF1 1u
#define PCIFR_PCIF2 2u

#define EIFR_OFFSET 0x3Cu
#define EIFR_INTF0 0u
#define EIFR_INTF1 1u

#define EIMSK_OFFSET 0x3Du
#define EIMSK_INT0 0u
#define EIMSK_INT1 1u

/* 8bits long */
#define GPIO0_OFFSET 0x3Eu

#define EECR_OFFSET 0x3Fu
#define EECR_EERE   0u
#define EECR_EEPE   1u
#define EECR_EEMPE  2u
#define EECR_EERIE  3u
#define EECR_EERPM0 4u
#define EECR_EERPM1 5u

/* 8bits long */
#define EEDR_OFFSET 0x40u

#define EEARL_OFFSET 0x41u
#define EEARL0 0u
#define EEARL1 1u
#define EEARL2 2u
#define EEARL3 3u
#define EEARL4 4u
#define EEARL5 5u
#define EEARL6 6u
#define EEARL7 7u

#define EEARH_OFFSET 0x42u
#define EEARL8 0u
#define EEARL9 1u

#define GTCCR_OFFSET 0x43u
#define GTCCR_PSRSYNC 0u
#define GTCCR_PSRASY  1u
#define GTCCR_TSM     7u

#define TCCR0A_OFFSET 0x44u
#define TCCR0A_WGM00   0u
#define TCCR0A_WGM01   1u
#define TCCR0A_COM0B0  4u
#define TCCR0A_COM0B1  5u
#define TCCR0A_COM0A0  6u
#define TCCR0A_COM0A1  7u

#define TCCR0B_OFFSET 0x45u
#define TCCR0B_CSO   0u /* 3 bits long */
#define TCCR0B_WGM02 3u
#define TCCR0B_FOC0B 6u
#define TCCR0B_FOC0A 7u

/* 8bits long */
#define TCNT0_OFFSET 0x46u

/* 8bits long */
#define OCR0A_OFFSET 0x47u

/* 8bits long */
#define OCR0B_OFFSET 0x48u

/* Offset 0x49 Reserved */

/* 8bits long */
#define GPIOR1_OFFSET 0x4Au

/* 8bits long */
#define GPIOR2_OFFSET 0x4Bu

#define SPCR0_OFFSET 0x4Cu
#define SPCR0_SPR00 0u
#define SPCR0_SPR01 1u
#define SPCR0_CPHA0 2u
#define SPCR0_CPOL0 3u
#define SPCR0_MSTR0 4u
#define SPCR0_DORD0 5u
#define SPCR0_SPE0  6u
#define SPCR0_SPIE0 7u

#define SPSR0_OFFSET 0x4Du
#define SPSR0_SPI2X0 0u
#define SPSR0_WCOL0 6u
#define SPSR0_SPIF0 7u

/* 8bits long */
#define SPDR0_OFFSET 0x4Bu

/* Offset 0x4F Reserved */

#define ACSR_OFFSET 0x50u
#define ACSR_ACIS0 0u
#define ACSR_ACIS1 1u
#define ACSR_ACIC  2u
#define ACSR_ACIE  3u
#define ACSR_ACI   4u
#define ACSR_ACO   5u
#define ACSR_ACBG  6u
#define ACSR_ACD   7u

/* 8bits long */
#define DWDR_OFFSET 0x51u

/* Offset 0x52 Reserved */

#define SMCR_OFFSET 0x53u
#define SMCR_SE   0u
#define SMCR_SM0  1u
#define SMCR_SM1  2u
#define SMCR_SM2  3u

#define MCUSR_OFFSET 0x54u
#define MCUSR_PORF  0u
#define MCUSR_EXTRF 1u
#define MCUSR_BORF  2u
#define MCUSR_WDRF  3u

#define MCUCR_OFFSET 0x55u
#define MCUCR_IVCE  0u
#define MCUCR_IVSEL 1u
#define MCUCR_PUD   4u
#define MCUCR_BODSE 5u
#define MCUCR_BODS  6u

/* Offset 0x56 Reserved */

#define SPMCSR_OFFSET 0x57u
#define SPMCSR_SPMEN  0u
#define SPMCSR_PGERS  1u
#define SPMCSR_PGWRT  2u
#define SPMCSR_BLBSET 3u
#define SPMCSR_RWWSRE 4u
#define SPMCSR_SIGRD  5u
#define SPMCSR_RWWSB  6u
#define SPMCSR_SPMIE  7u

/* Offset 0x58 to 0x5C Reserved */

/* 8bits long */
#define SPL_OFFSET 0x5Du
/* 3bits long */
#define SPH_OFFSET 0x5Eu

#define SREG_OFFSET 0x5Fu
#define SREG_RESET  0x00u
#define SREG_C 0u
#define SREG_Z 1u
#define SREG_N 2u
#define SREG_V 3u
#define SREG_S 4u
#define SREG_H 5u
#define SREG_T 6u
#define SREG_I 7u

#define WDTCSR_OFFSET 0x60u
#define WDTCSR_WDP  0u /* 4bits long WDP[2:0] */
#define WDTCSR_WDE  3u
#define WDTCSR_WDCE 4u
#define WDTCSR_WDP  5u /* WDP[3] */
#define WDTCSR_WDIE 6u
#define WDTCSR_WDIF 7u

#define CLKPR_OFFSET 0x61u
#define CLKPR_CLKPS0 0u
#define CLKPR_CLKPS1 1u
#define CLKPR_CLKPS2 2u
#define CLKPR_CLKPS3 3u
#define CLKPR_CLKPCE 7u

/* Offset 0x62 to 0x63 Reserved */

#define PRR_OFFSET 0x64u
#define PRR_PRADC    0u
#define PRR_PRUSART0 1u
#define PRR_PRSPI0   2u
#define PRR_PRTIM1   3u
#define PRR_PRTIM0   5u
#define PRR_PRTIM2   6u
#define PRR_PRTWI0   7u

/* Offset 0x65 Reserved */

#define OSCCAL_OFFSET 0x66u
#define OSCCAL_CAL0 0u
#define OSCCAL_CAL1 1u
#define OSCCAL_CAL2 2u
#define OSCCAL_CAL3 3u
#define OSCCAL_CAL4 4u
#define OSCCAL_CAL5 5u
#define OSCCAL_CAL6 6u
#define OSCCAL_CAL7 7u

/* Offset 0x67 Reserved */

#define PCICR_OFFSET 0x68u
#define PCICR_PCIE0 0u
#define PCICR_PCIE1 1u
#define PCICR_PCIE2 2u

#define EICRA_OFFSET 0x69u
#define EICRA_ISC00 0u
#define EICRA_ISC01 1u
#define EICRA_ISC10 2u
#define EICRA_ISC11 3u

/* Offset 0x6A Reserved */

#define PCMSK0_OFFSET 0x6Bu
#define PCMSK0_PCINT0 0u
#define PCMSK0_PCINT1 1u
#define PCMSK0_PCINT2 2u
#define PCMSK0_PCINT3 3u
#define PCMSK0_PCINT4 4u
#define PCMSK0_PCINT5 5u
#define PCMSK0_PCINT6 6u
#define PCMSK0_PCINT7 7u

#define PCMSK1_OFFSET 0x6Cu
#define PCMSK1_PCINT8  0u
#define PCMSK1_PCINT9  1u
#define PCMSK1_PCINT10 2u
#define PCMSK1_PCINT11 3u
#define PCMSK1_PCINT12 4u
#define PCMSK1_PCINT13 5u
#define PCMSK1_PCINT14 6u

#define PCMSK2_OFFSET 0x6Du
#define PCMSK2_PCINT16 0u
#define PCMSK2_PCINT17 1u
#define PCMSK2_PCINT18 2u
#define PCMSK2_PCINT19 3u
#define PCMSK2_PCINT20 4u
#define PCMSK2_PCINT21 5u
#define PCMSK2_PCINT22 6u
#define PCMSK2_PCINT23 7u

#define TIMSK0_OFFSET 0x6Eu
#define TIMSK0_TOIE  0u
#define TIMSK0_OCIEA 1u
#define TIMSK0_OCIEB 2u

#define TIMSK1_OFFSET 0x6Fu
#define TIMSK1_TOIE  0u
#define TIMSK1_OCIEA 1u
#define TIMSK1_OCIEB 2u
#define TIMSK1_ICIE 5u

#define TIMSK2_OFFSET 0x70u
#define TIMSK2_TOIE  0u
#define TIMSK2_OCIEA 1u
#define TIMSK2_OCIEB 2u

/* Offset 0x71 to 0x77 Reserved */

#define ADCL_OFFSET 0x78u
#define ADCL_ADC0 0u
#define ADCL_ADC1 1u
#define ADCL_ADC2 2u
#define ADCL_ADC3 3u
#define ADCL_ADC4 4u
#define ADCL_ADC5 5u
#define ADCL_ADC6 6u
#define ADCL_ADC7 7u

#define ADCH_OFFSET 0x79u
#define ADCL_ADC8 0u
#define ADCL_ADC9 1u

#define ADCSRA_OFFSET 0x7Au
#define ADCSRA_ADPS0 0u
#define ADCSRA_ADPS1 1u
#define ADCSRA_ADPS2 2u
#define ADCSRA_ADIE  3u
#define ADCSRA_ADIF  4u
#define ADCSRA_ADATE 5u
#define ADCSRA_ADSC  6u
#define ADCSRA_ADEN  7u

#define ADCSRB_OFFSET 0x7Bu
#define ADCSRB_ADTS0 0u
#define ADCSRB_ADTS1 1u
#define ADCSRB_ADTS2 2u
#define ADCSRB_ACME  6u

#define ADMUX_OFFSET 0x7Cu
#define ADMUX_MUX0  0u
#define ADMUX_MUX1  1u
#define ADMUX_MUX2  2u
#define ADMUX_MUX3  3u
#define ADMUX_ADLAR 5u
#define ADMUX_REFS0 6u
#define ADMUX_REFS1 7u

/* Offset 0x7D Reserved */

#define DIDR0_OFFSET 0x7Eu
#define DIDR0_ADC0D 0u
#define DIDR0_ADC1D 1u
#define DIDR0_ADC2D 2u
#define DIDR0_ADC3D 3u
#define DIDR0_ADC4D 4u
#define DIDR0_ADC5D 5u
#define DIDR0_ADC6D 6u
#define DIDR0_ADC7D 7u

#define DIDR1_OFFSET 0x7Fu
#define DIDR1_AIN0D 0u
#define DIDR1_AIN1D 1u

#define TCCR1A_OFFSET 0x80u
#define TCCR1A_WGM10 0u
#define TCCR1A_WGM11 1u
#define TCCR1A_COM1  4u /* 4bits long */

#define TCCR1B_OFFSET 0x81u
#define TCCR1B_CS10  0u
#define TCCR1B_CS11  1u
#define TCCR1B_CS12  2u
#define TCCR1B_WGM12 3u
#define TCCR1B_WGM13 4u
#define TCCR1B_ICES1 6u
#define TCCR1B_ICNC1 7u

#define TCCR1C_OFFSET 0x82u
#define TCCR1C_FOC1B  6u
#define TCCR1C_FOC1A  7u

/* Offset 0x83 Reserved */

/* 8bits long */
#define TCNT1L_OFFSET 0x84u

/* 8bits long */
#define TCNT1H_OFFSET 0x85u

/* 8bits long */
#define ICR1L_OFFSET 0x86u

/* 8bits long */
#define ICR1H_OFFSET 0x87u

/* 8bits long */
#define OCR1AL_OFFSET 0x88u

/* 8bits long */
#define OCR1AH_OFFSET 0x89u

/* 8bits long */
#define OCR1BL_OFFSET 0x8Au

/* 8bits long */
#define OCR1BH_OFFSET 0x8Bu

/* Offset 0x8C to 0xAF Reserved */

#define TCCR2A_OFFSET 0xB0u
#define TCCR2A_WGM20  0u
#define TCCR2A_WGM21  1u
#define TCCR2A_COM2B0 4u
#define TCCR2A_COM2B1 5u
#define TCCR2A_COM2A0 6u
#define TCCR2A_COM2A1 7u

#define TCCR2B_OFFSET 0xB1u
#define TCCR2B_CS2 0u /* 3bits long */
#define TCCR2B_WGM22 3u
#define TCCR2B_FOC2B 6u
#define TCCR2B_FOC2A 7u

/* 8bits long */
#define TCNT2_OFFSET 0xB2u

/* 8bits long */
#define OCR2A_OFFSET 0xB3u

/* 8bits long */
#define OCR2B_OFFSET 0xB4u

/* Offset 0xB5 Reserved */

#define ASSR_OFFSET 0xB6u
#define ASSR_TCR2BUB 0u
#define ASSR_TCR2AUB 1u
#define ASSR_OCR2BUB 2u
#define ASSR_OCR2AUB 3u
#define ASSR_TCN2UB  4u
#define ASSR_AS2     5u
#define ASSR_EXCLK   6u

/* Offset 0xB7 Reserved */

#define TWBR_OFFSET 0xB8u
#define TWBR_TWBR0 0u
#define TWBR_TWBR1 1u
#define TWBR_TWBR2 2u
#define TWBR_TWBR3 3u
#define TWBR_TWBR4 4u
#define TWBR_TWBR5 5u
#define TWBR_TWBR6 6u
#define TWBR_TWBR7 7u

#define TWSR_OFFSET 0xB9u
#define TWSR_TWPS0 0u
#define TWSR_TWPS1 1u
#define TWSR_TWS0  3u
#define TWSR_TWS1  4u
#define TWSR_TWS2  5u
#define TWSR_TWS3  6u
#define TWSR_TWS4  7u

#define TWAR_OFFSET 0xBAu
#define TWAR_TWGCE 0u
#define TWAR_TWA0  1u
#define TWAR_TWA1  2u
#define TWAR_TWA2  3u
#define TWAR_TWA3  4u
#define TWAR_TWA4  5u
#define TWAR_TWA5  6u
#define TWAR_TWA6  7u

#define TWDR_OFFSET 0xBBu
#define TWDR_TWD0  0u
#define TWDR_TWD1  1u
#define TWDR_TWD2  2u
#define TWDR_TWD3  3u
#define TWDR_TWD4  4u
#define TWDR_TWD5  5u
#define TWDR_TWD6  6u
#define TWDR_TWD7  7u

#define TWCR_OFFSET 0xBCu
#define TWCR_TWIE  0u
#define TWCR_TWEN  2u
#define TWCR_TWWC  3u
#define TWCR_TWSTO 4u
#define TWCR_TWSTA 5u
#define TWCR_TWEA  6u
#define TWCR_TWINT 7u

/* Offset 0xBE to 0xBF Reserved */

#define UCSR0A_OFFSET 0xC0u
#define UCSR0A_MPCM0 0u
#define UCSR0A_U2X0  1u
#define UCSR0A_UPE0  2u
#define UCSR0A_DOR0  3u
#define UCSR0A_FE0   4u
#define UCSR0A_UDRE0 5u
#define UCSR0A_TXC0  6u
#define UCSR0A_RXC0  7u

#define UCSR0B_OFFSET 0xC1u
#define UCSR0B_TXB80  0u
#define UCSR0B_RXB80  1u
#define UCSR0B_UCSZ02 2u
#define UCSR0B_TXEN0  3u
#define UCSR0B_RXEN0  4u
#define UCSR0B_UDRIE0 5u
#define UCSR0B_TXCIE0 6u
#define UCSR0B_RXCIE0 7u

#define UCSRDC_OFFSET 0xC2u
#define UCSRDC_UCPOL0  0u
#define UCSRDC_UCSZ00  1u
#define UCSRDC_UCPHA0  1u
#define UCSRDC_UCSZ01  2u
#define UCSRDC_UDORD0  2u
#define UCSRDC_USBS0   3u
#define UCSRDC_UPM00   4u
#define UCSRDC_UPM01   5u
#define UCSRDC_UMSEL00 6u
#define UCSRDC_UMSEL01 7u

/* Offset 0xC3 Reserved */

/* 8bits long */
#define UBRR0L_OFFSET 0xC4u

/* 4bits long */
#define UBRR0H_OFFSET 0xC5u

/* 8bits long */
#define UDR0_OFFSET 0xC6u /* TXB/RXB[7:0] */

#endif /* _REGISTER_H */
