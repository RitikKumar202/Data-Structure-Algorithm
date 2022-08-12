// Find minimum element in rotated sorted array(contains duplicates)
// worst case Time Complexiety = O(n)
// Average case Time Complexiety = O(logn)
#include<bits/stdc++.h>
using namespace std;

int find_min(int a[], int n){
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
        else if(a[mid]>a[e]){
            s=mid+1;
        }
        else{
            e--;
        }
    }
}

int main(){
    int a[] = {3,3,4,7,1,1,2,2,3};
    int n = sizeof(a)/sizeof(int);

    cout<<find_min(a,n);
}