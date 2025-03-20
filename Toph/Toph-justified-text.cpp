//AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    string st;
    vector<string> a, ans;
    while(cin >> st){
        a.push_back(st);
    }
    for(ll i=0;i<a.size();){

        string temp;
        ll k=0;
        if(a[i].size() >8){
            cout << "#bigword";
            i++;
        }
        else{
         k= a[i].size() + 1;
        cout  << a[i++];
        while(i<a.size() && k + a[i].size() <= 8){
            cout<<" "<< a[i] ;
            k+= a[i].size() + 1;
            i++;
        }   
        }
        
        if(i < a.size())
        cout << endl;

    }
    
    }
    return 0;
}