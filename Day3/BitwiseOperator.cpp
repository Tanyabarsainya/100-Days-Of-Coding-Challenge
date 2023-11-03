#include <iostream>
using namespace std;
 
int main() {
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
   
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    
    cout << "a & b = " << (a & b) << endl;
 
    cout << "a | b = " << (a | b) << endl;
 
    
    cout << "a ^ b = " << (a ^ b) << endl;
 
    
    cout << "~a = " << (~a) << endl;

    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
 
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
    return 0;
}