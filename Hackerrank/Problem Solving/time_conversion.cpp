/*
    Problem: https://www.hackerrank.com/challenges/time-conversion/problem
    
    Author: Bhushan Pagare

    Sample Input:
    07:05:45PM

    Sample Output:
    19:05:45
*/

#include <bits/stdc++.h>
using namespace std;

void time_conversion(string time) {
    string military_time;
    int hours, minutes, seconds;
    string am_pm = time.substr(8, 2);
    if (am_pm[0] == 'A') {
        hours = stoi(time.substr(0, 1)) * 10 + stoi(time.substr(1, 1));
        if (hours == 12)
            cout << "00" << time.substr(2, 6) << "\n";
        else
            cout << time.substr(0, 8) << "\n";
    } else {
        hours = stoi(time.substr(0, 1)) * 10 + stoi(time.substr(1, 1));
        if (hours < 12)
            hours = hours + 12;
        cout << hours << time.substr(2, 6) << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string time;
    cin >> time;
    time_conversion(time);

    return 0;
}