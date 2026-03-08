#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    do{
        cout <<"Nhap N: ";
        cin >> n;
    }while( n == 0);

    int a[n][n] , b[n][n];
    cout << "Nhap ma tran A: ";
    
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }

    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cout << a[j][i];
        }
        cout << endl;
    }

}