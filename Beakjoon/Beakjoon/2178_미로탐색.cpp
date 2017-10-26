//#include <stdio.h>
//#include <queue>
//using namespace std;
//int main() {
//	int map[102][102] = { { 2, }, };
//	int map_check[102][102] = { { 0, }, };
//	int row, col, n, m, count = 1;
//	queue<pair<int, int>> q1;
//	pair<int, int> temp;
//	scanf("%d %d", &n, &m);
//	for (row = 0; row<n; row++)
//	{
//		for (col = 0; col<m; col++)
//		{
//			scanf("%1d", &map[row][col]);
//		}
//	}
//	q1.push(make_pair(0, 0));
//	map_check[0][0] = 1;
//	while (map_check[n - 1][m - 1] != 1)
//	{
//		int cycle = q1.size();
//		while (cycle != 0)
//		{
//			temp = q1.front();
//			q1.pop();
//			row = temp.first;
//			col = temp.second;
//			if (row + 1<n)
//			{
//				if (map[row + 1][col] == 1 && map_check[row + 1][col] == 0)
//				{
//					map_check[row + 1][col] = 1;
//					q1.push(make_pair(row + 1, col));
//				}
//			}
//			if (row - 1>-1)
//			{
//				if (map[row - 1][col] == 1 && map_check[row - 1][col] == 0)
//				{
//					map_check[row - 1][col] = 1;
//					q1.push(make_pair(row - 1, col));
//				}
//			}
//			if (col + 1<m)
//			{
//				if (map[row][col + 1] == 1 && map_check[row][col + 1] == 0)
//				{
//					map_check[row][col + 1l] = 1;
//					q1.push(make_pair(row, col + 1));
//				}
//			}
//			if (col - 1>-1)
//			{
//				if (map[row][col - 1] == 1 && map_check[row][col - 1] == 0)
//				{
//					map_check[row][col - 1] = 1;
//					q1.push(make_pair(row, col - 1));
//				}
//			}
//			cycle--;
//			if (map_check[n - 1][m - 1] == 1)
//				break;
//		}
//		count++;
//
//	}
//	printf("%d", count);
//	return 0;
//}