//#include <stdio.h>
//
//void cipherCount(int *counter, int num, int cipher);
//
//int main()
//{
//	while (true)
//	{
//		int i, N, cipher = 1;
//		int counter[10] = { 0, };
//		scanf_s("%d", &N);
//
//		while (N > 0)
//		{
//			if (N % 10 != 9 || N<10)
//			{
//				cipherCount(counter, N, cipher);
//				N--;
//			}
//			else
//			{
//				counter[0] += cipher*(N / 10);
//				for (i = 1; i < 10; i++)
//					counter[i] += cipher*(N / 10 + 1);
//				cipher *= 10;
//				N /= 10;
//			}
//		}
//
//		for (i = 0; i < 10; i++)
//			printf("%d ", counter[i]);
//		printf("\n");
//	}
//	return 0;
//}
//
//void cipherCount(int *counter, int num, int cipher)
//{
//	while (num > 0)
//	{
//		counter[num % 10] += cipher;
//		num /= 10;
//	}
//}