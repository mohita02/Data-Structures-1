#include<iostream>
using namespace std;

int main(void){
    int a;
    cin>>a;
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    cout<<"Factorial of "<<a<<" is "<<fact<<endl;
    return 0;
}