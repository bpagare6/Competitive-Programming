/*
    Problem: https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
    
    Author: Bhushan Pagare

    Sample Input:
    8 2
    0 0 1 0 0 1 1 0

    Sample Output:
    92
*/

#include <bits/stdc++.h>
using namespace std;

void jumping_on_clouds(int n, int k) {
    vector<int> clouds;
    int c;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        clouds.push_back(c);
    }
    bool complete = false;
    int position = 0;
    int energy = 100;
    while (! complete) {
        energy -= 1;
        position = (position + k) % n;
        if (clouds[position] == 1)
            energy -= 2;
        if (position == 0)
            complete = true;
    }
    cout << energy << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    jumping_on_clouds(n, k);

    return 0;
}