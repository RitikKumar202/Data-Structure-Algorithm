// Reverse an array using recursion
#include <bits/stdc++.h>
using namespace std;

void rev_arr(int i, int a[], int n){
    if(i>=n/2) return;
    swap(a[i], a[n-i-1]);
    rev_arr(i+1, a, n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    rev_arr(0, a, n);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}