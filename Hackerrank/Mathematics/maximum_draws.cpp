/*
    Problem: https://www.hackerrank.com/challenges/maximum-draws/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    1
    2

    Sample Output:
    2
    3
*/

#include <bits/stdc++.h>
using namespace std;

inline int find_maximum_draws(int socks_pairs) {
    return socks_pairs + 1;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int socks_pairs;
    int maximum_draws;

    for (int i=0; i<n; ++i) {
        // Take input pairs of socks available
        cin >> socks_pairs;
        // Find the solution
        maximum_draws = find_maximum_draws(socks_pairs);
        // Give the output
        cout << maximum_draws << "\n";
    }

    return 0;
}