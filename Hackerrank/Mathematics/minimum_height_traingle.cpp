/*
    Problem: https://www.hackerrank.com/challenges/lowest-triangle/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2 2

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

int find_min_height(int area, int base) {
    return ceil(2.0 * area / base);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int area, base;
    int min_height;

    // Take input base and area
    cin >> base >> area;
    // Find the solution
    min_height = find_min_height(area, base);
    // Give the output
    cout << min_height << "\n";

    return 0;
}