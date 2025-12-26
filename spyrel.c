// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("Enter number of coloum :");
//     scanf("%d",&c);
//     int arr[r][c];
//     printf("Enter number of element :");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[r][c]);
//         }
//     }
//     int minc=0;
//     int maxc=c-1;
//     int maxr=r-1;
//     int minr=0;
//     int tne=r*c;
//     int count =0;
//     while(tne>count){
//     for(int i=minc; i<=maxc; i++){
//         printf("%d ",arr[minr][i]);
//         count++;
//     } 
//     minr++;
//     for(int j=minr; j<=maxr; j++){
//         printf("%d",arr[j][maxc]);
//         count++;
//     } 
//     maxc--;

//     for(int i=maxc; i<=minc; i++){
//         printf("%d",arr[i][maxr]);
//         count++;
//     }
//     maxr--;
//     for(int i=maxr; i<=minr; i++){
//         printf("%d",arr[i][minc]);
//         count++;
//     }
//     minc++;
// }
//     return 0;
// }
#include<stdio.h>
int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);  // FIXED
        }
    }

    int minr = 0, minc = 0;
    int maxr = r - 1, maxc = c - 1;
    int count = 0;
    int tne = r * c;

    printf("Spiral order: ");

    while (count < tne) {

        // left to right
        for (int i = minc; i <= maxc && count < tne; i++) {
            printf("%d ", arr[minr][i]);
            count++;
        }
        minr++;

        // top to bottom
        for (int i = minr; i <= maxr && count < tne; i++) {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;

        // right to left
        for (int i = maxc; i >= minc && count < tne; i--) {
            printf("%d ", arr[maxr][i]);
            count++;
        }
        maxr--;

        // bottom to top
        for (int i = maxr; i >= minr && count < tne; i--) {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}
