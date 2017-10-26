//#include <stdio.h>
//
//int main()
//{
//	int i, month, date, days;
//	char weeks[7][10] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
//	days = 0;
//	scanf_s("%d %d", &month, &date);
//	for (i = 1; i < month; i++)
//	{
//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//			days += 31;
//		else if (i == 2)
//			days += 28;
//		else
//			days += 30;
//	}
//	days += date;
//	printf("%s\n", weeks[days % 7]);
//	return 0;
//}