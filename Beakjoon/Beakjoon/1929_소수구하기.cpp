////에라토스테네스의 체 이용
//#include <stdio.h>
//
//int main()
//{
//	int M, N, i, j;
//	bool judge[1000002] = { 0,1, };
//	scanf_s("%d %d", &M, &N);
//
//	for (i = 2; i < N; i++)
//	{
//		if (!judge[i])
//			for (j = 2; j <= N / 2 && j*i <= 1000000; j++)
//				judge[i*j] = true;
//	}
//
//	for (i = M; i <= N; i++)
//		if (!judge[i])
//			printf("%d\n", i);
//	return 0;
//}