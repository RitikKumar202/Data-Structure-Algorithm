//Count of an element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int count(int a[], int n, int key){
    int s1=0,s2=0;
    int e1=n-1,e2=n-1;
    int fo=-1,lo=-1;

    while(s1<=e1){
        int mid1=s1+(e1-s1)/2;
        if(a[mid1]==key){
            fo=mid1;
            e1=mid1-1;
        }
        else if(a[mid1]>key){
            e1=mid1-1;
        }
        else{
            s1=mid1+1;
        }
    }

    while(s2<=e2){
        int mid2=s2+(e2-s2)/2;
        if(a[mid2]==key){
            lo=mid2;
            s2=mid2+1;
        }
        else if(a[mid2]>key){
            e2=mid2-1;
        }
        else{
            s2=mid2+1;
        }
    }

    return lo-fo;
}

int main(){
    int a[]={2,4,10,10,10,16,18};
    int n=7;
    int key=10;
    cout<<count(a,n,key)+1<<endl;
}