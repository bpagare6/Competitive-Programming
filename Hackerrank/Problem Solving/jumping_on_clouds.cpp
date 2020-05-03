/*
    Problem: https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
    
    Author: Bhushan Pagare

    Sample Input:
    7
    0 0 1 0 0 1 0

    Sample Output:
    4
*/

#include <bits/stdc++.h>
using namespace std;

void jumping_on_clouds(int n) {
    vector<int> clouds;
    int c;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        clouds.push_back(c);
    }
    int i = 0;
    int count_moves = 0;
    while (i != n-1) {
        if (i <= n-3 && !clouds[i + 2])
            i += 2;
        else
            i += 1;
        count_moves += 1;
    }
    cout << count_moves << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    jumping_on_clouds(n);

    return 0;
}