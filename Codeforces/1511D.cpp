//not AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, k;
    cin >> n>> k;
    ll crnt[26]={0};
    ll i=0, present=0;
    while(i< n){
        if(crnt[present] == k){
            if(present == k-1){
                present = 0;
                for(ll j=0;j<k;j++) crnt[j] = 0;
            }
            else{
                present++;
            }
            continue;
        }
        cout << (char)(present + 'a');
        present = crnt[present]++;

        i++;
        
    } 
    
    }
    return 0;
}