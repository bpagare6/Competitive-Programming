/*
    Problem: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    1 2 3
    1 3 2

    Sample Output:
    Cat B
    Mouse C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void cats_and_mouse(int c1, int c2, int m) {
    if (abs(c2 - m) > abs(c1 - m))
        cout << "Cat A\n";
    else if (abs(c1 - m) > abs(c2 - m))
        cout << "Cat B\n";
    else
        cout << "Mouse C\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    int c1, c2, m;
    for (int i = 0; i < q; ++i) {
        cin >> c1 >> c2 >> m;
        cats_and_mouse(c1, c2, m);
    }

    return 0;
}