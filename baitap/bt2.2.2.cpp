#include <bits/stdc++.h>
using namespace std;

long long gt( int n ){
    long long s = 1; 
    for ( int i = 1 ; i <= n ; i++ ){
        s *= i;
    }
    return  s; 
}


int main(){
    int n;
    do{
        cin >> n;
    }while ( n < 0 );
    long long sum = 0;
    for ( int i = 0 ; i <= n ; i++ ){
        sum += gt(2*i + 1);
    }
    cout << sum;
}