#include<bits/stdc++.h>
#define deb(x) cout << #x << " = " << x << "\n";
#define deb2(x,y)  cout << #x << " = " << x << ", "; cout << #y << " = " << y << "\n";
#define deb3(x,y,z) cout << #x << " = " << x << ", "; cout << #y << " = " << y << ", "; cout << #z << " = " << z << "\n";
#define deb4(x,y,z,r) cout << #x << " = " << x << ", "; cout << #y << " = " << y << ", "; cout << #z << " = " << z << ", ";cout << #r << " = " << r << "\n";
#define out(ans) cout<<ans<<"\n"
#define outs(ans) cout<<ans<<" "<<"\n"
using namespace std;
Tppp void dvpll(vector<pair<T1,T2> > v) { for(ll i=0;i<v.size();i++){deb(i);deb(v[i].F);deb(v[i].S);cout<<"\n";}}
void dpos(vll v,ll pos){ cout<<pos<<"="<<v[pos]<<"\n"; }
Tppp void dmap(map<T1,T2> m) {ll i=0;for(auto x:m) {deb(i);deb(x.F);deb(x.S);cout<<"\n";i++;}}
Tpp void dset(set<T> s) {for(auto x:s) {deb(x);cout<<"\n";}}
Tpp void dmset(multiset<T> s) {for(auto x:s) {deb(x);cout<<"\n";}}

Tpp void dpqueue(priority_queue<T> pq) {while(!pq.empty()){deb(pq.top());pq.pop();}    }
Tpp void dstack(stack<T> st) {while(!st.empty()) {deb(st.top());st.pop();}}
Tpp void dqueue(queue<T> q) {while(!q.empty()){ deb(q.front());q.pop(); }}

void dgraph(vector<ll> adj[],ll node){rep(i,0,node+1){deb(i);rep(j,0,adj[i].size()) {cout<<adj[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

Tpp void d1d(vector<T> v){for(ll i=0;i<v.size();i++){ cout<<v[i]<<" "; }cout<<"\n";}
Tpp void d2d(vector<vector<T> >&v,ll n,ll m) {cout<<"2d: "<<"\n";for(ll i=0;i<n;i++){for(ll j=0;j<m;j++){cout<<v[i][j]<<" ";}cout<<"\n";}}
Tpp void d3d(vector<vector<vector<T> > > &v,ll p,ll q,ll r){cout<<"3d: "<<"\n";for(ll i=0; i<p; i++){for(ll j=0; j<q; j++){for(ll k=0; k<r; k++){cout<<"v[i="<<i<<"][j="<<j<<"][k="<<k<<"]=";cout<<v[i][j][k]<<"\n";}}}}
ibt main()
{
    return 0;
}  
