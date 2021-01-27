#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double r,a,b;
   while(scanf("%lf%lf",&r,&a)==2)
    {
        b=((r*r*a)/2)*sin(2*pi/a);
        printf("%.3lf\n",b);
    }

    return 0;

}
