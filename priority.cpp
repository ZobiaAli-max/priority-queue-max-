#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> q;
	q.push(30);
	q.push(56);
	q.push(21);
	q.push(41);
	cout<<"Priority wise pop elements: ";
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	return 0;
}
