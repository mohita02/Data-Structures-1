#include<iostream>
using namespace std;

class Bubble{
    int size;
    int arr[100];
public:
    Bubble(){
        size=0;
        arr[100]={0};
    }
    void getData(){
        cout<<"Enter the size of array : ";
        cin>>size;
        cout<<"Enter the elements of array : "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void sort(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp  = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    void printArray(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Bubble obj;
    obj.getData();
    obj.sort();
    obj.printArray();
    return 0;
}