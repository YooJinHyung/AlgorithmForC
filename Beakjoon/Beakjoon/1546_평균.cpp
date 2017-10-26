//#include <stdio.h>
//
//int main()
//{
//	int num, score[1002];
//	int high,i,sum=0;
//	scanf_s("%d", &num);
//	for (i = 0; i < num; i++)
//		scanf_s("%d", &score[i]);
//	high = 0;
//	for (i = 0; i < num; i++)
//	{
//		sum += score[i];
//		if (high < score[i])
//			high = score[i];
//	}
//	float result = (float)(sum * 100) / (float)(high*num);
//	printf("%0.2f\n", result);
//	return 0;
//}