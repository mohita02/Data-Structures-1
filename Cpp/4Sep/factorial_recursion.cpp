#include<iostream>
using namespace std;

int factorial(int a){
    if(a>=1){
        return a*factorial(a-1);
    }
    else{
        return 1;
    }
}
int main(void){
    int a;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;  
    return 0;
}