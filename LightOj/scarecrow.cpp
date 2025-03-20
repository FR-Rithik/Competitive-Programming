//AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t, c=1;
   cin >> t;
while(t--){
    ll cou=0, n;
    stack<ll> st;
    string a;
    cin >> n;
    cin >> a;
    
    
    for(auto x: a){
        if(x == '.') st.push(x);
        else if(st.size()) st.push(x);

        if(st.size() == 3){
            cou++;
            st = stack<ll>();
        }
    }
    if(st.size()) cou++;
    cout << "Case " << c++<<": ";
    cout << cou << endl;
    
    }
    return 0;
}