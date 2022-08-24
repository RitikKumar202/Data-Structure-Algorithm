// check the given string is palindrome or not by using recursion
#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(int i, string s, int n){
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return check_palindrome(i+1, s, n);
}

int main(){
    string s;
    cin>>s;
    int n = s.size();

    cout << check_palindrome(0,s,n);
}