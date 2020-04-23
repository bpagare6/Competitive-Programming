/*
    Problem: https://www.hackerrank.com/challenges/most-distant/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4
    -1 0
    1 0
    0 1
    0 -1

    Sample Output:
    2.00000
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

ld find_max_distance(ll n) {
    ll x, y;
    cin >> x >> y;
    ll min_x = x, min_y = y, max_x = x, max_y = y;
    for(ll i=0; i<n-1; ++i) {
        cin >> x >> y;
        if (x < min_x)
            min_x = x;
        else if (x > max_x)
            max_x = x;
        else if (y < min_y)
            min_y = y;
        else if (y > max_y)
            max_y = y;
    }
    ld max_dist1, max_dist2, max_dist3;
    ld max_distance = 0.0;
    max_dist1 = abs(max_y - min_y);
    max_dist2 = abs(max_x - min_x);
    max_dist3 = sqrt(pow(max(abs(max_x), abs(min_x)), 2) + pow(max(abs(max_y), abs(min_y)), 2));
    return max({max_dist1, max_dist2, max_dist3});
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ld max_distance;

    cout << setprecision(20);

    // Find the solution
    max_distance = find_max_distance(n);
    // Give the output
    cout << max_distance << "\n";

    return 0;
}