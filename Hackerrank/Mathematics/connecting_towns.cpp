/*
    Problem: https://www.hackerrank.com/challenges/connecting-towns/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    3
    1 3
    4
    2 2 2

    Sample Output:
    3
    8
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_paths(int number_towns) {
    ll paths = 1;
    int next_paths = 1;
    for(int i=1; i<number_towns; i++) {
        cin >> next_paths;
        paths *= next_paths;
        paths = paths % 1234567;
    }
    return paths;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int number_towns;
    ll paths;

    for (int i=0; i<n; ++i) {
        // Take input number of towns
        cin >> number_towns;
        // Find the solution
        paths = find_paths(number_towns);
        // Give the output
        cout << paths << "\n";
    }

    return 0;
}