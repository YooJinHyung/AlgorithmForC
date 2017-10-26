//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define INPUT_SIZE 1000
//
//int reverse(char *cake,int n);
//bool isIt(char *cakes, int n);
//int main()
//{
//	int i, T, K;
//	char sLine[INPUT_SIZE],strK[INPUT_SIZE];
//	char S[1006];
//	FILE *fp,*fp2;
//	fopen_s(&fp,"A-small-attempt1.in", "r");
//	fopen_s(&fp2, "result.txt", "w");
//	fgets(sLine, INPUT_SIZE, fp);
//	T = atoi(sLine);
//	for (i = 0; i < T; i++)
//	{
//		fscanf_s(fp, "%s", S, INPUT_SIZE);
//		fscanf_s(fp, "%s", strK, INPUT_SIZE);
//		K = atoi(strK);
//		int result = reverse(S, K);
//		
//		if (isIt(S, K))
//			fprintf(fp2, "Case #%d: IMPOSSIBLE\n", i + 1);
//		else
//			fprintf(fp2, "Case #%d: %d\n", i + 1, result);
//	}
//	fclose(fp);
//	fclose(fp2);
//	return 0;
//}
//
//int reverse(char *cake, int n)
//{
//	int i,j,result=0;
//	for (i = 0;i<strlen(cake)-n+1; i++)
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
//	for (int i = strlen(cakes)-n+1; i < strlen(cakes); i++)
//		if (cakes[i] == '-')
//			return true;
//
//	return false;
//	{
//
//	}
//}
//
