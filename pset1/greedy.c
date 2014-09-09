/**
 * Time for Change, CS50, Pset 1
 *
 * Author:  Chaney Lin
 * Date:    August 2014
 *
 * Asks user how much change owed, then spits out minimum
 * number of coins with which said change can be made.
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("O hai!  ");

    int change;
    float change_float;

    // asks user for dollar amount
    do
    {
        printf("How much change is owed?\n");
        change_float = GetFloat();
    } while (change_float < 0);

    // converts to change (in cents)
    change = round(change_float * 100);

    //printf("change %d\n", change);

    int num_coins = 0;

    num_coins += change/25;
    change -= (int)(change/25) * 25;

    num_coins += change/10;
    change -= (int)(change/10) * 10;

    num_coins += change/5;
    change -= (int)(change/5) * 5;

    num_coins += change;

    printf("%d\n", num_coins);
}
