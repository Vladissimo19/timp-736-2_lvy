#include <stdio.h>

int main()
{
	int N;//кол-во чисел
	int n;//переменная для самих чисел
	int k;//счетчик
	int result;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d\n",&n);
		if(n<0)
		{
			k++;
		}
	}
	result=k;
	printf("%d\n",result);
	return 0;
}

