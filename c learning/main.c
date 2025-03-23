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

    char input[100];
    int inputSize = 0;
    printf("input the string to reverse \n");
    scanf("%s", input);
    printf("now input the size of the string \n");
    scanf("%d", &inputSize);

    ReverseCharArray(input, inputSize);
    
    

    return 0;
}
