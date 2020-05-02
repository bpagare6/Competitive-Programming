/*
    Problem: https://www.hackerrank.com/challenges/day-of-the-programmer/problem

    Author: Bhushan Pagare

    Sample Input:
    2017

    Sample Output:
    13.09.2017
*/

#include <bits/stdc++.h>
using namespace std;

void find_day_of_programmer(int yyyy) {
    if (yyyy > 1918) {
        if ((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 400 == 0)
            cout << "12.09." << yyyy << "\n";
        else
            cout << "13.09." << yyyy << "\n";
    } else if (yyyy < 1918) {
        if (yyyy % 4 == 0 )
            cout << "12.09." << yyyy << "\n";
        else
            cout << "13.09." << yyyy << "\n";
    } else {
        cout << "26.09.1918\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int yyyy;
    cin >> yyyy;
    find_day_of_programmer(yyyy);

    return 0;
}