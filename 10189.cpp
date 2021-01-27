#include<bits/stdc++.h>
#define file freopen("in.txt","rt",stdin)
using namespace std;
char arr[110][110];
int ans[110][110];
int main()
{
    int n,m,c=0;
    char ch;
    // file;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        if(c!=0)
            cout<<endl;
        c++;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>ch;
                arr[i][j]=ch;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                int cnt=0;
                if(arr[i][j]=='.')
                {
                    if(arr[i][j+1]=='*' && i>=1 && i<=n && j+1>=1 && j+1<=m)
                        cnt++;
                    if(arr[i-1][j+1]=='*'&& i-1>=1 && i-1<=n && j+1>=1 && j+1<=m)
                        cnt++;
                    if(arr[i-1][j]=='*'&& i-1>=1 && i-1<=n && j>=1 && j<=m)
                        cnt++;
                    if(arr[i-1][j-1]=='*'&& i-1>=1 && i-1<=n && j-1>=1 && j-1<=m)
                        cnt++;
                    if(arr[i][j-1]=='*'&& i>=1 && i<=n && j-1>=1 && j-1<=m)
                        cnt++;
                    if(arr[i+1][j-1]=='*'&& i+1>=1 && i+1<=n && j-1>=1 && j-1<=m)
                        cnt++;
                    if(arr[i+1][j]=='*'&& i+1>=1 && i+1<=n && j>=1 && j<=m)
                        cnt++;
                    if(arr[i+1][j+1]=='*'&& i+1>=1 && i+1<=n && j+1>=1 && j+1<=m)
                        cnt++;

                    ans[i][j]=cnt;
                }
            }

        }
        printf("Field #%d:\n",c);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(arr[i][j]=='*')
                {
                    printf("*");
                }
                else
                    cout<<ans[i][j];
            }

            cout<<endl;
        }
    }
    return 0;
}
