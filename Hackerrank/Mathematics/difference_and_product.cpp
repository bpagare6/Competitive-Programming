/*
    Problem: https://www.hackerrank.com/challenges/difference-and-product/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    1 2
    0 4
    -1 1

    Sample Output:
    4
    2
    0

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

ll find_num_pairs(ll diff, ll product) {
    if (diff < 0) {
        return 0;
    }
    if(1LL * diff * diff >= -4LL * product) {
        ull delta = 1ULL * diff * diff + 4ULL * product;
        ll t = sqrt(delta);
        if(1ULL * t * t != delta)
            return 0;
        else {
            map<pair<ll, ll>, ll> m;
            m[make_pair(-diff + t, -diff - t)]++;
            m[make_pair(-diff - t, -diff + t)]++;
            m[make_pair( diff + t,  diff - t)]++;
            m[make_pair( diff - t,  diff + t)]++;
            return m.size();
        }
    }
    // Following code is inefficient
    // ll num_pairs = 0;
    // for(ll i = (ll)sqrt(abs(product)); i >= 1; i--) {
    //     if(product % i == 0 && abs(product/i - i) == diff) {
    //         num_pairs = (abs(product/i) == i ? 2 : 4);
    //         break;
    //     }
    // }
    // return num_pairs;
    return 0;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll diff, product;
    ll num_pairs;

    for (int i=0; i<t; ++i) {
        // Take input numbers
        cin >> diff >> product;
        // Find the solution
        num_pairs = find_num_pairs(diff, product);
        // Show output
        cout << num_pairs << "\n";
    }

    return 0;
}