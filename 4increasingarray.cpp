// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
#define ll long long

int main() {
	int n, max=0;
	std::cin>>n;
	ll ans=0;
	for (int i = 0; i < n; i++) {
		int x;
		std::cin>>x;
		max = std::max(x, max);
		ans += max - x;
	}
	std::cout<<ans;
}
