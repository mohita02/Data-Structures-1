#include<iostream>
using namespace std;

void mergeSort(int *a){

}
int main(void){
    int a[] = {2,4,1,6,8,5,3,7};
    int n = sizeof(a)/sizeof(a[0]);
    int mid = (0+n)/2;
    int left[mid];
    int right[mid];
    for(int i=0;i<=mid;i++){
        left[i] = a[i];
    }
    int j=0;
    for(int i=mid;i<n;i++){
        right[j] = a[i];
        j++;
    }
}