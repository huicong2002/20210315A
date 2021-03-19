#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[1010];
int main()
{
	int N, n, m;
	int i;
	int sum1, sum2, time;

	scanf("%d", &N);

	while (N--)
	{
		scanf("%d", &n);

		for (i = 1; i <= n; i++)
		{
			scanf("%d", &arr[i]);
\
		}

		time = 0;

		while (n)
		{
			if (n >= 4)
			{
				sum1 = arr[n] + arr[1] + arr[n - 1] + arr[1];
				sum2 = arr[2] + arr[1] + arr[n] + arr[2];
				time += (sum1 > sum2 ? sum2 : sum1);
				n -= 2;
			}
			else if (n == 3)
			{
				sum1 = arr[n] + arr[1] + arr[n-1];
				time = time + sum1;
				break;
			}
			else
			{
				time += arr[n];
				break;
			}
		}

		printf("%d\n", time);
	}

	return 0;
}