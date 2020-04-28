/*
    Problem: https://www.hackerrank.com/challenges/sherlock-and-planes/problem
    
    Author: Bhushan Pagare

    Sample Input:
    1
    1 2 0
    2 3 0
    4 0 0
    0 0 0

    Sample Output:
    YES
*/

#include <bits/stdc++.h>
using namespace std;

void check_coplanar(vector<vector<int>> points) {
    int a, b, c, d, a1, a2, b1, b2, c1, c2;
    a1 = points[1][0] - points[0][0];
    b1 = points[1][1] - points[0][1];
    c1 = points[1][2] - points[0][2];
    a2 = points[2][0] - points[0][0];
    b2 = points[2][1] - points[0][1];
    c2 = points[2][2] - points[0][2];
    a = b1 * c2 - b2 * c1;
    b = a2 * c1 - a1 * c2;
    c = a1 * b2 - a2 * b1;
    d = - a * points[0][0] - b * points[0][1] - c * points[0][2];

    if (a * points[3][0] + b * points[3][1] + c * points[3][2] + d == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i=0; i<t; ++i) {
        // Take input coordinates for 4 points each
        vector<vector<int>> points;
        int x, y, z;
        for (int j=0; j<4; ++j) {
            cin >> x >> y >> z;
            points.push_back({x, y, z});
        }
        check_coplanar(points);
    }

    return 0;
}