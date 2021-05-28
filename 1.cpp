#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>
#define pii				pair<ll,ll>
#define mod 			1000000007
#define inf 			1e18
#define ff 				first
#define ss 				second
#define pb				push_back
#define mpii 			map<ll,ll>
#define ps(x,y) 		fixed<<setprecision(y)<<x
#define w(t)			cin>>t; while(t--)


void init() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main() {
	init();
	ll n;
	cin >> n;
	ll k = (n - 1) / 3; // number of 3 multiples below n.
	ll l = (n - 1) / 5; // number of 5 multiples below n.
	ll m = (n - 1) / 15; // number of 15 multiples below n.

	ll sum3 = (k * (3 + (k * 3))) / 2;
	ll sum5 = (l * (5 + (l * 5))) / 2;
	ll sum15 = (m * (15 + (m * 15))) / 2;

	cout << (sum3 + sum5 - sum15);

}