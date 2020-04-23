/*
    Problem: https://www.hackerrank.com/challenges/reverse-game/problem

    Author: Bhushan Pagare

    Sample Input:
    2
    3 1
    5 2

    Sample Output:
    2
    4
*/

#include <bits/stdc++.h>
using namespace std;

int find_index(int n, int k) {
    int i = 0, j = n-1;
    for (int s=0; s<n; ++s) {
        if (s % 2 == 0) {
            if (j == k)
                return s;
            j -= 1;
        } else {
            if (i == k)
                return s;
            i += 1;
        }
    }
    return -1;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n, k;
    int index;

    for (int i=0; i<t; ++i) {
        // Take input n and k
        cin >> n >> k;
        // Find the solution
        index = find_index(n, k);
        // Give the output
        cout << index << "\n";
    }

    return 0;
}