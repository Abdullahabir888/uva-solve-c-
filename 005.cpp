#include<bits/stdc++.h>
using namespace std;
char ch[111][111];
int main()
{
    freopen("output.txt","w", stdout);
    int n,m,a=1,b,i,j,sum,x,y;
    while(scanf("%d %d",&n,&m)==2)
    {
        getchar();
        if(n==0&&m==0)break;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }
       if(a>1)printf("\n");
       printf("Field #%d:\n",a);
       a++;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                sum = 0;
                x = i;
                y = j;
                if(ch[i][j]=='*')
                {
                    printf("*");
                    continue;
                }
                if(x-1>=1&&y-1>=1&&ch[x-1][y-1]=='*')
                {
                    sum++;
                }
                if(x-1>=1&&ch[x-1][y]=='*')
                {
                    sum++;
                }
                if(x-1>=1&&y+1<=m&&ch[x-1][y+1]=='*')
                {
                    sum++;
                }
                if(y-1>=1&&ch[x][y-1]=='*')
                {
                    sum++;
                }
                if(y+1<=m&&ch[x][y+1]=='*')
                {
                    sum++;
                }
                if(x+1<=n&&y-1>=1&&ch[x+1][y-1]=='*')
                {
                    sum++;
                }
                if(x+1<=n&&ch[x+1][y]=='*')
                {
                    sum++;
                }
                if(x+1<=n&&y+1<=m&&ch[x+1][y+1]=='*')
                {
                    sum++;
                }
                printf("%d", sum);

            }
            printf("\n");
        }
    }
    return 0;

}
