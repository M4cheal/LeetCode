#include <stdio.h>
#define m 3
#define n 4
int main()
{
    int a[m][n];
    int i, j, max, c=0, b=0;
    printf("������һ��%d*%d�׵ľ���", m, n);
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    max = a[0][0];
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                b = i;
                c = j;
            }
            
        }
        
    }
    
    printf("�������%d���������ǵ�%d�У�%d��", max, b, c);
}
