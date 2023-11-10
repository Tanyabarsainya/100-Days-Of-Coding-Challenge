#include <iostream>
#include <cmath>
using namespace std;


int maxProfit(int price[], int n)
{
	int profit = 0;

	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	return profit;

}


int main() {
	
      int arr[] = {10, 15, 23, 8, 12}, n = 5;

      cout<<maxProfit(arr, n);
    
}