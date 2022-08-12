// Find minimum element in rotated sorted array(no duplicates)
#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e){
            return a[s];
        }
        else if(a[mid]<a[e]){
            e=mid;
        }
        else{
            s=mid+1;
        }
    }
}

int main(){
    int a[] = {7,8,9,1,2,4,5,6};
    int n = sizeof(a)/sizeof(int);

    cout<<binary_search(a,n);
}