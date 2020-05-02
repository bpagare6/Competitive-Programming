/*
    Problem: https://www.hackerrank.com/challenges/drawing-book/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    4

    Sample Output:
    0
*/

#include <bits/stdc++.h>
using namespace std;

void drawing_book(int n, int p) {
    cout << min(p / 2, (n - p + !(n % 2)) / 2);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p;
    cin >> n >> p;
    drawing_book(n, p);

    return 0;
}