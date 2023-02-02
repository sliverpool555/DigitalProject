#include<AT89C51XD2.h> //uses the functions for the AT89C51XD2

#include<stdio.h>  // prototype declarations for I/O functions

sbit buzz = P2;  //sets buzzer as pin P2.0 on the chip

sbit b = P0^7;  //button b is P0.7
sbit As = P0^6; //button A sharp is P0.6
sbit A = P0^5;  //button A is P0.5
sbit Gs = P0^4; //button G sharp is P0.4
sbit G = P0^3;  //button G is P0.3
sbit Fs = P0^2; //button F sharp is P0.2
sbit F = P0^1;  //button F is P0.1
sbit E = P0^0;  //button E is P0.0
sbit Ds = P1^0; //button D sharp is P1.0
sbit D = P1^1;  //button D is P1.1
sbit Cs = P1^2; //button C sharp is P1.2
sbit C = P1^3;  //button A is P1.3

int sPer = 0; //sPer is selected peroid and stores the amount of No operations are called

void sinePrint(int sPer) ;  //sinePrint function prototype declaration

unsigned WAVEVALUE[16] = {128, 192, 224, 240, 255, 240, 224, 192, 128, 64, 32, 16, 0, 16, 32, 64}; //array that stores the 16 values for the sinewave

int loop = 1; //makes loop equal 1 this will never change so the program always runs


void main(void){ //the main function that the code runs through
	
	//This is where the input code goes for each pin

	while(loop == 1){ //while loop equals one run this loop. This means the loop always runs until turned off
	
	while (b == 0){ //while button that represents b is pressed run loop
		 sPer = 12;   //selected peroid is set to 12 when b is pressed
		sinePrint(sPer); //call and run function sinePrint with the sPer value from the current loop
	}
     
	while (As == 0){
		sPer = 13;
		sinePrint(sPer);
	}
	
	while (A == 0){ 
		sPer = 14;    
		sinePrint(sPer); 
	}
	
	while (Gs == 0){ 
		sPer = 15;
		sinePrint(sPer); 
	}
	
	while (G == 0){ 
		sPer = 16;
		sinePrint(sPer); 
	}
	
	while (Fs == 0){ 
		sPer = 18;
		sinePrint(sPer); 
	}
	
	while (F == 0){ 
		sPer = 19; 
		sinePrint(sPer);
	}
	
	while (E == 0){ 
		sPer = 20;
		sinePrint(sPer); 
	}
	
	while (Ds == 0){
		sPer = 21;
		sinePrint(sPer); 
	}
	
	while (D == 0){ 
		sPer = 22;
		sinePrint(sPer);
	}
	
	while (Cs == 0){ 
		sPer = 24; 
		sinePrint(sPer); 
	}
	
	while (C == 0){ 
		sPer = 26;    
		sinePrint(sPer); 
	}
 }
}

void sinePrint(int sPer){ 
  int i; //value in for loop for the array
	int s; //value for the for loop for No operations
	  
	for(i = 0; i < 16; i++){ //i starts at 0 and adds one until the last array value is reached
		  P2 = WAVEVALUE[i];   //takes current value out of array and prints
		  
		for(s = 0; s < sPer; s++){ //for loop to start at 0 and stop at the selected value chosen by user. The value is added by one each time
		}
	}
}