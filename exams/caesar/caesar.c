/*
Back in the days to secure messages, Caesar would encrypt his messages. He would shift every letter in the text by an x amount.
To encrypt the message the person on the other side would have needed to have the key provided, and then shift the letters back
by x amount, x being ofcourse the key


Steps to achieve this program:

Accept command line arguement as the key,
Ask user what the plain text is,
Have an array of the alphabet,
Loop through the plain text and check each index of the array,
Store the indexes,
Increase index by x amount,
Create ciphertext and output it.
*/


//#include <cs50.h>
#include <stdio.h>

const char[] = 
int main(int argc, char* argv[]){
    if(argc != 2){ //check if theres atleast one extra arguement
        printf("Usage: ./caesar key\n");
    }else{
        printf("%s\n",argv[1]);
    }



}
