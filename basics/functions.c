#include <stdio.h>


//functions need to be declared before you can use them anywhere else
void check(int num){
    printf("num: %d", num);
}

void nameCalling(char name[]){
    printf("name: %s", name);
}

int getAge(){
    return 12;
}

void ghostFunc();

int main(){
    check(10);
    nameCalling("Shpat");
    ghostFunc();
    printf("%d", getAge());
    return 0;
}

void ghostFunc(){
    printf("boo");
}