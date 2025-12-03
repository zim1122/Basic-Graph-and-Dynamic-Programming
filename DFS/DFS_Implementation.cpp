#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define testcase int tt;cin>>tt;for(int tc=1;tc<=tt;tc++)
#define endl '\n' 
#define N 100005
vector<int>adj[N];
int visited[N];
void dfs(int u){
    cout<<"Visiting Node"<<" "<<u<<endl;
    visited[u]=1;
    for(int v:adj[u]){
        if(visited[v]) continue;
        dfs(v);
    }
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++){
    int u,v; cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
   }
   dfs(1);
 return 0;
}
