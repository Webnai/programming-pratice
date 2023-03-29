#include <stdio.h>

int main(void)
{
    //Getting user input for height
    int n;
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while(n < 1 || n > 8);
    //printing desired pyramid height
    for(int row = 0; row < n; row++)
    {
        //set parameters for columns to print
        for(int column = 0; column < n + row + 3; column++)
        {
            if (column == n || column == n+1 || row+column < n-1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}