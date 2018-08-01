#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
public:
    Stack(){
        cout<<"Enter the size of stack: ";
        cin>>size;
        top=-1;
        arr = new int[size];
    }
    void push(int item){
        if(top==size){
            cout<<"Stack Overflow !"<<endl;
        }
        else{
            top++;
            arr[top] = item;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow !"<<endl;
        }
        else{
            int temp = arr[top];
            top--;
        }
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
    s.display();
    s.pop();
    //s.pop();
    //s.pop();
    //s.push(9);
    s.display();
    return 0;
}