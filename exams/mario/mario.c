#include <cs50.h>
#include <stdio.h>

int main()
{
    int pyramid_height = 0;

    while (pyramid_height < 1 | pyramid_height > 8)
    {
        pyramid_height = get_int("what should the height of the pyramid be (1-8): ");
    }

    int free_space = pyramid_height - 1;
    int blocks = 1;

    while (blocks <= pyramid_height)
    {
        for (int i = 0; i < free_space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < blocks; i++)
        {
            printf("#");
        }

        printf("  ");

        for (int i = 0; i < blocks; i++)
        {
            printf("#");
        }

        blocks += 1;
        free_space -= 1;

        printf("\n");
    }
}
