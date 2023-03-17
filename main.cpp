/*  Serial Test
*   ===========
*   Test the basic sending and receiving ability of the MBED LPC1768.
*   
*   Author:         Andrew Knowles
*   MBED OS:        6.17.0
*   MBED Studio:    1.4.4
*   Date:           17/03/2023      */

#include "mbed.h"

BufferedSerial pc(USBTX, USBRX);

void initComms();

char instruct[] = "Press X\n";
char xPressed[] = "X pressed\n\n";
char *input = new char[1];
bool receivedCorrect = false;

int main(){
    initComms();

    while(1){
        while(receivedCorrect == false){
            pc.write(instruct, sizeof(instruct));
            pc.read(input, sizeof(input));
            
            if(*input == 'x' || *input == 'X'){
                receivedCorrect = true;
            }
        }

        receivedCorrect = false;

        pc.write(xPressed, sizeof(xPressed));
    }
}

void initComms(){
    pc.set_baud(9600);
    pc.set_format(8, BufferedSerial::None, 1); //8-N-1
}