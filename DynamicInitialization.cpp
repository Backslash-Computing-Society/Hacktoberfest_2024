#include <iostream>
using namespace std;

class BankDeposit{
    int principal;
    int time;
    float rate;
    float returnValue;

    public:
        BankDeposit(){}; //we need this empty of blank constructor so that the compiler should know which constructor to run, It is to intialize the oblject even if no paramerters are passed. As we later saw in the code we passed the parameters after the initialization of objects. So to avoid errors in such cases we uses this blank constructor.
        BankDeposit(int p, int y, float r);//r = 0.1
        BankDeposit(int p, int y, int r);//r = 10
        void show(void);
};

BankDeposit :: BankDeposit(int p, int y ,float r){
    principal = p;
    time = y;
    rate = r;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate);
    }
    
}
BankDeposit :: BankDeposit(int p, int y ,int r){
    principal = p;
    time = y;
    rate = float(r)/100;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate);
    }
    
}
void BankDeposit :: show(void){
    cout<<"Principal amount was "<<principal<<endl;
    cout<<"Return value after "<<time<<" is "<<returnValue<<endl;
}

int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y,R;
    float r;

    cout<<"Enter the value of p,y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();
    return 0;
}