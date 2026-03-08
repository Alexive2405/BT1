#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , s;
    do{
        cout <<"Nhap N,s: ";
        cin >> n >> s;
    }while( n <= 0 || s <= 0 );
    int a[n][n];
    
    //thuật toán 
    for ( int k = 0 ; k < 2* ( n -1 ) ; k++ ){
        //trương hợp k chẵn ( đường chéo lên )
        if ( k % 2 == 0 ){
            for ( int i = min( k , n-1 ) ; i >= max( 0 , k - n + 1) ; i--){
                int j = k - i;
                a[i][j] = s++;
            }
        }
        //trường hợp k lẻ ( đường chéo xuống )
        else{
            for ( int i = max(0 , k - n + 1); i <= min(k , n -1 ) ; i++ ){
                int j = k - i;
                a[i][j] = s++; 
            }
        }
    }
    
    cout << "Ma tran: " << endl;
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
