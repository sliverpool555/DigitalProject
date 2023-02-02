#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //adds library for clock on PC
#include <windows.h> //adds the clear text function

int freqency;

//int delay(int freqency);

int main()
{
    printf("Digital Course Work 3\n");

    int i;

    int sinewave[16] = {128, 192, 224, 240, 255, 240 , 224, 192, 128, 64, 32, 16, 0, 16, 32, 64};

    scanf("%d", &freqency);

    for(i = 0; i < 16; i++){
        printf("Sinewave value %d \n", sinewave[i]);

        delay(freqency);
    }
    return 0;
}

int delay(int freqency){   //declare the loop and use the integer number of seconds
    int milli_seconds = 1000*freqency; //milli_seconds is 1000s times seconds
    clock_t start_time = clock();  //The clock equals the start time
    while (clock() < start_time + milli_seconds); //while clock is lower then the start time + the milli_seconds function works
}
