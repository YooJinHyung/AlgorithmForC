//#include <stdio.h>
//#include <queue>
//#include <vector>
//using namespace std;
//
//bool visited[200010];
//
//int main() {
//	int n, k, result = 0;
//	int num = 0, size = 0;
//	bool def = false;
//	queue<int> q1;
//	scanf("%d %d", &n, &k);
//	q1.push(n);
//	while (!def) {
//		size = q1.size();
//		for (int i = 0; i<size; i++) {
//			result = q1.front();
//			q1.pop();
//			if (result == k) {
//				def = true;
//				break;
//			}
//			else if (result<k) {
//				if (!visited[result + 1])
//				{
//					q1.push(result + 1);
//					visited[result + 1] = true;
//				}
//				if (!visited[result - 1])
//				{
//					q1.push(result - 1);
//					visited[result - 1] = true;
//				}
//				if (result * 2<200010)
//					if (!visited[result * 2])
//					{
//						q1.push(result * 2);
//						visited[result * 2] = true;
//					}
//			}
//			else
//				if (!visited[result - 1])
//				{
//					q1.push(result - 1);
//					visited[result - 1] = true;
//				}
//		}
//		if (def)
//			break;
//		else
//			num++;
//	}
//	printf("%d", num);
//}