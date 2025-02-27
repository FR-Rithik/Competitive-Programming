#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll a, b, cou=0;
    cin >> a>> b;
    cou = b-a+2;
    for(ll i=a;i<=b;i++){
        for(ll j= i+1;i<=b;i++){
            if(gcd(i,j) == 1) cou++;
        }
    }

    cout << cou << endl;
 
    return 0;
}