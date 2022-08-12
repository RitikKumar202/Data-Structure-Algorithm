//Find the min length of subarray such that sum>=target
#include<bits/stdc++.h>
using namespace std;

//check if there exists a subarray of size k which has sum>=target
bool blackBox(int a[], int n, int target, int k){
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=a[i];
    }
    int mx = sum;
    int l=0, r=k-1;
    while(r!=n-1){
        sum-=a[l];
        l++;
        sum+=a[r];
        r++;
        mx=max(mx,sum);
    }
    // return mx >= target;
    if(mx>=target) return true;
    return false;
}

int findMinLength(int a[], int n, int target){
    int s = 1;
    int e = n;
    bool answerPossible = false;
    while(s < e){
        int mid = s+(e-s)/2;
        if(blackBox(a,n,target,mid) == true){
            answerPossible = true;
            e = mid;
        }
        else{
            s = mid + 1;
        }
    }
    if(answerPossible == true){
        return s;
    }
    return -1;
}

int main(){
    int a[] = {2,3,1,2,4,3};
    int n = sizeof(a)/sizeof(int);
    int target = 7;

    cout << "Min length subarray is : " << findMinLength(a,n,target) << endl;
}