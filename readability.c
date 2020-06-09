// Checks the text readability

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Declare function count_letters
int count_letters(string text);
// Declare function count_words
int count_words(string text);
// Declare function count_sentences
int count_sentences(string text);




int main(void)
{
    // Prompt user for text
    string text = get_string("Text: ");

    // Count the number of letters in the text

    int letters_count = count_letters(text);

    // Count the number of words in the text

    int words_count = count_words(text);

    // Count the number of sentences in the text

    int sentences_count = count_sentences(text);

    // Count grade of the text
    float avg_let = (float) letters_count / (float) words_count * 100.0;
    float avg_sent = (float) sentences_count / (float) words_count * 100.0;
    float grade = 0.0588 * avg_let - 0.296 * avg_sent - 15.8;

    // Print grade

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) roundf(grade));
    }
}

// Function count_letters
int count_letters(string text)
{
    int letters_count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters_count++;
        }
    }
    return letters_count;
}

// Function count_words
int count_words(string text)
{
    if (strlen(text) == 0)
    {
        return 0;
    }
    int words_count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words_count++;
        }
    }
    return words_count + 1;
}

// Function count sentences
int count_sentences(string text)
{
    int sentences_count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences_count++;
        }
    }
    return sentences_count;
}