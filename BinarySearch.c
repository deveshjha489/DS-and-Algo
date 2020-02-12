#include<stdio.h>

int binarySearch(int *a,int i,int j,int key){
    int mid = (i+j)/2;
    if(i<=j){
        if(a[mid] == key) return 1;
        else if(a[mid]>key)
            return binarySearch(a,i,mid-1,key);
        else if(a[mid]<key)
            return binarySearch(a,mid+1,j,key);

    }

    else return -1;

}

int main(){
    int a[10] ={0,1,2,3,4,5,6,7,8,9};
    printf("%d",binarySearch(a,0,9,10));
}
