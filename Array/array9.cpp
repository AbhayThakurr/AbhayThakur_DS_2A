#include <stdio.h>
int main()
{
    printf("Abhay Thakur \n");
    int a[10], b[10], flag = 0, n1, n2, i, j;
    printf("Enter array1 size \n ");
    scanf("%d", &n1);
    printf("Enter array2 size  \n ");
    scanf("%d", &n2);
    printf("Enter array1 element  \n ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter array2 element  \n ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    printf("Union \n");
    for (i = 0; i < n1; i++)
        printf("%d, ", a[i]);
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d, ", b[i]);
        }
        flag = 0;
    }
    return 0;
}