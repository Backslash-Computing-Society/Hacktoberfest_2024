#include <iostream>
using namespace std;

class Counter{
    private:
        int count;
    
    public:
        Counter(int c = 0): count(c){}

        // Overloading the prefix increment operator
        Counter& operator++(){ //we are returning the reference of the object so that we can use the object in the same line.
            ++count;
            return *this;
        }

        // Overloading the postfix increment operator
        Counter operator++(int){//int is used to differentiate between prefix and postfix increment operator.
            Counter temp = *this;
            count++;
            return temp;
        }

        void display(){
            cout<<"Count: "<<count<<endl;
        }
};

int main(){
    Counter c1, c2;
    c1.display();
    c2.display();

    ++c1;
    c1.display();

    c2 = c1++;
    c1.display();
    c2.display();

    return 0;
}