#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    float basic_salary;
    float totalsalary;
    public:
    employee(string n, float bs){
        name = n;
        basic_salary = bs;
    }
};
class permanent: public employee{
    protected:
    float bonus;
    public:
    permanent(string n, float bs, float b):employee(n,bs){
        // name=n;
        // basic_salary=bs;
        bonus= b;
        totalsalary= basic_salary+bonus;
    }
    void display(){
        cout<<"pakke majdoor"<<endl;
        cout<<name<<endl;
        cout<<totalsalary<<endl;
        cout<<bonus<<endl;
    }
};
class contract: public employee{
    public:
    contract(string n, float bs): employee(n,bs){
        // name=n;
        // basic_salary=bs;
        totalsalary= basic_salary;
    }
    void display(){
        cout<<"contract hai bhai"<<endl;
        cout<<name<<endl;
        cout<<totalsalary<<endl;
    }
};
int main(){
    permanent p("Rahul", 5000, 1000);
    contract c("mahul", 1000);
    p.display();
    c.display();
    return 0;
}



/*
#include <iostream>
using namespace std;
class employee {
protected:
    string name;
    float basic_salary;
    float totalsalary;

public:
    // Constructor for employee
    employee(string n, float bs) : name(n), basic_salary(bs), totalsalary(bs) {}
    ~employee() {}
};
class permanent : public employee {
private:
    float bonus;

public:
    permanent(string n, float bs, float b) : employee(n, bs), bonus(b) {
        totalsalary = basic_salary + bonus;
    }
    void display() {
        cout << "pakke majdoor" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Salary: " << totalsalary << endl;
        cout << "Bonus: " << bonus << endl;
    }
};
class contract : public employee {
public:
    contract(string n, float bs) : employee(n, bs) {
        totalsalary = basic_salary;
    }
    void display() {
        cout << "contract hai bhai" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Salary: " << totalsalary << endl;
    }
};
int main() {
    permanent p("Rahul", 5000, 1000);
    contract c("mahul", 1000);

    p.display();
    c.display();

    return 0;
}
*/