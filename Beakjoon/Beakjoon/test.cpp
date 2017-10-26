#include <stack>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
	int value = 1;
	stack<int> st1;
	
	st1.push(value);
	st1.push(2);
	
	q1.push(1);
	
	
	printf("%d\n", st1.top());
	printf("%d\n", q1.front());
	st1.pop();
	printf("%d\n", q1.empty());
	q1.pop();
	printf("%d\n", q1.empty());
	return 0;
}