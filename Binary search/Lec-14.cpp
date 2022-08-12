//Minimum difference between element in a sorted array
// we can also find by finding floor and ceil and then compare minimum
#include<bits/stdc++.h>
using namespace std;

int min_diff(int a[], int n, int key){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==key){
            return a[mid];
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
}

int main(){
    int a[]={2,3,5,8,10,15};
    int n=sizeof(a)/sizeof(a[0]);
    int key=12;

    int x = min_diff(a,n,key);

    int l=abs(key-a[x-1]);  // key-a[e]
    int r=abs(key-a[x]); // key-a[s];
    if(key==x){
        cout<<key;
    }
    else if(l<r){
        cout<<a[x-1];
    }
    else{
        cout<<a[x];
    }
}