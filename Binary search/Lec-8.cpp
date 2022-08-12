// Searching Element in a nearly Sorted Array
#include<bits/stdc++.h>
using namespace std;

int search(int a[], int n, int key){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid-1]==key && mid-1>=s){
            return mid-1;
        }
        else if(a[mid+1]==key && mid+1<=e){
            return mid+1;
        }
        else if(a[mid]>key){
            e=mid-2; 
        }
        else{
            s=mid+2;
        }
    }
    return -1;
}

int main(){
    int a[]={6,5,3,2,8,10,9};
    int n=sizeof(a)/sizeof(int);
    int key = 8;

    cout<<search(a,n,key);
}