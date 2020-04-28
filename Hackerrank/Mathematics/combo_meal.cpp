/*
    Problem: https://www.hackerrank.com/challenges/combo-meal/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    275 214 420
    6 9 11
    199 199 255

    Sample Output:
    69
    4
    143

*/

#include <bits/stdc++.h>
using namespace std;

int find_profit(int burger, int soda, int combo) {
    return burger + soda - combo;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int b, s, c;
    int fixed_profit;

    for (int i=0; i<t; ++i) {
        // Take input numbers
        cin >> b >> s >> c;
        // Find the solution
        fixed_profit = find_profit(b, s, c);
        // Show output
        cout << fixed_profit << "\n";
    }

    return 0;
}