/*
    Problem: https://www.hackerrank.com/challenges/rectangular-game/problem

    Author: Bhushan Pagare

    Sample Input:
    3
    2 3
    3 7
    4 1

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_occurences_x(int n, vector<pair<int, int>> points) {
    ll min_x = INT_MAX, min_y = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (points[i].first < min_x)
            min_x = points[i].first;
        if (points[i].second < min_y)
            min_y = points[i].second;
    }
    ll occurences_x = min_x * min_y;
    cout << occurences_x << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a, b;
    vector<pair<int, int>> points;

    for (int i=0; i<n; ++i) {
        // Take input coordinates
        cin >> a >> b;
        points.push_back(make_pair(a, b));
    }
    // Find the solution
    find_occurences_x(n, points);

    return 0;
}