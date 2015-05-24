/*

// Insert, Delete & Modify
int dis[20][20];

int editDistance(string a, string b)
{
	int na = a.size();
	int nb = b.size();
	for(int i=0; i<=na; i++)
		dis[i][0] = i;
	for(int i=0; i<=nb; i++)
		dis[0][i] = i;
	int del,ins,mod;
	for(int i=1; i<=na; i++)
		for(int j=1; j<=nb; j++)
		{
			if(a[i-1] == b[j-1])
				dis[i][j] = dis[i-1][j-1];
			else
			{
				del = dis[i-1][j] + 1;
				ins = dis[i][j-1] + 1;
				mod = dis[i-1][j-1] + 1;
				dis[i][j] = del<=ins ? (del<=mod ? del : mod) : (ins<=mod ? ins : mod);
			}
		}
	return dis[na][nb];
}

// 这里的输出可能有问题，一般应单独使用一个标记矩阵来指导输出
void print(string a, string b, int idx_a, int idx_b)
{
	if(idx_a == 0 && idx_b == 0)
		return;
	else if(idx_a == 0 && idx_b != 0)
		for(int i=0; i<idx_b; i++)
			cout<<"Insert: "<<b[i]<<endl;
	else if(idx_a != 0 && idx_b == 0)
		for(int i=0; i<idx_a; i++)
			cout<<"Delete: "<<a[i]<<endl;
	else
	{
		if(dis[idx_a][idx_b] == dis[idx_a-1][idx_b-1]+1)
		{
			print(a,b,idx_a-1,idx_b-1);
			cout<<"Modify: "<<a[idx_a-1]<<"  -->  "<<b[idx_b-1]<<endl;
		}
		else if(dis[idx_a][idx_b] == dis[idx_a][idx_b-1]+1)
		{
			print(a,b,idx_a,idx_b-1);
			cout<<"Insert: "<<b[idx_b-1]<<endl;
		}
		else if(dis[idx_a][idx_b] == dis[idx_a-1][idx_b]+1)
		{
			print(a,b,idx_a-1,idx_b);
			cout<<"Delete: "<<a[idx_a-1]<<endl;
		}
		else
		{
			print(a,b,idx_a-1,idx_b-1);
			cout<<"No Change: "<<a[idx_a-1]<<"  -->  "<<b[idx_b-1]<<endl;
		}
	}
}

// Insert, Delete, Modify and Swap
int dis[16][16];

int editDistance(string a, string b)
{
	int na = a.size();
	int nb = b.size();
	for(int i=0; i<=na; i++)
		dis[i][0] = i;
	for(int i=0; i<=nb; i++)
		dis[0][i] = i;
	int del,ins,mod;
	for(int i=1; i<=na; i++)
		for(int j=1; j<=nb; j++)
		{
			if(a[i-1] == b[j-1])
				dis[i][j] = dis[i-1][j-1];
			else
			{
				del = dis[i-1][j] + 1;
				ins = dis[i][j-1] + 1;
				mod = dis[i-1][j-1] + 1;
				dis[i][j] = del<=ins ? (del<=mod ? del : mod) : (ins<=mod ? ins : mod);
				if(i>1 && j>1)
				{
					if(a[i-1] == b[j-2] && a[i-2] == b[j-1] && dis[i-2][j-2] + 1 < dis[i][j])
						dis[i][j] = dis[i-2][j-2] + 1;
					for(int k=3; k<=j; k++)
						if(a[i-1] == b[j-k] && a[i-2] == b[j-1] && dis[i-2][j-k] + k - 1 < dis[i][j])
							dis[i][j] = dis[i-2][j-k] + k - 1;
					for(int k=3; k<=i; k++)
						if(a[i-1] == b[j-2] && a[i-k] == b[j-1] && dis[i-k][j-2] + k - 1 < dis[i][j])
							dis[i][j] = dis[i-k][j-2] + k - 1;
				}
			}
			
		}
	return dis[na][nb];
}


// POJ 1080
#include<iostream>
#include<map>
#include<string>
using namespace std;

int dis[101][101];
map<char,int> mp;
int score[5][5] = {
	{5, -1, -2, -1, -3},
	{-1, 5, -3, -2, -4},
	{-2, -3, 5, -2, -2},
	{-1, -2, -2, 5, -1},
	{-3, -4, -2, -1, 0}};

int editDistance(string a, int na, string b, int nb)
{
	for(int i=0; i<na; i++)
		dis[i+1][0] = dis[i][0] + score[mp[a[i]]][4];
	for(int i=0; i<nb; i++)
		dis[0][i+1] = dis[0][i] + score[4][mp[b[i]]];;
	int del,ins,mod,tp;
	for(int i=1; i<=na; i++)
		for(int j=1; j<=nb; j++)
		{
			if(a[i-1] == b[j-1])
			{
				tp = mp[a[i-1]];
				dis[i][j] = dis[i-1][j-1] + score[tp][tp];
			}
			else
			{
				del = dis[i-1][j] + score[mp[a[i-1]]][4];
				ins = dis[i][j-1] + score[4][mp[b[j-1]]];
				mod = dis[i-1][j-1] + score[mp[a[i-1]]][mp[b[j-1]]];
				dis[i][j] = del>ins ? (del>mod ? del : mod) : (ins>mod ? ins : mod);
			}
		}
	return dis[na][nb];
}

int main()
{
	mp['A'] = 0;
	mp['C'] = 1;
	mp['G'] = 2;
	mp['T'] = 3;

	int n,na,nb;
	string a,b;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>na>>a>>nb>>b;
		cout<<editDistance(a, na, b, nb)<<endl;
	}
	return 0;
}

POJ 1035
#include<iostream>
#include<string>
using namespace std;

string dict[10000];

int main()
{
	int n = 0, count;
	string temp, nearest;
	while(cin>>temp)
	{
		if(temp == "#")
			break;
		dict[n++] = temp;
	}
	bool right;
	while(cin>>temp)
	{
		if(temp == "#")
			break;
		right = false;
		for(int i=0; i<n; i++)
			if(temp == dict[i])
			{
				cout<<temp<<" is correct"<<endl;
				right = true;
				break;
				
			}
		if(right)
			continue;
		cout<<temp<<":";
		for(int i=0; i<n; i++)
		{
			count = 0;
			if(temp.size() == dict[i].size())
				for(int j=0; j<temp.size(); j++)
				{
					if(temp[j] != dict[i][j])
						count++;
					if(count > 1)
						break;
				}
			else if(temp.size() == dict[i].size() + 1)
			{
				int j = 0;
				while(temp[j] == dict[i][j] && j < temp.size())
					j++;
				count = 1;
				j++;
				while(j < temp.size())
				{
					if(temp[j] != dict[i][j-1])
					{
						count++;
						break;
					}
					j++;
				}
			}
			else if(temp.size() == dict[i].size() - 1)
			{
				int j = 0;
				while(temp[j] == dict[i][j] && j < dict[i].size())
					j++;
				count = 1;
				j++;
				while(j < dict[i].size())
				{
					if(temp[j-1] != dict[i][j])
					{
						count++;
						break;
					}
					j++;
				}
			}
			if(count == 1)
				cout<<" "<<dict[i];
		}
		cout<<endl;
	}
	return 0;
}

*/
