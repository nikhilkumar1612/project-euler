#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>

int main() {
    ll n = 10000;
    map<ll, ll> divisors;

    for(ll i=1;i<=n;i++) {
        ll sum =0;
        for(ll j=1;j<=i/2;j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        divisors[i] = sum;
    }

    std::set<ll> amicable_numbers;

    for(ll i=1;i<=n;i++) {
        if(divisors[i] > 1 && (divisors[divisors[i]] == i) && (divisors[i] != i)) {
            cout<< "Amicable pair found: " << i << " and " << divisors[i] << "\n";
            amicable_numbers.insert(i);
            amicable_numbers.insert(divisors[i]);
        }
    }
    ll sum = 0;
    for(ll it: amicable_numbers) {
        sum += it;
    }
    cout << "Sum of amicable numbers: " << sum << "\n";
}