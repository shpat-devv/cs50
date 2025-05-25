// Scrabble, a two player game where each user types in a word and the value of each character is
// calculated the player with the higher score wins

// values of letters
/*
A B C D E F G H I J K L M N O P Q  R S T U V W X Y Z
1 3 3 2 1 4 2 4 1 8 5 1 3 1 1 3 10 1 1 1 1 4 4 8 4 10
*/

/*

steps to create scrabble:

create two arrays with the letters and values
get both user inputs
check index of each letter
add every index of the values to the scores
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

const char LETTERS[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                          'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const int NUMBERS[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                         1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main()
{
    int index_one_collection[] = {};
    int index_two_collection[] = {};

    int player_one_score = 0;
    int player_two_score = 0;

    string player_one_input = get_string("Player one: ");
    string player_two_input = get_string("Player two: ");

    // Convert and score Player One
    for (int i = 0; i < strlen(player_one_input); i++)
    {
        char c = toupper(player_one_input[i]);
        if (isalpha(c))
        {
            int index = c - 'A';
            player_one_score += NUMBERS[index];
        }
    }

    // Convert and score Player Two
    for (int i = 0; i < strlen(player_two_input); i++)
    {
        char c = toupper(player_two_input[i]);
        if (isalpha(c))
        {
            int index = c - 'A';
            player_two_score += NUMBERS[index];
        }
    }

    if (player_one_score > player_two_score)
    {
        printf("Player 1 wins!");
    }
    else if (player_two_score > player_one_score)
    {
        printf("Player 2 wins!");
    }
    else if (player_one_score == player_two_score)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Something went wrong...\n");
    }
    return 0;
}
