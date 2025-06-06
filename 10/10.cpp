#include<bits/stdc++.h>
using namespace std;

#define ll 				long long

vector<bool>prime;
void sieve(ll n) {
	ll m = sqrt(n);
	prime.resize(n + 1, true);
	prime[0] = false;
	prime[1] = false;
	for (ll i = 2; i <= m; i++) {
		for (ll j = i * i; j <= n; j += i)
			prime[j] = false;
	}
}

int main() {
    ll n = 10;
    sieve(n);
    ll sum = 0;
    for (ll i = 2; i < n; i++) {
        if (prime[i]) sum += i;
    }
    cout << sum << "\n";
    return 0;
}