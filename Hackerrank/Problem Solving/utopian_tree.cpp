/*
    Problem: https://www.hackerrank.com/challenges/utopian-tree/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    0
    1
    4

    Sample Output:
    1
    2
    7
*/

#include <bits/stdc++.h>
using namespace std;

void utopian_tree(int n) {
    int i = 0;
    int height = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2)
            height *= 2;
        else
            height += 1;
    }
    cout << height << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        utopian_tree(n);
    }

    return 0;
}