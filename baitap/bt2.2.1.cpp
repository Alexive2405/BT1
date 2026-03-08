#include <bits/stdc++.h>
using namespace std;

long long gt( int n ){
    long long s = 1; 
    for ( int i = 1 ; i <= n ; i++ ){
        s *= i;
    }
    return s;
}

int main(){
    int n;
    int sum = 0; 
    cout <<"Nhap N: ";
    cin >> n;
    for ( int i = 1 ; i <= n ; i++ ){
        sum += gt(i);
    }
    cout << sum;
}