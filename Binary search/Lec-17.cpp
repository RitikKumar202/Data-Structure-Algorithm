//Find an element in a Bitonic array
#include<bits/stdc++.h>
using namespace std;

int peak_element(int a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
            return mid;
        }
        else if(a[mid]<a[mid+1]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}

int ascending_order_arry(int a[], int n, int key){
    int s=0;
    int e=peak_element(a,n)-1;

    while(s<=e){
        int mid=(s+e)>>1;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int descending_order_arry(int a[], int n, int key){
    int s=peak_element(a,n);
    int e=n-1;
    while(s<=e){
        int mid=(s + (e-s)/2);
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int a[]={1,3,5,12,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    int key=4;

    if(ascending_order_arry(a,n,key)!=-1){
        cout<<ascending_order_arry(a,n,key);
    }
    else if(descending_order_arry(a,n,key)!=-1){
        cout<<descending_order_arry(a,n,key);
    }
    else{
        cout<<"Element not found";
    }
}