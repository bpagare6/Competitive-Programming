/*
    Problem: https://www.hackerrank.com/challenges/append-and-delete/problem
    
    Author: Bhushan Pagare

    Sample Input:
    hackerhappy
    hackerrank
    9

    Sample Output:
    Yes
*/

#include <bits/stdc++.h>
using namespace std;

void append_and_delete(string s1, string s2, int operations) {
    int length = min(s1.size(), s2.size());
    int i;
    for (i = 0; i < length; ++i) {
        if (s1[i] != s2[i])
            break;
    }
    int total_size = s1.size() + s2.size();
    if ((total_size - (2 * i)) > operations)
        cout << "No\n";
    else if ((total_size - (2 * i)) % 2 == operations % 2)
        cout << "Yes\n";
    else if ((total_size - operations) < 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    int operations;
    cin >> s1 >> s2;
    cin >> operations;

    append_and_delete(s1, s2, operations);

    return 0;
}