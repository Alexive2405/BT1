#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long a[2] , b[2];
    long long check;
    do{
        cout <<"Nhap vecto a: ";
        for ( int i = 0 ; i < 2 ; i++ ){
            cin >> a[i];
        }
        if ( ( a[0] && a[1]) == 0 ) cout << "vecto 0! "; 
    }while( ( a[0] && a[1] ) == 0 );

    do{
        cout <<"Nhap vecto b: ";
        for ( int i = 0 ; i < 2 ; i++ ){
            cin >> b[i];
        }
        if ( ( b[0] && b[1]) == 0 ) cout << "vecto 0! ";     
    }while ( (b[0] && b[1] ) == 0);

    check = a[0] * b[0] + a[1] * b[1];

    if ( check != 0 ){
        cout << "a va b khong truc giao";
    }
    else{
        cout << "a va b truc giao";
    }
}
    