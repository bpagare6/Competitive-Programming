/*
    Problem: https://www.hackerrank.com/challenges/staircase/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6

    Sample Output:
         #
        ##
       ###
      ####
     #####
    ######
*/

#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    int i, j, k;
    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            cout << " ";
        }
        for (k = j; k >= 0; --k) {
            cout << "#";    
        }
        cout << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    staircase(n);

    return 0;
}