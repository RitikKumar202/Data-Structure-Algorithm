//sum of first N numbers using recursion
#include<bits/stdc++.h>
using namespace std;

//Parameterised way
void sum1(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sum1(i-1, sum+i);
}

//Functional way
int sum2(int n){
    if(n==0){
        return 0;
    }

    return n+sum2(n-1);
}

int main(){
    int n;
    cin>>n;

    sum1(n,0);   //Parameterised way

    cout<<sum2(n)<<endl;  //Functional way
}