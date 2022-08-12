//calculating Factorial by recursion
#include<bits/stdc++.h>
using namespace std;

//Parameterised way
void fact1(int i, int product){
    if(i==1){
        cout<<product<<endl;
        return;
    }
    fact1(i-1, i*product);
}

//Functional way
int fact2(int n){
    if(n==1){
        return 1;
    }

    return n*fact2(n-1);
}

int main(){
    int n;
    cin>>n;

    fact1(n,1);  //Parameterised way

    cout<<fact2(n)<<endl;   //Functional way
}