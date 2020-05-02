/*
    Problem: https://www.hackerrank.com/challenges/kangaroo/problem

    Author: Bhushan Pagare

    Sample Input:
    0 3 4 2

    Sample Output:
    YES
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void kangaroo(int x1, int v1, int x2, int v2) {
    double time = 1.0 * (x2 - x1) / (v1 - v2);
    if (time < 0)
        cout << "NO\n";
    else if (time - (int)time == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    kangaroo(x1, v1, x2, v2);

    return 0;
}