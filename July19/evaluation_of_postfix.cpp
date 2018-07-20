#include<iostream>
#include<string>
using namespace std;

class Stack{
    int top;
    char *arr;
    int size;
public:
    Stack(){
        top=-1;
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
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow !"<<endl;
            return 0;

        }
        else{
            int temp = arr[top];
            top--;
            return temp;
        }
    }
    int peek(){
        return arr[top];
    }
    bool empty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
    int precedence(char c){
        if(c == '^')
            return 3;
        else if(c == '*' || c == '/')
            return 2;
        else if(c == '+' || c == '-')
            return 1;
        else
            return -1;

    }
    void infixToPostfix(char *infix,char *postfix,int size){
        arr = new char[size];
        int j=0;
        for(int i=0;i<size;i++){
            if((infix[i]>='A' && infix[i]<='Z') || (infix[i]>='a' && infix[i] <= 'z')){
                postfix[j++] = infix[i];
            }
            else if(infix[i]=='('){
                push(infix[i]);
            }
            else if(infix[i]==')'){
                while(arr[top]!='('){
                    postfix[j++]=pop();
                }
                if(arr[top]='('){
                    pop();
                }
            }
            else{
                if(top==-1){
                  push(infix[i]);
                }
                else{
                    int prec = precedence(infix[i]);
                    while(prec<=precedence(arr[top])&& arr[top]!='('){
                        postfix[j++] = pop();
                        push(infix[i]);
                    }
                }
            }
        }
        while(top!=-1){
            postfix[j++] = pop();
        }
    }
};

int main(){
    Stack s;
    char infix[] = "(A-B)*D/E";
    int size = sizeof(infix);
    char *postfix;
    postfix = new char[size];
    s.infixToPostfix(infix,postfix,size);
    cout<<endl<<infix<<endl;
    cout<<postfix<<endl;
    return 0;
}