#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][4],B[4][4],C[4][4],i,j;
    printf("Matríz A \n");
    for(i=1;i<=2;i++)
        for(j=1;j<=3;j++)
    {
        printf("escriba los valores \n [%d] [%d]: ",i,j);
        scanf("%d",&A[i][j]);
    }
    system("cls");
    printf("Matríz B \n");
    for(i=1;i<=2;i++)
        for(j=1;j<=3;j++)
    {
        printf("Escriba los valores \n [%d][%d]:",i,j);
        scanf("%d",&B[i][j]);
    }
    system("cls");
    for(i=1;i<=2;i++)
        for(j=1;j<=3;j++)
        C[i][j]=(A[i][1]*B[1][j])+(A[i][2]*B[2][j]);
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=3;j++)
            printf("%d \n",C[i][j]);
        printf("\n");
    }
    system("pause");
}
