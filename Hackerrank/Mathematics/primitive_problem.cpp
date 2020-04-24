/*
    Problem: https://www.hackerrank.com/challenges/primitive-problem/problem
    
    Author: Bhushan Pagare

    Sample Input:
    7

    Sample Output:
    3 2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll power(ll a, ll b, ll mod){
    if(b == 0)
        return 1;
    ll temp = power(a,b>>1,mod)%mod;
    temp = (temp*temp)%mod;
    if(b&1)
        temp = temp*a%mod;
    return temp;
}

void find_primitives(ll n) {
    // 1. Find all unique prime factors of the n-1
    ll number = n-1 ; 
    vector<ll> fact;
    for(ll i = 2 ; i*i <= number ; i++){
        if( number%i == 0 )
            fact.push_back(i);
        while(number%i == 0)
            number /= i;
    }
    if(number > 2)
        fact.push_back(number);

    // 2. Find the smallest primitive root
    ll s_primitive;
    for(ll i = 2 ; i < n ; i++){
        bool flag = true;
        for(auto prime: fact){
            if(power(i, (n-1)/prime, n) == 1){
                flag = false;
                break;
            }
        }
        if(flag){ 
            s_primitive = i;
            break;
        }
    }
    cout << s_primitive << " ";

    // 3. Find the number of primitive roots
    n--;
    for(ll fa:fact)
        n = n / fa * (fa-1);
    cout << n << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    // Find the solution
    find_primitives(n);

    return 0;
}