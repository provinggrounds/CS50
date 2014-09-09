/**
 * Parlez-vous francais? , CS50 , pset2
 *
 * Author:    Chaney Lin
 * Date:      August 2014
 *
 * Performs Vigenere's cipher on text, using
 * keyword  obtained at runtime
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

char encrypt(char letter, int key)
{
    if (isupper(letter))
    {
        return (letter + key) % ('Z' + 1) + (letter + key) / ('Z' + 1) * 'A';
    }
    else if (islower(letter))
    {
        return (letter + key) % ('z' + 1) + (letter + key) / ('z' + 1) * 'a';
    }
    else // this is redundant, because check for alpha in main()
        return letter;
}

int main(int argc, string argv[])
{
    string keyword;

    if (argc != 2)
    {
        printf("need one argument!\n");
        return 1;
    }
    else
        keyword = argv[1];

    int len_keyword = strlen(keyword);

    // converts keyword to lower case, and as index of alphabet
    for (int i = 0, n = len_keyword; i < n; i++)
    {
        if (isupper(keyword[i]))
            keyword[i] = tolower(keyword[i]) - 'a';
        else if (islower(keyword[i]))
            keyword[i] -= 'a';
        else
        {
            printf("invalid keyword! only letters");
            return 1;
        }
    }

    // gets string from user
    string plain_text = GetString();

    int current_key;
    int current_key_counter = 0;

    // performs cipher
    for (int i = 0, n = strlen(plain_text); i < n; i++)
    {
        if (!isalpha(plain_text[i]))
            printf("%c", plain_text[i]);
        else
        {
            current_key = keyword[current_key_counter % len_keyword];
            current_key_counter += 1;
            printf("%c", encrypt(plain_text[i], current_key));
        }
    }
    printf("\n");
}
