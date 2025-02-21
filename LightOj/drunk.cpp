#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

map<string, bool> vst, pth;
map<string, vector<string>> grph;
ll flg=1;
void cycleFinding(string node){
    //cout << node << endl;
    if(pth[node]) flg=0;
    if(vst[node]) return;
    
    pth[node]= 1;
    vst[node] =1;

    for(auto x: grph[node]){
        cycleFinding(x);
        pth[x]=0;
    }
    
}
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    grph.clear();
    vst.clear();
    pth.clear();
    flg = 1;
    ll n, ans=0;
    cin >> n;
    for(ll i=0;i<n;i++) {
        string a, b;
        cin >> a>> b;
        grph[a].push_back(b);
    }
    for(auto x: grph){
        if(vst[x.first] == 0)
        cycleFinding(x.first);
        pth[x.first] =0;
    }
    cout << "Case " << c<<": ";
    if(flg) cout <<"Yes" << endl;
    else cout <<"No" << endl;
    
    }
    return 0;
}