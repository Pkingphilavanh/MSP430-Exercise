#include <msp430.h>				
/**
 * Blink and LED tied to P1.2 twice a second using a software delay.
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer

	P1DIR |= BIT2;                  // P1.2 output

	volatile unsigned int i;        // volatile to prevent optimization

	 while(1)
	 {
	    P1OUT ^= BIT2;
	    __delay_cycles(250000);                  //Delay = CLOCK FREQ / (2 * HOW MANY TIMES YOU WANT LED TO BLINK)
	 }


	//UCSCTL0 = 0;
	//DCO is one of the internal clock sources. This line sets the entire register to 0 and configures the DCO CLOCK to lowest settings.
	//UCSCTL4 |= 0x0003;

	/* NOTES FOR REFERENCE
	P1DIR |= 0x00;					// configure P1.0 and P1.2 as output
	P1SEL |= 0x01;
	P1DS |= 0x01;                   // configure the Output Drive Strength on P1.2 to FULL DRIVE

	volatile unsigned int i;		// volatile to prevent optimization

	while(1)
	{
		P1OUT ^= 0x01;				// toggle P1.0 and P1.2 (XOR is toggling)
		//for(i=500000; i>0; i--);     // delay, this delay works by going through the for loop to fabricate a delay.
	} */
}
