#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of rows :");
    scanf("%d", &r);
    int c;
    printf("Enter number of coloum ");
    scanf("%d", &c);
    printf("Enter element :");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            // printf("%d ", arr[j][i]);
             brr[i][j]=arr[j][i];
        }
       
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",brr[i][j]);
        }
         printf("\n");
    }
    return 0;
}