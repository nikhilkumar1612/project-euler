#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define vi      vector<ll>

int main() {
    ll n = 20;
    vector<vector<ll> > grid(n + 1, vector<ll>(n + 1, 0));
    for(ll i=0; i<=n; i++) {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }

    grid[0][0] = 0;

    for(ll i=1; i<=n; i++) {
        for(ll j=1; j<=n; j++) {
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }

    cout << "Number of unique paths to (" << n << ", " << n << "): " << grid[n][n] << "\n";
    return 0;
}