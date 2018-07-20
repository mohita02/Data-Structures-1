#include<iostream>
using namespace std;

class stack{
    int top;
    int n;
    char *arr;
public:
    void infixtopostfix(char infix[],char postfix[],int size){
        int j=0;
        for(int i=0;i<size;i++){
            if((infix[i]>='A' && infix[i]<='Z') || (infix[i]>='a' && infix[i] <= 'z')){
                postfix[j++] = infix[i];
            }else if(infix[i]=='('){
                push(infix[i]);
            }else if(infix[i]==')'){
                while(arr[top]!='('){
                    postfix[j++]=pop();
                }
                if(arr[top]='('){
                    pop();
                }
            }
        }
    }
};

int main(){

}