#include <stdio.h>
#include <string.h>
#define LENGTH 30

void translate(char string[]);

int main()
{
    char word[LENGTH];
    printf("Write word: ");
    scanf("%s", word);

    translate(word);
    return 0;
}

void translate(char string[])
{
    int length = strlen(string);
    char first_el = string[0];
    char result[length];

    for (int i = 1; i < length; i++)
    {
        result[i - 1] = string[i];
    }

    result[length - 1] = first_el;
    result[length] = 'a';
    result[length + 1] = 'y';

    printf("After changes: %s\n", result);
}
