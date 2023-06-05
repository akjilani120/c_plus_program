#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    int tem[x];
    for (int i = 0; i < x; i++)
    {
        if (ar[i] < tem[i])
        {
            int temp = ar[i];
            ar[i] = tem[i];
            tem[i] = temp;
                }
        printf("d");
    }
    // for (int i = 0; i < x; i++)
    // {
    //     printf("%d ", tem[i]);
    // }

    return 0;
};
