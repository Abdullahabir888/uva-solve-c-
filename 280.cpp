#include<bits/stdc++.h>

using namespace std;

queue<int> q;
void add(int x,int y,vector<int> *adj)
{
    adj[x].push_back(y);
}

bool bfs(int x,int y,vector<int> *adj,bool *visited,int *prev)
{
    while(!q.empty()) q.pop();
    q.push(x);
    visited[x] = true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i];
            if(u==v&&v==y) return true;
            if(visited[v]&&y==v) return true;
            if(!visited[v]){
                visited[v] = true;
                prev[v] = u;
                if(v==y){
                    return true;
                }
                q.push(v);
            }
        }
    }
    return false;
}

int main()
{
    int n,i,x,y,u,v;
    while(1){
        cin>>n;
        if(n==0) return 0;
        vector<int> adj[1000];
        while(1){
            cin>>x;
            if(x==0) break;
            u=x;
            while(1){
                cin>>y;
                v=y;
                if(y==0) break;
                add(u,v,adj);
            }
        }

        cin>>x;
        while(x--){
            cin>>y;
            int cnt=0,j=0;
            int a[1000]={0};
            for(i=1;i<=n;i++){
            bool visited[1000]={false};
            int prev[1000]={-1};
                if(!bfs(y,i,adj,visited,prev)){
                   cnt++;
                   a[j]=i;
                   j++;
                }
            }
            cout<<cnt;
            for(i=0;i<cnt;i++)
                cout<<" "<<a[i];
            cout<<endl;
        }
    }
    return 0;
}
