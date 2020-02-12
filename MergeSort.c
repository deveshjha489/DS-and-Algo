#include<stdio.h>
#include"arrayUtil.h"
void mergesort(int arr[] , int i , int j){
    if(i==j) return arr[i];
    else{
        int mid =i+j/2;
        mergesort(arr,i ,mid);
        mergesort(arr,mid+1, j);
        mergealgo(arr,i,mid,j);
    }
}
void mergealgo(int *a,int i , int mid , int j){
    int b[j-i+1];
    int k = mid,c =0;
    while(i<mid && k<=j){
        if(a[i]<=a[k]){
            b[c] = a[i];
            c++;
            i++;
        }

        if(a[k]< a[i]){
            b[c] = a[k];
            c++;
            k++;
        }

    }

    while(i<mid){
        b[c] = a[i];
        c++;
        i++;
    }

    while(k<=j){
        b[c] = a[k];
        c++;
        k++;
    }
}
int main(){
    int a[10];
    int *arr = createRandomArray(a,10);
    mergesort(arr,0,9);

}
