//#include <stdio.h>
//
//int main()
//{
//	int i, testcase, N, sum;
//	float average;
//	int score[1002];
//	scanf_s("%d", &testcase);
//	while (testcase != 0)
//	{
//		scanf_s("%d", &N);
//		sum = 0;
//		for (i = 0; i < N; i++)
//		{
//			scanf_s("%d", &score[i]);
//			sum += score[i];
//		}
//		average = (float)sum / N;
//		sum = 0;
//		for (i = 0; i < N; i++)
//		{
//			if (score[i] > average)
//				sum++;
//		}
//		printf("%0.3f%%\n", (float)sum / N * 100);
//		testcase--;
//	}
//}