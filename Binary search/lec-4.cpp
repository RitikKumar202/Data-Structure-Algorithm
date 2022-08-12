//First and Last Occurrence of an element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int First_Occurrence(int a[], int n, int key){
    int s=0;
    int e=n-1;
    int res1=-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid]==key){
            res1=mid;
            e=mid-1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return res1;
}

int Last_Occurrence(int a[], int n, int key){
    int s=0;
    int e=n-1;
    int res2=-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid]==key){
            res2=mid;
            s=mid+1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return res2;
}

int main(){
    int a[]={2,4,10,10,10,16,18};
    int n=7;
    int key=10;
    cout << First_Occurrence(a,n,key) <<endl;
    cout << Last_Occurrence(a,n,key) <<endl;
}