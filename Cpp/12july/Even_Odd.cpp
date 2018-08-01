/*
* Arrange the given array in such a way that even position have even value and odd positions have odd values.
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

class Arrange{
    int size;
    int odd=1;
    int even=0;
public:
    Arrange(){
        size=8;
    }
    void arrageArray(int *arr){
        while(true){
            while(even < size && arr[even]%2==0){
                even+=2;
            }
            while(odd < size && arr[odd]%2!=0){
                odd+=2;
            }
            if(even < size && odd < size){
                swap(arr[even],arr[odd]);
            }
            else{
                break;
            }
        }
    }
    void printArray(int *array){
        for(int i=0;i<size;i++){
            printf("%d ",array[i]);
        }
    }
};

int main(){
    int a[]={1,3,5,7,2,4,6,8};
    Arrange obj;
    obj.arrageArray(a);
    obj.printArray(a);
    return 0;
}