/**
 * Hail, Caesar! , CS50, pset2
 * 
 * Author:   Chaney Lin
 * Date:     August 2014
 *
 * Performs a caesar cipher on a user-inputted string
 * with cypher key input at runtime
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// algorithm for caesar
char encrypt(char letter, int key)
{
    key = key % 26;

    if (isupper(letter))
    {
        return (letter + key) % ('Z' + 1) + (letter + key) / ('Z' + 1) * 'A';
    }
    else if (islower(letter))
    {
        return (letter + key) % ('z' + 1) + (letter + key) / ('z' + 1) * 'a';
    }
    else
        return letter;
}

int main(int argc, string argv[])
{
    // this is the cipher key
    int k;

    // gets cipher key from command-line
    if (argc != 2)
    {
        printf("need one argument!\n");
        return 1;
    }
    else
        k = atoi(argv[1]);

    string plain_text = GetString();

    // encrypts the string user caesar cipher
    for (int i = 0, n = strlen(plain_text); i < n; i++)
    {
        printf("%c", encrypt(plain_text[i], k));
    }
    printf("\n");
}
