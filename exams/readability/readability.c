/*
This is a program to determine the grade level of books, it scans over the text and calculates these factos:

average amount of letters per word
average aamount of letters per sentence

The formula to calculate the grade:

index = 0.0588 * L - 0.296 * S - 15.8

where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.
*/

//#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int letters_per_word[] = {};
    int letters_per_sentence[] = {};

    //string book = get_string("Text: ");
    char book[] = "One fish. Two fish. Red fish. Blue fish.";

    int word_array_index = 0;
    int sentence_array_index = 0;

    int word_letters = 0;
    int sentence_letters = 0;

    for(int i = 0; i < strlen(book); i++)
    {
        char c = book[i];

        if(c == ','){
            continue;
        }
        else if(c == ' '){
            if(word_letters > 0){
                letters_per_word[word_array_index] = word_letters;
                word_array_index ++;
                word_letters = 0;
            }else{
                continue;
            }
        }else if(c == '.' | c == '!' | c == '?'){
            letters_per_sentence[sentence_array_index] = sentence_letters;
            letters_per_word[word_array_index] = word_letters;
            sentence_array_index ++;
            word_array_index ++;
            word_letters = 0;
            sentence_letters = 0;
        } else{
            word_letters ++;
            sentence_letters ++;
        }
    }

    for(int i = 0; sizeof(letters_per_word); i++){
        printf("Word %d letter amount: %d \n", i, letters_per_word[i]);
    }

    for(int i = 0; sizeof(letters_per_sentence); i++){
        printf("Sentence %d letter amount: %d \n", i, letters_per_sentence[i]);
    }
}
