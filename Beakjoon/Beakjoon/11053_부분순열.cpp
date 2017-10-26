//#include <stdio.h>
//struct number {
//	int val;
//	int len;
//}check[1002] = { { 0,0 }, };
//int main(void)
//{
//	int n, best = 0;
//	scanf("%d", &n);
//	int i = 0;
//	while (i<n)
//	{
//		scanf("%d", &check[i].val);
//		i++;
//	}
//	int j;
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = i; j >= 0; j--)
//		{
//			if (check[j].val<check[i].val&&check[j].len + 1>check[i].len)
//				check[i].len = check[j].len + 1;
//			if (check[i].len>best)
//			{
//				best = check[i].len;
//				break;
//			}
//		}
//	}
//	printf("%d\n", best + 1);
//	return 0;
//}