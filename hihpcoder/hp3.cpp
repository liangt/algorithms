/*
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct point{
	int id, x, y;
};
struct node {
	int id, dis;
};

bool cmp1(point n1, point n2){
	return n1.x < n2.x;
}

bool cmp2(point n1, point n2){
	return n1.y < n2.y;
}

struct cmp3{
	bool operator()(const node& n1, const node& n2){
		return n1.dis > n2.dis;
	}
};

const int N = 100002;
const int INF = 1000000010;
point pts[N];
vector<node> graph[N];
int dis[N];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d%d", &pts[i].x, &pts[i].y);
		pts[i].id = i;
	}
	
	node tmp;
	int d;
	// sort by x
	sort(pts, pts+n, cmp1);
	for(int i=1; i<n; i++){
		d = min(abs(pts[i-1].x - pts[i].x), abs(pts[i-1].y - pts[i].y));
		tmp.dis = d;
		tmp.id = pts[i].id;
		graph[pts[i-1].id].push_back(tmp);
		tmp.id = pts[i-1].id;
		graph[pts[i].id].push_back(tmp);
	}

	// sort by y
	sort(pts, pts+n, cmp2);
	for(int i=1; i<n; i++){
		d = min(abs(pts[i-1].x - pts[i].x), abs(pts[i-1].y - pts[i].y));
		tmp.dis = d;
		tmp.id = pts[i].id;
		graph[pts[i-1].id].push_back(tmp);
		tmp.id = pts[i-1].id;
		graph[pts[i].id].push_back(tmp);
	}

	for(int i=0; i<n; i++)
		dis[i] = INF;
	priority_queue<node, vector<node>, cmp3> pq;
	node tp;
	tp.dis = 0;
	tp.id = 0;
	pq.push(tp);
	dis[0] = 0;
	while(!pq.empty()){
		tp = pq.top();
		pq.pop();
		if(dis[tp.id] < tp.dis)
			continue;
		for(int i=0; i<graph[tp.id].size(); i++){
			if(dis[graph[tp.id][i].id] > dis[tp.id] + graph[tp.id][i].dis){
				dis[graph[tp.id][i].id] = dis[tp.id] + graph[tp.id][i].dis;
				tmp.id = graph[tp.id][i].id;
				tmp.dis = dis[tmp.id];
				pq.push(tmp);
			}
		}
	}
	printf("%d\n", dis[n-1]);
	return 0;
}
*/