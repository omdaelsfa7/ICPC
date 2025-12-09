#include <iostream>
using namespace std ; 

void sol(int a , int b ){
	if (a == 10  && b== 1 ){
		cout << "Yes" ; 
	}
	else if (a == 1  && b== 10 ){
		cout << "Yes" ; 
	}
	else if ( a - b == 1 || a-b == -1  ){
		cout << "Yes" ; 
	}
	else {
		cout <<"No" ; 
	}
}

int main(){
	int a , b ; 

	cin >> a >> b ; 

	sol (a , b ) ; 
}