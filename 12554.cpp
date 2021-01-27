#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,s,n,flag1=0,flag2=0;
    char song[17][20]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char name[101][101];
    while(scanf("%d",&n)==1);
    {
        flag1=0;
        flag2=0;
        for(i=0; i<n; i++){
            scanf("%s", &name[i]);
        }
        j=0;
        k=0;
        while (1)
            {
            printf("%s: %s\n",name[j],song[k]);
            if(k==15)
                {
                flag1=1;
            }
            if(j==n-1)
            {
            flag2=1;
            }
       if(flag1==1&&flag2==1&&k==15)
        {
        break;
       }

       j++;
       k++;
       if(j==n)
        {
        j=0;
       }
       if(k==16)
        {
        k=0;
       }

        }
    }

    return 0;
 }
