#include<stdio.h>
int maze(int cr,int cc, int er ,int ec){
    int rightways = 0;
    int downwards = 0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec);

    }
    if(cc==ec){
        downwards += maze(cr+1,cc,er,ec);

    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downwards += maze(cr+1,cc,er,ec);

    }
    int totalways= rightways+downwards;
    return totalways;
}
    int main(){
        int n;
        printf("ENTER ROWS:");
        scanf("%d",&n);
        int m ;
        printf("ENTER COLUMNS:");
        scanf("%d",&m);
        int noofways= maze(1,1,n,m);
        printf("%d",noofways);
        return 0;    }