#include <iostream>
using namespace std;

class Engine{
    public:
        Engine(){
            cout<<"Engine constructor called"<<endl;
        }

        void startEngine(){
            cout<<"Engine started"<<endl;
        }
};

class Wheel{
    public:
        Wheel(){
            cout<<"Wheel constructor called"<<endl;
        }

        void rotateWheel(){
            cout<<"Wheel rotating"<<endl;
        }
};

class Car: public Engine, public Wheel{
    // Car class is inheriting Engine and Wheel class. It will have all the properties of both Engine and Wheel class. Even if the Engine and Wheel class have same function name, it will not create any ambiguity because the function name is different in both the classes.
    public:
        Car(){
            cout<<"Car constructor called"<<endl;
        }

        void startCar(){
            startEngine();
            rotateWheel();
            cout<<"Car started"<<endl;
        }
};

int main(){
    Car c;
    c.startEngine();
    c.rotateWheel();
    c.startCar();

    return 0;
}