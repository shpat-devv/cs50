/*
This is a program to determine the grade level of books, it scans over the text and calculates these factos:

average amount of letters per word
average aamount of letters per sentence

The formula to calculate the grade:

index = 0.0588 * L - 0.296 * S - 15.8

where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.
*/
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int letters_per_word[100] = {};
    int letters_per_sentence[60] = {};

    string book = get_string("Text: ");

    int word_array_index = 0;
    int sentence_array_index = 0;

    int word_letters = 0;
    int sentence_letters = 0;

    for (int i = 0; i < strlen(book); i++)
    {
        char c = book[i];

        if (c == ',')
        {
            continue;
        }
        else if (c == ' ')
        {
            if (word_letters > 0)
            {
                letters_per_word[word_array_index++] = word_letters;
                word_letters = 0;
            }
        }
        else if (c == '.' || c == '!' || c == '?')
        {
            if (word_letters > 0)
            {
                letters_per_word[word_array_index++] = word_letters;
                word_letters = 0;
            }
            letters_per_sentence[sentence_array_index++] = sentence_letters;
            sentence_letters = 0;
        }
        else
        {
            word_letters++;
            sentence_letters++;
        }
    }

    int total_letters = 0;
    for (int i = 0; i < word_array_index; i++)
    {
        total_letters += letters_per_word[i];
    }

    int total_sentences = sentence_array_index;

    int total_words = word_array_index;

    float L = ((float) total_letters / total_words) * 100;
    float S = ((float) total_sentences / total_words) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int) round(index);

    if(index < 1.00){
        printf("Before Grade 1\n");
    }else if(index > 16.00){
        printf("Grade 16+\n");
    }else{
        printf("Grade %i\n", grade);
    }}
