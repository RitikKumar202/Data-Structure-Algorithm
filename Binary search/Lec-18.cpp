//Search an element in row and col wise sorted array
//Staircase Search
#include<bits/stdc++.h>
using namespace std;

pair<int,int>  staircaseSearch(int arr[][4], int n, int m, int key){
    
    int i=0;
    int j=m-1;

    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j]==key){
            return {i,j};
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }

    return {-1,-1};
}

int main(){
    int a[][4]={
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int n=4, m=4, key=29;

    pair<int,int> pr = staircaseSearch(a,n,m,key);
    cout<<pr.first<<","<<pr.second;
}