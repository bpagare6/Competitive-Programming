/*
    Problem: https://www.hackerrank.com/challenges/harry-potter-and-the-floating-rocks/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    0 2 4 0
    2 2 5 5
    1 9 8 16

    Sample Output:
    1
    2
    6
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll find_integer_points(int px, int py, int qx, int qy) {
    if (px == qx)
        return abs(py - qy) - 1;
    if (py == qy)
        return abs(px - qx) - 1;
    return gcd(abs(px - qx), abs(py - qy)) - 1;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll px, py, qx, qy;
    ll integer_points;

    for (int i=0; i<n; ++i) {
        // Take input co-ordinates
        cin >> px >> py >> qx >> qy;
        // Find the solution
        integer_points = find_integer_points(px, py, qx, qy);
        // Give the output
        cout << integer_points << "\n";
    }

    return 0;
}