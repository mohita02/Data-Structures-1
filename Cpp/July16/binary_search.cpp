#include<iostream>
using namespace std;

class binary{
    int a[10];
    int size;
    int mid, beg, end;
    int find;
public:
    binary(){
        a[10]={0};
        size=0;
        mid=0;
        beg=0;
        end=0;
        find=0;
    }
    void getData(){
        cout<<"Enter the size of array: ";
        cin>>size;
        cout<<"Enter the elemnts of array: ";
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        cout<<"Enter the element to find : ";
        cin>>find;
    }
    void search(){
        beg=0;
        end=size-1;
        mid=(beg+end)/2;
        if(find==a[mid]){
            cout<<"Element found at index "<<mid<<endl;
        }
        if(find<a[mid]){
            end = mid;
            mid = (beg+end)/2;
            search();
        }
        if(find>a[mid]){
            beg = mid;
            mid = (beg+end)/2;
            search();
        }
    }
};
int main(){
    binary obj;
    obj.getData();
    obj.search();
}