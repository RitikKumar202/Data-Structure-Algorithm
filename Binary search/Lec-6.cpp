// Number of times a sorted array is rotated
// No of rotation = index of min element
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

int main(){
    int a[]={11,13,15,18,2,5,6};  //2 5 6 11 13 15 18
    int n=sizeof(a)/sizeof(a[0]);

    cout<<rotated_array(a,n)<<endl;
}