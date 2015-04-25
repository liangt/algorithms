/*
#include <cstdio>
#include <cstring>

struct node{
	int ct;
	node* nxt[26];
	node():ct(0){
		memset(nxt, 0, sizeof(nxt));
	}
};

int main(){
	int n, m;
	scanf("%d", &n);
	node* root = new node;
	node* tmp;
	char in[12];
	char* tin;
	for(int i=0; i<n; i++){
		scanf("%s", in);
		tin = in;
		tmp = root;
		while(*tin != '\0'){
			(tmp->ct)++;
			m = *tin - 'a';
			if((tmp->nxt)[m] == NULL)
				(tmp->nxt)[m] = new node;
			tmp = (tmp->nxt)[m];
			tin++;
		}
		(tmp->ct)++;
	}
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%s", in);
		tin = in;
		tmp = root;
		while(*tin != '\0'){
			n = *tin - 'a';
			tmp = (tmp->nxt)[n];
			if(tmp == NULL)
				break;
			tin++;
		}
		if(tmp == NULL)
			printf("0\n");
		else
			printf("%d\n", tmp->ct);
	}
	return 0;
}
*/