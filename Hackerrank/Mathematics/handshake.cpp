/*
    Problem: https://www.hackerrank.com/challenges/handshake/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    1
    2

    Sample Output:
    0
    1
*/

#include <bits/stdc++.h>
using namespace std;

int find_handshakes(int number_people) {
    return number_people * (number_people - 1) / 2;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int number_people;
    int handshakes;

    for (int i=0; i<n; ++i) {
        // Take input number of people in meeting
        cin >> number_people;
        // Find the solution
        handshakes = find_handshakes(number_people);
        // Give the output
        cout << handshakes << "\n";
    }

    return 0;
}