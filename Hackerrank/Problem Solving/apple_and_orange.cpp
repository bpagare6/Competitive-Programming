/*
    Problem: https://www.hackerrank.com/challenges/apple-and-orange/problem

    Author: Bhushan Pagare

    Sample Input:
    7 11
    5 15
    3 2
    -2 2 1
    5 -6

    Sample Output:
    1
    1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_apples(int s, int t, int a, int b, int m, int n) {
    int fruit;
    ll apples = 0, oranges = 0;
    ll coordinate_fall = 0;
    for (int i = 0; i < m; ++i) {
        cin >> fruit;
        coordinate_fall = a + fruit;
        if (coordinate_fall >= s && coordinate_fall <= t)
            apples++;
    }
    for (int i = 0; i < n; ++i) {
        cin >> fruit;
        coordinate_fall = b + fruit;
        if (coordinate_fall >= s && coordinate_fall <= t)
            oranges++;
    }
    cout << apples << "\n" << oranges;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    find_apples(s, t, a, b, m, n);

    return 0;
}