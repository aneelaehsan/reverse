#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("From what number do you want to count down from?\n");

    if (number < 1)
    printf("Try again!\n");

    for (int i = 1; i < number; i++) //runs loop i times
    {
        int next = number - i; // declares variable
        printf("%d\n", next);
    }
}