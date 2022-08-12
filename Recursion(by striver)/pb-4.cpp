// print linearly from 1 to N by Backtrack
#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i<1){
        return;
    }
    print(i-1,n);
    cout<<i<<" ";
}

int main(){
    int n=4;
    print(n,n);
}