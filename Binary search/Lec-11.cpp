//Next alphabetical element
//used concept of ceil searching
#include<bits/stdc++.h>
using namespace std;

char next_alphabet(char arr[], int n, char key){
    int s=0;
    int e=n-1;
    char res;

    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]<=key){
            s=mid+1;
        }
        else{
            res=arr[mid];
            e=mid-1;
        }
    }
    return res;
}

int main(){
    char arr[]={'a','b','e','f','j','m'};
    int n=sizeof(arr)/sizeof(char);
    char key = 'f';

    cout<<next_alphabet(arr,n,key);
}