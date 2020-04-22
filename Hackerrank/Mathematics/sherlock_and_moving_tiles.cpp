/*
    Problem: https://www.hackerrank.com/challenges/sherlock-and-moving-tiles/problem
    
    Author: Bhushan Pagare

    Sample Input:
    10 1 2
    2
    50
    100

    Sample Output:
    4.1421
    0.0000
*/

#include <bits/stdc++.h>
using namespace std;

#define ld long double

ld find_time(ld l, ld s1, ld s2, ld q) {
    // Set maximum precision limit
    cout << setprecision(numeric_limits<long double>::digits10 + 1);
    ld distance =  l*sqrt(2) - sqrt(2*q);
    ld speed = abs(s1 - s2);
    return  distance / speed;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ld l, s1, s2;
    int q;
    cin >> l >> s1 >> s2;
    cin >> q;
    ld query;
    ld time;

    for (int i=0; i<q; ++i) {
        // Take input query area
        cin >> query;
        // Find the solution
        time = find_time(l, s1, s2, query);
        // Give the output
        cout << time << "\n";
    }

    return 0;
}