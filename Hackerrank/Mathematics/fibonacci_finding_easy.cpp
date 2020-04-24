/*
    Problem: https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem
    
    Author: Bhushan Pagare

    Sample Input:
    8  
    2 3 1  
    9 1 7  
    9 8 3  
    2 4 9  
    1 7 2  
    1 8 1  
    4 3 1  
    3 7 5

    Sample Output:
    3  
    85  
    25  
    178  
    8  
    8  
    3  
    44

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007

void copy(ll a[2][2], ll b[2][2]) {
    for(ll i=0;i<2;i++) {
        for(ll j=0;j<2;j++)
            b[i][j]=a[i][j];
    }
}

void matmult(ll m1[2][2], ll m2[2][2], ll m3[2][2]) {
    for (ll i = 0; i<2; i++) {
        for (ll j = 0; j<2; j++) {
            m3[i][j]=0;
            for (ll k = 0; k<2; k++) {
                m3[i][j] += (m1[i][k]%mod * m2[k][j]%mod)%mod;
                m3[i][j] %= mod;
            }
        }
    }
}

void power(ll mat[2][2], ll b, ll p, ll finres[2][2]) {
    ll res[2][2] = {{0}}, cc[2][2];
    res[0][0] = res[1][1] = 1;
    while (b>0) {
        copy(res, cc);
        if(b&1)
            matmult(mat, cc, res);
        copy(mat, cc);
        b >>= 1;
        matmult(cc, cc, mat);
    }
    copy(res, finres);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll a, b, n;
    ll fib;

    for (int i=0; i<t; ++i) {
        // Take input numbers
        cin >> a >> b >> n;
        // Find the solution
        ll matmult[2][2] = {{0, 1}, {1, 1}};
        ll finres[2][2];
        power(matmult, n-1, mod, finres);
        ll x = finres[1][0], y = finres[1][1];
        ll res = ((a*x) % mod + (b*y) % mod) % mod;
        // Show output
        cout << res << "\n";
    }

    return 0;
}