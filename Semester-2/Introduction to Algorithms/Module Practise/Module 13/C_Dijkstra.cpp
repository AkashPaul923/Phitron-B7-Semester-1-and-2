#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
ll par[100005];
ll n, e;
 
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dis[src] = 0;
    pq.push({dis[src], src});
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll parent_node = parent.second;
        ll parent_dist = parent.first;
        for (auto child : adj_list[parent_node])
        {
            ll child_node = child.first;
            ll child_dist = child.second;
            if (parent_dist + child_dist < dis[child_node])
            {
                dis[child_node] = parent_dist + child_dist;
                pq.push({dis[child_node], child_node});
                par[child_node] = parent_node;
            }
        }
    }
}
 
int main()
{
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        par[i] = -1;
    }
    dijkstra(1);
    vector<ll> ans;
    ll tmp = n;
    while (par[tmp] != -1)
    {
        ans.push_back(par[tmp]);
        tmp = par[tmp];
    }
    if (ans.empty())
    {
        cout << -1;
    }
    else
    {
        reverse(ans.begin(), ans.end());
        for (ll a : ans)
        {
            cout << a << " ";
        }
        cout << n;
    }
 
    return 0;
}