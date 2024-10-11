/***** to find 3 distict ele from arr which have sum =x
and numbers should be unique  */
#include<stdio.h>
int main(){
    int c = 0;
    int x = 9;
    int ar[10] = { 1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++ ){
        for(int j=i+1; j<10; j++){
            for(int k=j+1; k<10; k++){
                if(ar[i]+ ar[j]+ ar[k] == x){
                c++;
                printf("%d + %d + %d = %d \n",ar[i], ar[j], ar[k], x );
                }
            }
        }
    }
    printf("%d", c);
    return 0;
}