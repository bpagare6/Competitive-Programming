/*
    Problem: https://www.hackerrank.com/challenges/eulers-criterion/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    5 7
    4 7

    Sample Output:
    NO
    YES
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll power(ll a,ll b,ll m) {
    ll ans=1;
    a = a % m;
    while (b) {
        if (b&1)
            ans = (ans*a)%m;
        a = (a*a) % m;
        b = b>>1;
    }
    return (ans % m);
}

void check_eulers_criterion(ll a, ll m) {
    if (a == 0) {
        cout << "YES\n";
        return;
    }
    if(power(a, (m-1)/2, m)==1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll m, a;

    for (int i=0; i<t; ++i) {
        // Take input pair
        cin >> a >> m;
        // Find the solution
        check_eulers_criterion(a, m);
    }

    return 0;
}