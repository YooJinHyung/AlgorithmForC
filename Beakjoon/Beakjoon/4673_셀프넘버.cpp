//#include <stdio.h>
//int main()
//{
//	int i, num, result, judge[20000] = { 0, };
//	for (i = 1; i < 10000; i++)
//	{
//		num = i;
//		result = i;
//		do
//		{
//			result += num % 10;
//			num /= 10;
//		} while (num != 0);
//		judge[result] = 1;
//	}
//	for (i = 1; i <= 10000; i++)
//		if (judge[i] == 0)
//			printf("%d\n", i);
//	return 0;
//}