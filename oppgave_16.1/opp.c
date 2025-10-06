#include <stdio.h>
#define LENGTH 20

void translate(char string[]);
int stringLenght(char string[]);

int main()
{
    char word[LENGTH];
    printf("Write word: ");
    scanf("%s", word);

    translate(word);
    return 0;
}

int stringLenght(char string[])
{
    int index = 0;
    while (string[index] != '\0')
    {
        index++;
    }

    return index;
}

void translate(char string[])
{
    int length = 0;

    while (string[length] != '\0')
    {
        length++;
    }

    printf("Lenght is %d", length);
}
