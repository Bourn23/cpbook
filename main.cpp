#include "./stdc++.h"

using namespace std;

typedef long long ll;


int main() {
    ll x;
    freopen("input.txt", "r", stdin);
    cin >> x;
    #define wx(x) while( x != 1 ) {if (x % 2 == 0) x /= 2; else x *= x; x += 1; cout << x;};
    wx(x);
    return 0;
}