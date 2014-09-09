/**
 * Itsa Mario, CS50 , Pset1
 * Author: Chaney Lin
 * Date:   August 2014
 *
 * Prompts user for height of pyramid (<=23)
 * and returns visually the right-aligned pyramid
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // asks user for height until between 0 and 23
    do
    {
        printf("Height: ");
        height = GetInt();
    } while (height < 0 || height > 23);

    // printf("height is %d\n", height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= height; j++)
        {
            if (height - j > i + 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
