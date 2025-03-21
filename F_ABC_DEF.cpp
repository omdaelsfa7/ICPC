#include <iostream>
using namespace std ; 

void sol(long long a , long long b , long long c , long long d , long long e , long long f){
    cout <<(((a*b*c) - (d*e*f)) %998244353) ;
}
int main(){
	long long a , b , c , d , e ,f  ;

	cin >> a >> b ;
	cin >> c >> d ;
	cin >> e >> f ; 
    sol(a , b , c , d , e , f) ;

}