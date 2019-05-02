/*
Question: Find parity of a large 64 bit number.
-> Constant time
-> No lookup table.
-> O(log n), where n = number of bits.  
*/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int parity(ll x)
{
	x = x^(x>>32);
	x = x^(x>>16);
	x = x^(x>>8);
	x = x^(x>>4);
	x = x^(x>>2);
	x = x^(x>>1);
	return (x&1);
}

int main() {
	ll x;
	scanf("%lld", &x);
	if(parity(x))
	{
		printf("Odd Parity\n");
	}
	else
	{
		printf("Even Parity\n");
	}
	return 0;
}