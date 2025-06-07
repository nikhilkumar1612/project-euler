#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>

int main() {
    vi num;
    num.push_back(1);

    for (ll i=0; i<1000; i++) {
        ll carry = 0;
        for (ll j=0; j<num.size(); j++) {
            ll temp = num[j] * 2 + carry;
            carry = temp / 10;
            num[j] = temp % 10;
        }

        if(carry > 0) {
            num.push_back(carry);
        }
    }

    ll sum = 0;
    for(ll i=num.size()-1;i>=0;i--) {
        sum += num[i];
    }
    cout << "Sum of digits: " << sum << "\n";
}