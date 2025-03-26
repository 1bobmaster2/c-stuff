#include <stdio.h>

#define EMPTY -1

int getLenghtOfString(char* input)
{
    int leght = 0;
    int i = 0;
    while (1 == 1)
    {
        if(input[i] != EMPTY)
        {
            leght++;
        }
        if(input[i+1] == EMPTY)
        {
            break;
        }
        i++;
    }
    
    return leght;
}

int main()
{
    char input[100];
    printf("input some random ahh string ok bro \n");
    scanf("%99s", input);
    printf("%d", getLenghtOfString(input));
    


    return 0;
}