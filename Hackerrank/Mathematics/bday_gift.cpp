/*
    Problem: https://www.hackerrank.com/challenges/bday-gift/problem

    Author: Bhushan Pagare

    Sample Input:
    3
    1
    2
    2

    Sample Output:
    2.0
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_expectation(int n, vector<ll> balls) {
    long double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += balls[i];
    }
    cout << fixed << setprecision(1) << sum / 2.0 << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll ball;
    vector<ll> balls;

    for (int i=0; i<n; ++i) {
        // Take input coordinates
        cin >> ball;
        balls.push_back(ball);
    }
    // Find the solution
    find_expectation(n, balls);

    return 0;
}