//Index of first 1 in a Binary sorted infinite array
#include<bits/stdc++.h>
using namespace std;

int first_one(int a[],int s,int e,int key){
    int res;

    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            res=mid;
            e=mid-1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return res;
}

int main(){
    int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}; // till infinite
    int key = 1;

    int s=0;
    int e=1;
    while(key>a[e]){
        s=e;
        e=2*e;
    }

    cout<<first_one(a,s,e,key);
}