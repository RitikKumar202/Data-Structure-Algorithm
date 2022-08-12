//Allocate minimum Number of pages
/*problem : Given array and no of students we need to distribute books according to given condition:
            1)Each student should get atleast one book to read
            2)book should be distributed in continuos manner (one-by-one)
            Now, Minimize the maximum number of pages jo ek student read karega
*/
#include<bits/stdc++.h>
using namespace std;

bool isValid(int a[], int n, int k, int mid){
    int student=1;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
        if(sum>mid){
            student++;
            sum=a[i];
        }
        if(student>k){
            return false;
        }
    }
    return true;
}

int main(){
    int a[]={10,20,30,40}; //Given ith book has a[i] pagges , array may be sorted or unsorted
    int n=sizeof(a)/sizeof(int);
    int k=2; //No of students

    int sum=0, mx=INT_MIN, res=-1;
    for(int i=0; i<n; i++){
        sum+=a[i];
        if(a[i]>mx){
            mx=a[i];
        }
    }

    int s=mx;  // maximum in array
    int e=sum; // sum of all array
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isValid(a,n,k,mid)==true){
            res=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    cout<<res;
}
