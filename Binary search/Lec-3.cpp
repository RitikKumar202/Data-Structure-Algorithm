// Lec-1  (Binary search in sorted ascending order)
// Lec-2  (Binary search in sorted descending order)
// Lec-3  (Order Agnostic Search i.e, array is given in sorted but order not known)
#include<bits/stdc++.h>
using namespace std;

int ascending_order_arry(int a[], int n, int key){

    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)>>1;  // (s + (e-s)/2)

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int descending_order_arry(int a[], int n, int key){

    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s + (e-s)/2);

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    cin >> n >> key;
    int a[100000]={0};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if(n==1){
        cout << ascending_order_arry(a, n, key) << endl;
    }
    else if(n>=2){
        if(a[0]<a[1]){
            cout << ascending_order_arry(a, n, key) << endl;
        }
        else{
            cout << descending_order_arry(a, n, key) << endl;
        }
    }
}