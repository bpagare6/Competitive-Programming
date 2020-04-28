/*
    Problem: https://www.hackerrank.com/challenges/xrange-and-pizza/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5 5
    1 1
    1 3
    2 2
    2 2
    1 4

    Sample Output:
    1 2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_cook(int n, int m, vector<pair<int, int>> cook_operations) {
    int type = 0, a = 0;
    for (int i=0; i<m; ++i) {
        type ^= cook_operations[i].first - 1;
        a += (2 * type - 1) * cook_operations[i].second + n;
        a %= n;
    }
    cout << type + 1 << " " << a << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> cook_operations;

    int type, k;
    for (int i=0; i<m; ++i) {
        // Take input operations
        cin >> type >> k;
        cook_operations.push_back(make_pair(type, k));
    }
    // Find new cook needed
    find_cook(n, m, cook_operations);

    return 0;
}