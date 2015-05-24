/*
#include <cstdio>

struct Node
{
	int val;
	int pos;
	Node* prex;
	Node* next;
};

const int N = 1000002;
int minans[N], maxans[N];
Node *minhead, *mintail, *maxhead, *maxtail;

int main()
{
	int n, k, v;
	scanf("%d %d", &n, &k);
	minhead = new Node;
	minhead->prex = 0;
	minhead->next = 0;
	mintail = minhead;
	maxhead = new Node;
	maxhead->prex = 0;
	maxhead->next = 0;
	maxtail = maxhead;
	
	Node *temp;
	for(int i=0; i<k; i++)
	{
		scanf("%d", &v);
		while(mintail != minhead && mintail->val >= v)
		{
			temp = mintail;
			mintail = mintail->prex;
			delete temp;
		}
		temp = mintail;
		mintail = new Node;
		mintail->val = v;
		mintail->pos = i;
		mintail->prex = temp;
		mintail->next = 0;
		temp->next = mintail;

		while(maxtail != maxhead && maxtail->val <= v)
		{
			temp = maxtail;
			maxtail = maxtail->prex;
			delete temp;
		}
		temp = maxtail;
		maxtail = new Node;
		maxtail->val = v;
		maxtail->pos = i;
		maxtail->prex = temp;
		maxtail->next = 0;
		temp->next = maxtail;
	}
	minans[0] = minhead->next->val;
	maxans[0] = maxhead->next->val;
	int m = 1;
	for(int i=k; i<n; i++)
	{
		scanf("%d", &v);
		while(minhead != mintail && i - minhead->next->pos >= k)
		{
			temp = minhead;
			minhead = minhead->next;
			delete temp;
		}
		while(mintail != minhead && mintail->val >= v)
		{
			temp = mintail;
			mintail = mintail->prex;
			delete temp;
		}
		temp = mintail;
		mintail = new Node;
		mintail->val = v;
		mintail->pos = i;
		mintail->prex = temp;
		mintail->next = 0;
		temp->next = mintail;

		while(maxhead != maxtail && i - maxhead->next->pos >= k)
		{
			temp = maxhead;
			maxhead = maxhead->next;
			delete temp;
		}
		while(maxtail != maxhead && maxtail->val <= v)
		{
			temp = maxtail;
			maxtail = maxtail->prex;
			delete temp;
		}
		temp = maxtail;
		maxtail = new Node;
		maxtail->val = v;
		maxtail->pos = i;
		maxtail->prex = temp;
		maxtail->next = 0;
		temp->next = maxtail;

		minans[m] = minhead->next->val;
		maxans[m] = maxhead->next->val;
		m++;
	}
	m--;
	for(int i=0; i<m; i++)
		printf("%d ", minans[i]);
	printf("%d\n", minans[m]);
	for(int i=0; i<m; i++)
		printf("%d ", maxans[i]);
	printf("%d\n", maxans[m]);
	while(1);
	return 0;
}
*/