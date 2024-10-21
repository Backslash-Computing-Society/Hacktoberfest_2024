#include <iostream>
using namespace std;

class Increment{
    int data1,data2;

    public:
        void set_data(int a, int b){
            data1 = a;
            data2 = b;
        }

        void update_data(Increment* obj,int size){
            for(int i =0; i<size; i++){
                obj[i].data1 = obj[i].data1 + 10;
                obj[i].data2 = obj[i].data2 + 10;
            }
        }

        void output(){
            cout<<"Data1: "<<data1<<endl;
            cout<<"Data2: "<<data2<<endl;
            cout<<endl<<endl;
            
        }
};

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    Increment* objArr = new Increment[size];

    for(int i =0; i<size; i++){
        objArr[i].set_data(i, i+1);
    }

    objArr-> update_data(objArr, size);

    for(int i =0; i<size; i++){
        objArr[i].output();
    }

    return 0;
}