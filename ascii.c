#include <ctype.h>
#include <stdio.h>


int main(void)
{
    int option;
    printf("===== ASCII DECODER =====\n\n");
    printf("1. Convert a character to Ascii code.\n");
    printf("2. Convert Ascii code to a character.\n");
    printf("Choose an option(1 or 2): ");
    scanf("%d", &option);

    if (option == 1)
    {
        char character;
        printf("Digit a character: ");
        scanf(" %c", &character);
        printf("Character %c have to the code Ascii %d\n", character, character);
    }
    else if (option == 2)
    {
        int code; 
        printf("Enter a number between (0 - 127): ");
        scanf("%i",&code);

        if (code < 1 || code > 127)
        {
            printf("Wrong number! Digit a number between(0 - 127)\n");
        }
        else
        {
            if (isprint(code))
            {
                printf("Code Ascii %d repesents the character %c\n", code, code);
            }
            else 
            {
                printf("Code Ascii %d it is a control character(not visible)\n",code);
            }
        }
    }
    else 
    {
        printf("Code invalid\n");
    }
    
}