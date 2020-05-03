/*
    Problem: https://www.hackerrank.com/challenges/bigger-is-greater/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    ab
    bb
    hefg
    dhck
    dkhc

    Sample Output:
    ba
    no answer
    hegf
    dhkc
    hcdk
*/

#include <bits/stdc++.h>
using namespace std;

void next_bigger(string s) {
    bool val = next_permutation(s.begin(), s.end());
    if (val)
        cout << s << "\n";
    else
        cout << "no answer\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string s;
    for (int i = 0; i < t; ++i) {
        cin >> s;
        next_bigger(s);
    }

    return 0;
}