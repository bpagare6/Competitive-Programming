/*
    Problem: https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    2
    1 1
    1 1
    2
    0 2
    1 1

    Sample Output:
    Possible
    Impossible
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void organizing_containers_of_balls(int n) {
    vector<int> containers(n, 0);
    vector<int> balls(n, 0);
    ll ball;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> ball;
            containers[i] += ball;
            balls[j] += ball;
        }
    }
    sort(containers.begin(), containers.end());
    sort(balls.begin(), balls.end());
    if (containers == balls) {
        cout << "Possible\n";
    } else {
        cout << "Impossible\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    int n;
    for (int i = 0; i < q; ++i) {
        cin >> n;
        organizing_containers_of_balls(n);
    }

    return 0;
}