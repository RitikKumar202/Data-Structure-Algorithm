//Find ceil of an element in a sorted array
// ceil = smallest element which is greater than given key
#include<bits/stdc++.h>
using namespace std;

int find_ceil(int a[],int n, int key){
    int s=0;
    int e=n-1;
    int res=-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(a[mid]==key){
            return a[mid];
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else if(a[mid]>key){
            res=a[mid];
            e=mid-1;
        }
    }
    return res;
}

int main(){
    int a[]={1,2,3,4,8,10,10,12,19};
    int n=sizeof(a)/sizeof(int);
    int key=5;

    cout<<find_ceil(a,n,key)<<endl;
}