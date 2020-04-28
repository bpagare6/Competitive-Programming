/*
    Problem: https://www.hackerrank.com/challenges/points-on-rectangle/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    3
    0 0
    0 1
    1 0
    4
    0 0
    0 2
    2 0
    1 1

    Sample Output:
    YES
    NO

*/

#include <bits/stdc++.h>
using namespace std;

void check_on_rectangle(int n, vector<pair<int, int>> points) {
    int xmin = 100000, ymin = 100000, xmax = -100000, ymax = -100000;

    for(int i = 0; i < n; i++) {
        if (xmin > points[i].first)
            xmin = points[i].first;
        if (xmax < points[i].first)
            xmax = points[i].first;
        if (ymin > points[i].second)
            ymin = points[i].second;
        if (ymax < points[i].second)
            ymax = points[i].second;
    }

    int count = 0;
    for (int j = 0; j < n; j++) {
        if (points[j].first > xmin && points[j].first < xmax
                && points[j].second > ymin && points[j].second < ymax) {
            count++;
        }
    }

    if (count > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    int n;

    for (int i=0; i<q; ++i) {
        cin >> n;
        vector<pair<int, int>> points;
        int x, y;
        // Take input coordinates
        for (int j=0; j<n; ++j) {
            cin >> x >> y;
            points.push_back(make_pair(x, y));
        }
        // Check all points are corners of rectangle
        check_on_rectangle(n, points);
    }

    return 0;
}