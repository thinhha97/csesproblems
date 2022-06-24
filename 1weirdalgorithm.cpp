// https://cses.fi/problemset/task/1068 
#include <bits/stdc++.h>
#define ll long long

int main() {
	ll n;
	std::cin>>n;
	std::cout<<n;
	while (n > 1) {
		if (n%2 == 0) {
			n /= 2;
		} else {
			n = n*3+1;
		}
		std::cout<<" "<<n;
	}
}
