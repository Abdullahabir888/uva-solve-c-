#include<bits/stdc++.h>
using namespace std;

int main()
 {
	double a, num;

	while(scanf("%lf\n%lf",&a,&num)!=EOF){
		printf("%.0lf\n",pow(num,1.0/a));
	}

	return 0;
}
