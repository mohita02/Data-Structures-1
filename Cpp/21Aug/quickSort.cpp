#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[], int low, int high){
    int pivot;
    int index = low;
    pivot = high;
    int current;
    for(current=low;current<high;current++){
        if(a[current]<a[pivot]){
            swap(a[current],a[index]);
            index++;
        }
    }
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int index = partition(a,low,high);
        quicksort(a,low,index-1);
        quicksort(a,index++,high);
    }
}
int main(){
    int a[] = {2,5,4,8,22,7,15,6};
    int high = 
}