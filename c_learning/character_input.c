#include <stdio.h>

int main()
{
    int name;
    int age;
    printf("What is your name? ");
    scanf("%s", &name);
    printf("What is your age? ");
    scanf("%i", &age);
    printf(" Your name is %s and your age is %i");
    return 0;
}