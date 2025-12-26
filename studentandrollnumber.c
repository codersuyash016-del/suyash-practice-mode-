#include<stdio.h>
int main(){
        int arr[4][2]={{70,80},{60,90},{85,70},{70,80}};
        for(int i=0; i<4; i++){
            for(int j=0; j<2; j++){
                printf("%d ",arr[i][j]);
            }
               printf("\n");
        }
      
    return 0;
}