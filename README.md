# MSP-EXP430F5529LP Exercise
Running a little exercise.  
Datasheet &amp; Documentation practice. Learning a bit about the MSP 430 development board.
1. Blink and LED [x]
2. Controlled Blinking of LED [x]
3. Using a Timer and Interrupts for Controlled Blinking of LED
4. I2C and MSP430
5. Raspberry Pi 3 to MSP430 (I2C)


Learning notes:  
1. I should have looked up specifications on LED light instead of just assuming they would just work. --------> Googled LEDs.

2. I am unable to find how much Voltage and/or Current the Digital I/O can drive on the MSP-EXP430F5529 board. --------> Hardware Datasheet.

3. I had to look into User Manual, Hardware Datasheet, Family Device Datasheet to get a grasp of the software delay I was using and how to configure the clocks availible on the board. The result was a small snippet of code but there was a lot of time (hours) understanding exactly why/how it worked that way. 

The software delay "delay_cycles(x)" basically creates code that waste CPU cycles to create the intended delay. This was not straight forward to understand because I did not know which clock it was referring to nor how the value x was calculated. 

This software delay is based upon the master clock, or MCLK, and the value "x" is derived from X = MCLK Frequency / (2 * HOW MANY BLINKS PER SECOND) --------> Googled it.

Determining MCLK Frequency --------> Datasheets + Google, mostly datasheets to firmly understand how to configure MCLK and it's source.


