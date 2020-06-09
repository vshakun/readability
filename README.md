# CS50-PSet-2-Readability

This is my code of a program that computes the approximate grade level needed to comprehend some text, for Harvard's CS50 problems set 2.

## Specifications:

### Design and implement a program, readability, that computes the Coleman-Liau index of the text.

1. Program must prompt the user for a string of text.

2. Program should count the number of letters, words, and sentences in the text. You may assume that a letter is any lowercase character from a to z or any uppercase character from A to Z, any sequence of characters separated by spaces should count as a word, and that any occurrence of a period, exclamation point, or question mark indicates the end of a sentence.

3. Program should print as output "Grade X" where X is the grade level computed by the Coleman-Liau formula, rounded to the nearest integer.
If the resulting index number is 16 or higher (equivalent to or greater than a senior undergraduate reading level), your program should output "Grade 16+" instead of giving the exact index number. If the index number is less than 1, your program should output "Before Grade 1".

For more detailed specifications, see: 
https://cs50.harvard.edu/x/2020/psets/2/readability/