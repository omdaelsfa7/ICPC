#include <iostream> 
using namespace std ; 

string sol ( int a , int b ){
    return (a * b )% 2  == 0 ? "Even" : "Odd" ; 
}

int main(){

int a , b ;
cin >> a >> b  ;

cout << sol(a,b) ;

}