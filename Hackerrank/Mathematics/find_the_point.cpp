/*
    Problem: https://www.hackerrank.com/challenges/find-point/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    0 0 1 1
    1 1 2 2

    Sample Output:
    2 2
    3 3
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> find_reflection(int px, int py, int qx, int qy) {
    vector<int> r(2, 0);
    r[0] = 2*qx - px;
    r[1] = 2*qy - py;
    return r;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int px, py, qx, qy;
    vector<int> r;

    for (int i=0; i<n; ++i) {
        // Take input co-ordinates
        cin >> px >> py >> qx >> qy;
        // Find the solution
        r = find_reflection(px, py, qx, qy);
        // Give the output
        cout << r[0] << " " << r[1] << "\n";
    }

    return 0;
}