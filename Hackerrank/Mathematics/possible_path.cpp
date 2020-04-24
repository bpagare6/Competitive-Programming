/*
    Problem: https://www.hackerrank.com/challenges/possible-path/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    1 1 2 3
    2 1 2 3
    3 3 1 1

    Sample Output:
    YES
    YES
    NO
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

string find_ispossible(ll px, ll py, ll qx, ll qy) {
    ll gcd_starting = gcd(px, py);
    ll gcd_ending = gcd(qx, qy);
    if (gcd_starting == gcd_ending)
        return "YES";
    else
        return "NO";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll px, py, qx, qy;
    string ispossible;

    for (int i=0; i<n; ++i) {
        // Take input co-ordinates
        cin >> px >> py >> qx >> qy;
        // Find the solution
        ispossible = find_ispossible(px, py, qx, qy);
        // Give the output
        cout << ispossible << "\n";
    }

    return 0;
}