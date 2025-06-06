#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>

int main() {
    ll max = -1;
    for (ll i=999; i>=100; i--) {
        for(ll j=999; j>=100; j--) {
            ll product = i * j;
            string s = to_string(product);
            string rev = s;
            reverse(rev.begin(), rev.end());
            if (s == rev) {
                max = max > product ? max : product;
            }
        }
    }
    cout << "Largest palindrome made from the product of two 3-digit numbers is: " << max << "\n";
    return 0;
}