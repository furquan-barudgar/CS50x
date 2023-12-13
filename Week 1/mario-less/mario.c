#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare all the varisables as int
    int height, row, column, space;
    // Running a loop to take input of height less than 8 and more than 1
    do
    {
        height = get_int("enter height of pyramid: ");
    }
    while (height < 1 || height > 8);
    // when row is less than desired height add another row
    for (row = 0; row < height; row++)
    {
        // when space is less than height-row-1 increase space by 1
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // when column is less than or equal to row add column by 1
        for (column = 0; column <= row ; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}