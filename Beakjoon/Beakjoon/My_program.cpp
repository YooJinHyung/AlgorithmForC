//#include <iostream>
//#include <string.h>
//#define INPUT_SIZE 1000
//using namespace std;
//int reverse(char *cake, int n);
//bool isIt(char *cakes, int n);
//int main()
//{
//	int i, T, K;
//	char S[1006];
//	cin >> T;
//	for (i = 0; i < T; i++)
//	{
//		cin >> S;
//		cin >> K;
//		int result = reverse(S, K);
//
//		if (isIt(S, K))
//			cout << "Case #" << i + 1 << ": IMPOSSIBLE\n";
//		else
//			cout << "Case #" << i + 1<<": "<<result << endl;
//	}
//	return 0;
//}
//
//int reverse(char *cake, int n)
//{
//	int i, j, result = 0;
//	for (i = 0; i<strlen(cake) - n + 1; i++)
//	{
//		if (cake[i] == '-')
//		{
//			result++;
//			j = 0;
//			while (j < n)
//			{
//				if (cake[i + j] == '-')
//					cake[i + j] = '+';
//				else
//					cake[i + j] = '-';
//				j++;
//			}
//		}
//	}
//	return result;
//}
//
//bool isIt(char *cakes, int n)
//{
//	for (int i = strlen(cakes) - n + 1; i < strlen(cakes); i++)
//		if (cakes[i] == '-')
//			return true;
//
//	return false;
//	{
//
//	}
//}
//
