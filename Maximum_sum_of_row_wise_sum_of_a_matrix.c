#include <stdio.h>

int main()
{
    int i, j, m, n,max=0;
    int matrix[10][20];
    int sumR, sumC;
    scanf("%d", &m);
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
       int sumC = 0;
        for (j = 0; j < n; j++)
        {
            sumC += matrix[i][j];
        }
        if(sumC>max)
        {
            max=sumC;
        }
    }
    printf("%d",max);

    return 0;
}
