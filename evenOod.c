#include <stdio.h>

int main()
{
    int x, i;

    printf("Enter an integer: ");
    scanf("%d", &x);

    for (i = 0; i <= x; ++i)
    {
        if (i & 1)
        {
            printf("%d - odd\n", i);
        }
        else
        {
            printf("%d - even\n", i);
        }
    }

    return 0;
}