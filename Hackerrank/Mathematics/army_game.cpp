/*
    Problem: https://www.hackerrank.com/challenges/game-with-cells/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2 2

    Sample Output:
    1
*/

#include <bits/stdc++.h>
using namespace std;

int find_minimum_packages(int n, int m) {
    return ceil(n / 2.0) * ceil(m / 2.0);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int min_packages;

    // Take input base dimensions
    cin >> n >> m;
    // Find the solution
    min_packages = find_minimum_packages(n, m);
    // Give the output
    cout << min_packages << "\n";

    return 0;
}