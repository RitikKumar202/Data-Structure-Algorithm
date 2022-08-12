// Search element in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;

int find_ele(int a[], int n, int key){
    int s=0, e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(a[mid]==key){
            return mid;
        }
        // if left part is sorted
        else if(a[mid] >= a[s]){
            //if key lies on left part
            if(key>=a[s] && key<=a[mid]){
                e=mid-1;
            }
            // if key lies on right part
            else{
                s=mid+1;
            }
        }
        // if right part is sorted
        else{
            // if key lies on right part
            if(key<=a[e] && key>=a[mid]){
                s=mid+1;
            }
            //if key lies on left part
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int a[]={4,5,6,7,0,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int key = 0;
    cout<<find_ele(a,n,key);
}