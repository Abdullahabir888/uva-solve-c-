#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t,test=1,x,y,z;
    scanf("%ld",&t);
    while (t--)
    {
        scanf("%ld%ld%ld",&x,&y,&z);
        printf("Case %ld: ",test++);
        if (x+y<=z || y+z<=x || x+z<=y) printf("Invalid\n");
        else if (z<=0 || y<=0 || z<=0) printf("Invalid\n");
        else
        {
            if (x==y && y==z) printf("Equilateral\n");
            else if (x==y || x==z || y==z) printf("Isosceles\n");
            else  printf("Scalene\n");
        }
    }
    return 0;
}
