#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     long long a,b,x,sum,i =0,n;
     double c;
     while (scanf("%lld",&a)==1 &&a!=0)
     {
         c=ceil((3+sqrt(9+(8.0)*a))/2.0);
         printf("Case %lld: %.0lf\n",++i,c);
     }
     return 0;

 }
