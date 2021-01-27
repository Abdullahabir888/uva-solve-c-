#include<bits/stdc++.h>

using namespace std;
char c[1000][1000];
void dfs(int x,int y,int a,int b){
    if(x<0||y<0||x==a||y==b)
        return;
    if(c[x][y]=='*')
        return;
    if(c[x][y]=='@')
       c[x][y]='*';
    dfs(x,y+1,a,b);
    dfs(x,y-1,a,b);
    dfs(x+1,y,a,b);
    dfs(x-1,y,a,b);
    dfs(x+1,y+1,a,b);
    dfs(x+1,y-1,a,b);
    dfs(x-1,y+1,a,b);
    dfs(x-1,y-1,a,b);
}

int main()
{
    int b,a,i,j;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
            return 0;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                cin>>c[i][j];
            }

        }
        int cnt=0;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(c[i][j]=='@'){
                    cnt++;
                    dfs(i,j,a,b);
                }
            }
        }
        cout<<cnt<<endl;
    }
}
