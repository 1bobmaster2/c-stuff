#include <stdio.h>

void ReverseCharArray(char array[], int sizeOfArray)
{
    int obieg = 0;
    int correctSizeOfArray = sizeOfArray -1;
    int index = correctSizeOfArray;
    for (size_t i = correctSizeOfArray; i > 0; i--)
    {
        array[obieg] = array[index];
        printf("%s\n", array);
        obieg++;
        index--;
    }
    
}

void count(int input)
{
    printf("ok boss \n");


    for (size_t i = 0; i <= input; i++)
    {
        printf("%d\n", i*input);
    }
    
}


int main() {
    // char yesimsigma[] = "a";
    // int i = 0;
    
    // while (1 == 1)
    // {
    //     printf(yesimsigma);
    //     i++;
    // }

    // if(i == 100000)
    // {
    //     return 0;
    // }

    printf("hi print the multiplication of the skibidi number \n");
    int input;
    scanf("%d", &input);
    
    count(input);

    return 0;
}
