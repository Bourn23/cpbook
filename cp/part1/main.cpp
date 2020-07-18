#include <bits/stdc++>
// #include <iostream>

using namespace std;
// HELP
// IMPORTANT
// NOTE


int main() {
    //normal
    int a, b;
    string x;
    cin >> a >> b >> x;
    cout << "HEllo " << a << " this is " << b << " talking to " << x << '\n';


    //faster reading
    int e, g;
    scanf('%d %d', &a, &b);
    printf('%d * %d', a, b);

    //abit faster!
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // get line
    string x;
    getline(cin, x);

    // unknown length input
    while (cin >> x) {
        // do sth.
    };

    // read and write from file
    freopen('filename.txt', 'mode', stdin)
    freopen('output.txt', 'w', stdout)

    // ***VARIABLES***
    long long p = 12347892731792LL;
    //IMPORTANT: calculations must be done using long long too!

    int a = 12353456;
    long long b = a * a; // produces wrong result
    // correct:
    // long long a = ...
    // long long b  = (long long) a * a

    // modulo
    // (a+b) mod m == (a mod m + b mod m) mod m

    printf("%.20f\n", a);
    

    // ***SHORTER CODES***
    long long a;
    // vs.
    typedef long long ll;
    ll a;

    typedef pair<int, int> pi;


    // macros NOTE DEFINE HAS NO ;
    #define SN long_function_name
    #define short longer_name
    //what about loops?
    #define REP(i, 0, a) for (int i = 0; i < a; i ++)
    #define REP(p, 1, d) for (int p = 1; p < d; p ++)

    #define SQ(x) x * x
    // or ?
    #define SQ(x) (x) * (x)

    

}