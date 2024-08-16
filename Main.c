#include <at89c5131.h>
#include "lcd.h"				//Header file with LCD interfacing functions
#include "MorseCode.h"	//Header file for Morse Code 

sbit LED=P1^7;

/*
Port P0.7 is used for the audio signal output
*/	
//Main function

void main(void)
{
		
	//Call initialization functions
	lcd_init();
	
	P1 = 0xFF;
	// Read input nibble here
	
	
	
	if (P1_0 == 1) {	
	
	lcd_cmd(0x87);
	lcd_write_string("A");
		morsea();
		msdelay(1000);
	 lcd_cmd(0x01);
	}
	else if (P1_1 == 1) {	
	
	lcd_cmd(0x87);
	lcd_write_string("B");
		morseb();
		msdelay(1000);
	 lcd_cmd(0x01);
	}
	else if (P1_2 == 1) {	
	
	lcd_cmd(0x87);
	lcd_write_string("C");
		morsec();
		msdelay(1000);
	 lcd_cmd(0x01);
	}
	else if (P1_3 == 1) {	
	
	lcd_cmd(0x87);
	lcd_write_string("D");
		morsed();
		msdelay(1000);
	 lcd_cmd(0x01);
	}
	else {	
	
	lcd_cmd(0x87);
	lcd_write_string("E");
		morsee();
		msdelay(1000);
	 lcd_cmd(0x01);
	}
	while(1){
		msdelay(1);
	}
	
     	
	// Inside each condition, call the functions from MorseCode.h. Fill functions in MorseCode.h
	// Write to LCD using function lcd_write_string() in side the condition as well
	
	
	// 
	
	
}
