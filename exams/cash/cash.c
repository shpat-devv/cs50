#include <cs50.h>
#include <stdio.h>

/*
What does the program need to do?

accept user input on how much change they need
calculate the amount of coins ill need to give to achieve that change
make sure the amount of coins is as small as possible


how to achieve the solution:

have a list of coins
loop over the coins and start with the biggest coin.
is it smaller than the change needed? keep looping
is it bigger than the change? try the small numbers

*/

const int AVAILABLE_CHANGE[4] = {25, 10, 5, 1};

int main()
{
    int change_needed = -1;

    while (change_needed < 0)
    {
        change_needed = get_int("Change owed: ");
    }

    if (change_needed == 0)
    {
        printf("0\n");
    }
    else
    {
        int current_change = 0;
        int coins_needed = 0;

        int x = 0;

        while (current_change < change_needed)
        {
            // an error i had was when trying to use (current_change += AVAILABLE_CHANGE[x] <=
            // change_needed) the error being that <= was calculated first and returned 1
            if (current_change + AVAILABLE_CHANGE[x] <= change_needed)
            {
                printf("\nadded %d to %d", AVAILABLE_CHANGE[x], current_change);

                current_change += AVAILABLE_CHANGE[x];
                coins_needed += 1;
            }
            else
            {
                x += 1;
            }
        }

        printf("\n%d \n", coins_needed);
    }
}
