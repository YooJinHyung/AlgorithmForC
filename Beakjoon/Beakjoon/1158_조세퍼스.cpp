//#include <stdio.h>
//#include <list>
//using namespace std;
//int main()
//{
//	int n, m, i, index;
//	list<int> listRound;
//	scanf_s("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//		listRound.push_back(i);
//	index = (m - 1) % listRound.size();
//	list<int>::iterator itr = listRound.begin();
//	advance(itr, index);
//	printf("<%d", *itr);
//	listRound.remove(*itr);
//	while (listRound.size() != 0)
//	{
//		itr = listRound.begin();
//		if (index + m>1)
//			index = (index + m - 1) % listRound.size();
//		advance(itr, index);
//		printf(", %d", *itr);
//		listRound.remove(*itr);
//	}
//	printf(">");
//	return 0;
//}