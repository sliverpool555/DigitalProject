#include<AT89C51XD2.h> //uses the functions for the AT89C51XD2

#include<stdio.h>  // prototype declarations for I/O functions


void main(void){
  int i;

  P0 = 0x0;
	
  for (i = 0 ; i < 20; i++)  {
    P0 = (P0 ^ 0x01);
  }
}
}




