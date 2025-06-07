#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>

ll n = 1000000;
vi lengths(5000000+2, -1);


ll recurse(ll n) {
    if (n == 1 || n==2) {
        return n;
    }

    if(n<lengths.size() && lengths[n] != -1){
        return lengths[n];
    }

    ll result;
    if (n & 1) {
        result = 1 + recurse(3 * n + 1);
    } else {
        result = 1 + recurse(n / 2);
    }
    if (n < lengths.size()) {
        lengths[n] = result;
    }
    return result;
}

int main() {
    lengths[0] = 0;
    lengths[1] = 1;

    lengths[n] = recurse(n);

    ll max_length = -1;
    ll ans = 0;

    for (ll i=0;i<=n;i++) {
        if(lengths[i] == -1) {
            recurse(i);
        }
    }

    for(ll i=0;i<=n;i++) {
        if(lengths[i] > max_length) {
            ans = i;
        }
        max_length = max(max_length, lengths[i]);
    }

    cout << "The maximum length of the Collatz sequence for numbers up to " << n << " is: " << max_length << "\n";
    cout << "The number producing this length is: " << ans << "\n";
    return 0;
}