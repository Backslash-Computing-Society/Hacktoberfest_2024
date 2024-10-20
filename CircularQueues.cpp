#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front=-1;
int rear=-1;

bool isempty(){
    cout<<"queue is empty";
}

bool isfull(){
    cout<<"queue is full";
}

void enqueue(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front){
        cout<<"QUEUE IS FULL";
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        cout<<"queue is empty";
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<queue[front];
        front=(front+1)%N;
    }
}

void display(){
    int i=front;
    if(front==-1&&rear==-1){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is";
        while(i!=rear){
            cout<<queue[i]<<" ";
            i=(i+1)%N;
        }
        cout<<queue[rear];
    }
}

void peek(){
    if(front==-1&&rear==-1){
        cout<<"queue is empty";
    }
    else{
        cout<<queue[front];
    }
}

int main(){
    int choice, value;
        do{
        cout << "\n--- Queue Operations Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please choose again.\n";
        }
        }
        while (choice != 5);

    return 0;
}