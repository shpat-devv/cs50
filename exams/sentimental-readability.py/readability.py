from cs50 import get_string

'''
READABILITY!

grade a text using the us formula to determine the grade level

todo:

get user input
calculate the average amount of letters per 100 words
calculate the average amount of sentences per 100 words
calculate grade and return it
'''


user_input = get_string("Text: ")

grade = 0

avg_let = 0  # average letters
avg_sen = 0  # average sentences


letters = 0
words = 0
sentences = 0
new_word = True

for letter in user_input:
    if letter.isalpha():
        letters += 1
        new_word = False
    elif letter.isspace() and not new_word:
        words += 1
        new_word = True
    elif letter in {".", "!", "?"} and not new_word:
        words += 1
        sentences += 1
        new_word = True
    else:
        continue

avg_let = letters / words * 100
avg_sen = sentences / words * 100

grade = round(0.0588 * avg_let - 0.296 * avg_sen - 15.8)

if grade < 1:
    print("Before Grade 1.")
elif grade > 16:
    print("Grade 16+")
else:
    print(f"Grade: {grade}")
