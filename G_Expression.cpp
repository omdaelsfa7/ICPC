#include <iostream>

using namespace std ; 
void sol(int x , int y , int z ){
    int arr[] ={ x + y + z , (x + y) * z , x *( y + z) , x * y * z ,x+y*z} ;

    int res = arr[0] ;
    for (int i = 1 ; i < 4 ; i++){
        if ( res < arr[i]){
            res = arr[i] ;
        }
    }
    cout << res ;
}
int main(){
    int x , y , z ;

    cin >> x >> y >> z ;
    
    sol(x,y,z) ;
}

// always use c/c++ RUNNER

// orrrr
// use this when u want to run.
// runner da extention asln

// ahh code snippet ?

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cin.tie(nullptr); 

void sol()
{
    return;
}

int32_t main()
{
    FIO;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}