#include<iostream>
using namespace std;

class Insert{
    int n;
    int a[100];
    int element;
    int pos;
public:
    Insert(){
        a[n]={0};
        element=0;
        pos=0;
    }
    void getData(){
        cout<<"Enter the size of array : ";
        cin>>n;
        cout<<"Enter the elements of array : "<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    void insertElement(){
        cout<<"Enter the element to be added : ";
        cin>>element;
        cout<<"Enter the position at which to element has to be added : ";
        cin>>pos;
        for(int i=n-1;i>=pos;i--){
            a[i+1] = a[i];
        }
        a[pos] = element;
        n++;
    }
    void deleteArray(){
        cout<<"Enter the element to be deleted : ";
        cin>>element;
        cout<<"Enter the position at which to element has to be deleted : ";
        cin>>pos;
        for(int i=pos;i<=n;i++){
            a[i] = a[i+1];
        }
        n--;
    }
    void printArray(){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Insert obj;
    obj.getData();
    //obj.insertElement();
    //obj.printArray();
    obj.deleteArray();
    obj.printArray();
}