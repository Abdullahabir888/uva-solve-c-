#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int ara[31];
    int a,b,c,sum,base,collpus,i;
    while (scanf("%d %d", &a, &b)==2)
    {

         if (a==0 && b==0) break;

        for(i=1; i<=a; i++)
            scanf("%d",&ara[i]);
        for(int i = 0; i < b; i++)
        {
        scanf("%d %d %d", &base, &collpus, &sum);
            ara[base] -= sum;
            ara[collpus] += sum;
}
 bool flag = true;
        for(int i = 1; i <= a; i++)
            if(ara[i]<0)
            {
            	flag = false;


            }


        if(flag) printf("S\n");
        else
            printf("N\n");


    }
    return 0;
}
