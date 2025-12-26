#include<stdio.h>
int main(){
    int r;
    printf("Enter number of row :");
    scanf("%d",&r);
    int c; 
    printf("Enter number of coloum :");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter element :");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max=arr[0][0];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}