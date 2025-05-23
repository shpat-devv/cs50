#include <stdio.h>

//this is using vs codes inbuilt debugger so nothing much to show lol

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i <= 5; i++) {
        sum += numbers[i];
    }

    printf("The sum is: %d\n", sum);

    if (sum == 15) {
        printf("Sum is fifteen!\n");
    } else {
        printf("Sum is not fifteen.\n");
    }

    return 0;
}