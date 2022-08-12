//Find position of an element in an infinite sorted array
#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int s,int e,int key){
    
    while(s<=e){
        int mid = (s+e)/2;
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
    int a[]={1,2,3,4,5,6,7,8,9,10,11}; // let array till infinite
    int key=7;

    int start=0;
    int end=1;
    while(key>a[end]){
        start=end;
        end=2*end;
    }
    cout<<binary_search(a,start,end,key);
}