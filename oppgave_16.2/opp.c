#include <stdio.h>

int main()
{
    int num;
    int prevNum;
    int sum = 0;

    int amoutNum = 0;

    while (num || num == 0)
    {
        printf("Number: ");
        scanf("%d", &num);

        if (num == prevNum)
        {
            break;
        }

        sum += num;
        prevNum = num;
        amoutNum++;
    }

    printf("%d numbers were entered and their sum is %d", amoutNum, sum);

    return 0;
}
