//Binary Search on answer
//Peak Element (wo element jo apne dono neighbour se bada hoga)
#include<bits/stdc++.h>
using namespace std;

int peak_element(int a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(mid>0 && mid<n-1){
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
                return mid;
            }
            else if(a[mid+1]>a[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        else if(mid==0){
            if(a[mid]>a[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(a[mid]>a[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
    }
}

//By striver
int find_peak(int a[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(a[mid] > a[mid+1]){
            e=mid;
        }
        else{
            s=mid+1;
        }
    }
    return a[s];
}

int main(){
    int a[]={3,4,1,10,5,15,14};
    int n=sizeof(a)/sizeof(int);

    cout<<peak_element(a,n)<<endl;
    cout<<find_peak(a,n);
}