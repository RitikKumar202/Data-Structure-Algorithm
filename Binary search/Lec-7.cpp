// Find an element in a Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;

int rotated_array(int a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        int prev = (mid-1)%n;
        int nxt = (mid+1)%n;
        if(a[mid]<=a[prev] && a[mid]<=a[nxt]){
            return mid;
        }
        else if(a[0]<=a[mid]){
            s=mid+1;
        }
        else if(a[mid]<=a[n-1]){
            e=mid-1;
        }
    }
}

int left_sorted_array(int a[], int key, int n){
    int s=0;
    int e=rotated_array(a,n)-1;

    while(s<=e){
        int mid=s+(e-s)/2;
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

int right_sorted_array(int a[], int key, int n){
    int s=rotated_array(a,n);
    int e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;
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

int main(){
    int a[]={11,13,15,18,2,5,6,8};
    int n=sizeof(a)/sizeof(a[0]);
    int key = 15;

    int l = left_sorted_array(a,key,n);
    int r = right_sorted_array(a,key,n);

    if(l==-1 && r==-1){
        cout<<"Element is not present"<<endl;
    }
    else if(l!=-1 && r==-1){
        cout<<"Element is present at index "<<l<<endl;
    }
    else{
        cout<<"Element is present at index "<<r<<endl;
    }
}