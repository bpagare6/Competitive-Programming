/*
    Problem: https://www.hackerrank.com/challenges/constructing-a-number/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    1
    9
    3
    40 50 90
    2
    1 4

    Sample Output:
    Yes
    Yes
    No
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_sum_digits(ll number) {
    ll sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void construct_number() {
    int n;
    cin >> n;
    ll a;
    ll sum = 0;
    for (int i=0; i<n; ++i) {
        cin >> a;
        sum += find_sum_digits(a);
    }
    if (sum % 3 == 0)
        cout << "Yes\n";
    else
        cout << "No\n"; 
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i=0; i<t; ++i) {
        // Find the solution
        construct_number();
    }

    return 0;
}