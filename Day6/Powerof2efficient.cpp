#include <iostream>
using namespace std;
bool isPow2(int n){
    return(n&&(n&(n-1))==0);
}
int main() 
{
    int n = 4;
	
	printf("%s", isPow2(n)? "true": "false");
    return 0;
}