//Find size of array without using sizeof()

#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 100

void main()
{
    char str1[MAX_LIMIT];
    int i, count = 0;

    printf("Input a string : ");
    fgets(str1, MAX_LIMIT, stdin);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count++;
    }
    printf("The string contains( %d ) number of characters including Null value. \n",count);
    printf("So, size of array is  : %d \n\n", count);


    printf("The string contains( %d ) number of characters without Null Value. \n",count-1);
    printf("So, size of array is  : %d ", count-1);
}
