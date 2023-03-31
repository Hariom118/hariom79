#include <stdio.h>
int main()
{
    printf("Enter Number:\n");
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            if (j == i)
            {
                printf("\\");
                continue;
            }
            printf("*");
            if(j == (n + 1) - i);
            {
                printf("/");
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}
