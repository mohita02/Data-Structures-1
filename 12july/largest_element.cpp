#include<iostream>
#include<array>
#include<limits.h>
using namespace std;

class largestElement{
    int large;
    int secondLargest;
public:
    largestElement(){
        large = INT_MIN;
        secondLargest = INT_MIN;
    }
    void findLarge(int *arr){
        for(int i=0;i<sizeof(arr);i++){
            for(int j=0;j<sizeof(arr)-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        large = arr[sizeof(arr)-1];
        secondLargest = arr[sizeof(arr)-2];
        cout<<"Largest element is "<<large<<endl;
        cout<<"Second Largest element is "<<secondLargest<<endl;
    }
};
int main(){
    int a[]={5,6,3,8,20,98,65};
    largestElement l;
    l.findLarge(a);
}