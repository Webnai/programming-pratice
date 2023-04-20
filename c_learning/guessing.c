#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random_number = rand()% 10 + 1;
    int Guess;
    while(Guess != random_number)
    {
        printf("I have generate a number betwween 1 and 10. Guess the number: ");
        scanf("%d", &Guess);
        if(Guess < random_number)
        {
            printf("%d is wrong, the number is higher than that!\n", Guess);
        }
        else if(Guess > random_number)
        {
            printf("%d is wrong, the number is lower thant that!\n", Guess);
        }
    }
    if(Guess == random_number);
    {
        printf("%d is correct, you are smart!", Guess);
    }
    return 0;
}