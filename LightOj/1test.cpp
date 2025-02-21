#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 2e4;
const ll INF = 1e18;

struct edge {
    ll u, v, w;
};

vector<edge> grph[sz];
ll weight[sz];

void short_path(ll node, ll w) {
    weight[node] = min(weight[node], w);

    for (auto x : grph[node]) {
        edge Edge = {node, x.v, x.w};  // Fixed incorrect struct initialization
        short_path(x.v, max(x.w, weight[node]));
    }
}

int main() {
    fastio;
    ll t, c = 0;
    cin >> t;

    while (t-- && ++c) {
        ll n, m, ans = 0, q;
        cin >> n >> m;

        // Corrected graph clearing (should be `n`, not `m`)
        for (int i = 0; i < n; i++) grph[i].clear();
        fill_n(weight, n, INF);  // Fixed incorrect initialization size

        for (ll i = 0; i < m; i++) {
            ll u, v, w;
            cin >> u >> v >> w;
            grph[u].push_back({u, v, w});
            grph[v].push_back({v, u, w});
        }

        cin >> q;
        // Removed unused `short_path(t, 0);`
        cout << "Case " << c << ": ";
    }

    return 0;
}
