#include <stdio.h>
#include <math.h>

int main()
{
	int N,n,sum,oper,result;
	scanf("%d\n", &N);
	sum=0;
	for(int i=1;i<=N;i++)
	{
		scanf("%d\n",&n);
		oper = pow((-1),i+1)*pow(n,3);
		sum = sum+oper;	
	}
	printf("%d\n",sum);
	return 0;
}

