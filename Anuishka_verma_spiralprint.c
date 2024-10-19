#include<stdio.h>
int main(){
    int r,c;
    printf("enter the number of rows & columns : ");
    scanf("%d %d", &r, &c);
    int ar[r][c];

    //input matrix
    printf("enter the values to first matrix : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    //print matrix
    printf(" first matrix is ; \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d \t", ar[i][j]);
        }
        printf("\n"); 
      }
      
    //printing spiral
    int minr = 0, maxr =r-1, minc=0, maxc=c-1;
    int count = 0;
    while(count < (r*c)){
    for(int j = minc; j<=maxc && count != r*c ;j++){     //or we can use breAK
            printf("%d \t", ar[minr][j]);
            count++;
        } minr++;                   //if(count >= r*c) break;
    for(int i=minr; i<=maxr && count != r*c; i++ ){
        printf("%d \t", ar[i][maxc]);
        count++;
    } maxc--;
    for(int j = maxc; j>=minc && count != r*c; j--){
            printf("%d \t", ar[maxr][j]);
            count++;
    }maxr--;
    for(int i=maxr; i>=minr && count != r*c; i-- ){
        printf("%d \t", ar[i][minc]);
        count++;
    }minc++;
    }
    return 0;
}