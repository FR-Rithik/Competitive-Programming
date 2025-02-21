#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

const int MAX = 1e6; 

vector<int> divisor[MAX + 1]; 

void sieve() 
{ 
	for (int i = 1; i <= MAX; ++i) { 
		for (int j = i; j <= MAX; j += i) 
			divisor[j].push_back(i); 
	} 
}

int main()
{
   ll t;
   cin >> t;
   sieve();
while(t--){
    int n;
    cin >> n;
    string a;
    cin >> a;
    ll ans[n+1]={0};
    ll ds[n+1]={0}, ks[n+1] = {0}, checker[n+1];
    memset( checker, -1, sizeof(checker));
    

    for(ll i=0;i<n;i++){
        if(a[i] == 'D') ds[i+1]++;
        else ks[i+1]++;
        ds[i+1]+= ds[i];
        ks[i+1]+= ks[i];
    }
    for(ll i=1;i<=n;i++){
        //cout << ds[i] <<" " << ks[i]<< endl;
        for(auto x: divisor[i]){
            ll f=0;
            if(checker[x] && (ds[x]*(ks[i] - ks[i-x]) == (ds[i]-ds[i-x])*ks[x])){
                ans[i] = i/x;
                break;
            }
            else checker[x] = 0;
        }
    }

    for(ll i=1;i<=n;i++) cout << ans[i] << " ";
    cout << endl;
    
    }
    return 0;
}