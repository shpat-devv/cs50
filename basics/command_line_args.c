#include <stdio.h>

int main(int argc, char* argv[]){ //this will take input from the user before runtime, argc is the amount of argument and argv is the argument
    for (int i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
    }
}