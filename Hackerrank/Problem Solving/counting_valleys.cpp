/*
    Problem: https://www.hackerrank.com/challenges/counting-valleys/problem

    Author: Bhushan Pagare

    Sample Input:
    8
    UDDDUDUU

    Sample Output:
    1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void counting_valley(int n, string path) {
    bool count_this_valley = true;
    int coordinate = 0;
    int valleys = 0;
    for (int i = 0; i < n; ++i) {
        if (path[i] == 'U')
            coordinate += 1;
        if (path[i] == 'D')
            coordinate -= 1;
        if ((coordinate < 0) && count_this_valley) {
            count_this_valley = false;
            valleys += 1;
        } else if (coordinate == 0)
            count_this_valley = true;
    }
    cout << valleys << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;
    counting_valley(n, s);

    return 0;
}