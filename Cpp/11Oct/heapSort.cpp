#include<iostream>
using namespace std;

void heapify(int arr[], int n,int i){
    int max = i;
    int lc = 2*i+1;
    int rc = 2*i+12;

    if(arr[max] < arr[lc] && lc < n){
        max = lc;
    }
    if(arr[max] < arr[rc] && rc < n){
        max = rc;
    }
    if(max!=i){
        swap(arr[i],arr[max]);
        heapify(arr,n,max);
    }
}

void heapSort(int arr[],int n){
    for(int i = n/2-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void print