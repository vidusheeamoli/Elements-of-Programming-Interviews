/*
Question: Swap i-th and j-th bits of a 64 bit number.
-> O(1)  
-> swap only when the 2 bits differ.
*/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll swap(ll x, ll i, ll j)
{
	if(((x>>i)&1) != ((x>>j)&1))
	{
		return (x^((1 << i) | (1 << j)));
	}
	return x;
}

int main() {
	ll x, i, j;
	scanf("%lld %lld %lld", &x, &i, &j);
	printf("%lld\n", swap(x, i, j));
	return 0;
}