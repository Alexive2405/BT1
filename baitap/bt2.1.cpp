#include <bits/stdc++.h>
using namespace std;

int main(){
    float a , b , c;
    do{
        cout << "Nhap a , b , c: ";
        cin >> a >> b >> c;
    }while( (a , b , c) <= 0);
    if ( (a+b) > c || (b+c) > a || (a+c) > b  ){
        cout << "tam giac THUONG";
    }
    else if ( pow(a,2) == ( pow(b,2) + pow(c,2) ) || pow(b,2) == ( pow(a,2) + pow(c,2) ) || pow(c,2) == ( pow(a,2) + pow(b,2) ) ){
        if ( a == b || b == c || a == c )
            cout << "tam giac VUONG CAN";
        else{
            cout <<"tam giac VUONG";
        } 
    }
    else if ( a == b && b == c ){
        cout << "tam giac DEU  ";
    }
    else cout << "KHONG phai tam giac"; 
}