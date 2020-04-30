/*
    Problem: https://www.hackerrank.com/challenges/library-fine/problem
    
    Author: Bhushan Pagare

    Sample Input:
    9 6 2015
    6 6 2015

    Sample Output:
    45
*/

#include <bits/stdc++.h>
using namespace std;

void library_fine() {
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if (y1 > y2)
        cout << "10000\n";
    else if (y1 == y2 && m1 > m2)
        cout << (m1 - m2) * 500 << "\n";
    else if (y1 == y2 && m1 == m2 && d1 > d2)
        cout << (d1 - d2) * 15 << "\n";
    else
        cout << "0\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    library_fine();

    return 0;
}