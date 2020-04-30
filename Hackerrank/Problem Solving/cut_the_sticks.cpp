/*
    Problem: https://www.hackerrank.com/challenges/cut-the-sticks/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6
    5 4 4 2 2 8

    Sample Output:
    6
    4
    2
    1
*/

#include <bits/stdc++.h>
using namespace std;

void cut_the_sticks(int n) {
    vector<int> sticks;
    int stick;
    for (int i = 0; i < n; ++i) {
        cin >> stick;
        sticks.push_back(stick);
    }
    sort(sticks.begin(), sticks.end());
    cout << sticks.size() << "\n";
    int current_stick, counter = sticks.size();
    for (int i = 0; i < n && counter > 1; ++i) {
        current_stick = sticks[i];
        while(sticks[i] == current_stick) {
            i++;
        }
        counter = sticks.size() - i;
        if (counter)
            cout << counter << "\n";
        i--;
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cut_the_sticks(n);

    return 0;
}