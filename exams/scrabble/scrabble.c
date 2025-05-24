//Scrabble, a two player game where each user types in a word and the value of each character is calculated
//the player with the higher score wins

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
#include <stdio.h>
#include <string.h>

const string LETTERS[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
const int NUMBERS[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main()
{
    int index_one_collection[] = {};
    int index_two_collection[] = {};

    char player_one_pick[] = get_char("\nPlayer 1:"); //char instead of string to get lenght
    char player_two_pick[] = get_char("\nPlayer 2: ");

    for(int i = 0; i < strlen(player_one_pick); i++;)
    {
        printf("hello \n");
    }
}
