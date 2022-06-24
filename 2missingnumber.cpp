#include <bits/stdc++.h>
#define ll long long

int main() {
	ll n, sum=0;
	std::cin>>n;
	ll as = n*(n+1)/2;
	while (n>1) {
		int a;
		std::cin>>a;
		sum += a;
		--n;
	}
	std::cout<<as-sum;
}
	
