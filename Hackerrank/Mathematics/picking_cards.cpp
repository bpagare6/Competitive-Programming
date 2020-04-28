/*
    Problem: https://www.hackerrank.com/challenges/picking-cards/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3  
    3  
    0 0 0  
    3  
    0 0 1  
    3  
    0 3 3

    Sample Output:
    6
    4
    0
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

ll find_ways_to_pick(int n) {
    vector<int> input_list(5000001, 0);
    int element;
    for(int i=0; i<n; ++i) {
        cin >> element;
        input_list[element]++;
    }
    ll product = 1;
    ll sum = 0;
    for(int i=0;i<n;i++) {
       sum = (sum + input_list[i]) % mod;
       product = ((product % mod) * (sum % mod)) % mod;
       sum--;
    }
    return product % mod;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    ll ways_to_pick;

    for (int i=0; i<t; ++i) {
        // Take input pair
        cin >> n;
        // Find the solution
        ways_to_pick = find_ways_to_pick(n);
        // Print solution
        cout << ways_to_pick << "\n";
    }

    return 0;
}