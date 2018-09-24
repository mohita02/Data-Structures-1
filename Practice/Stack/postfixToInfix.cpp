#include<bits/stdc++.h>
using namespace std;

bool isOperand(char x){
    return(x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

// Get Infix for the given postfix
// expression
string getInfix(string exp){
    // Using pre-defined stack
    stack<string> s;

    for(int i=0;exp[i]!='\0';i++){
        //Push operands
        if(isOperand(exp[i])){
            string op(1, exp[i]);
            s.push(op);
        }
    }
}