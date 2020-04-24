/*
    Problem: https://www.hackerrank.com/challenges/a-chocolate-fiesta/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4
    2 4 6 1
 
    Sample Output:
    7

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

ll power(ll a,ll b) {
    if (b == 0 || b == -1) {
        return 1;
    }
    ll ans = 1;
    while(b) {
        if(b&1)
            ans = (ans*a) % mod;
        a = (a*a) % mod;
        b = b >> 1;
    }
    return (ans % mod);
}

void find_games(int n) {
    vector<int> a;
    int element;
    int even_numbers = 0;
    int odd_numbers = 0;
    for (int i=0; i<n; ++i) {
        cin >> element;
        if (element % 2)
            odd_numbers += 1;
        else
            even_numbers += 1;
        a.push_back(element);
    }
    ll even = (power(2, even_numbers) - 1) % mod;
    ll odd = (power(2, odd_numbers - 1) - 1) % mod;
    ll total = ((even * odd) % mod + odd + even) % mod;
    cout << total << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    find_games(n);

    return 0;
}