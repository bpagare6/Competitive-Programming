/*
    Problem: https://www.hackerrank.com/challenges/points-on-a-line/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    0 1
    0 2
    0 3
    0 4
    0 5

    Sample Output:
    YES

*/

#include <bits/stdc++.h>
using namespace std;

void check_on_line(int n, vector<pair<int, int>> points) {
    if (n <= 1)
        cout << "YES\n";
    else {
        bool is_on_line = true;
        bool check_x = NULL;
        bool check_y = NULL;
        int x1 = points[0].first, y1 = points[0].second;
        int x2, y2;
        for(int i = 1; i < n; ++i) {
            x2 = points[i].first;
            y2 = points[i].second;
            if (check_x != NULL || check_y != NULL) {
                if (check_x)
                    if (x2 != x1) {
                        is_on_line = false;
                        check_x = false;
                        break;
                    }
                if (check_y)
                    if (y2 != y1) {
                        is_on_line = false;
                        check_y = false;
                        break;
                    }
            } else {
                if (x2 == x1)
                    check_x = true;
                if (y2 == y1)
                    check_y = true;
            }
        }
        if (is_on_line && (check_x || check_y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int x, y;
    vector<pair<int, int>> points;

    for (int i=0; i<t; ++i) {
        // Take input coordinates
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }
    // Find the solution
    check_on_line(t, points);

    return 0;
}