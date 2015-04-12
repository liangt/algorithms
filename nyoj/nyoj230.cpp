/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxn 500002
typedef struct node
{
    int order;  //编号。
    struct node *next[26];
}node;
int pre[maxn];
int vs[maxn];
int t;
int search(char *s,node *T)
{
    int len,i,j,id,flag=0;
    node *p,*q;
    len=strlen(s);
    p=T;
    for(i=0;i<len;++i)
    {
        id=s[i]-'a';
        if(p->next[id]==NULL)
        {
            flag=1;
            q=(node *)malloc(sizeof(node));
            for(j=0;j<26;++j)
                q->next[j]=NULL;
            p->next[id]=q;
        }
        p=p->next[id];
     }
     if(flag)  //颜色不存在。
     {
         p->order=t++;
         vs[p->order]=!vs[p->order];
         return p->order;
     }
     else
     {
        vs[p->order]=!vs[p->order];
        return p->order;
     }
}
int find(int x)
{
    if(pre[x]==-1) return x;
    return pre[x]=find(pre[x]);
}
void Union(int x,int y)
{
     x=find(x);
     y=find(y);
     if(x!=y)
      pre[y]=x;
}
int main()
{
     //freopen("Input.txt","r",stdin);
     int i,num1,num2,ncase,n;
     char s1[20],s2[20];
     node *T;
     scanf("%d",&ncase);
     while(ncase--)
     {
         t=1;
         memset(vs,0,sizeof(vs));
         memset(pre,-1,sizeof(pre));
         T=(node *)malloc(sizeof(node));
         T->order=0;
         for(i=0;i<26;++i)
           T->next[i]=NULL;
         scanf("%d",&n);
         if(n==0) { printf("Possible\n"); continue ;}
         for(i=1;i<=n;i++)
         {
            scanf("%s%s",s1,s2);
            num1=search(s1,T);
            num2=search(s2,T);
            Union(num1,num2);
         }
         int ans=0,sum=0;
         for(i=1;i<t;i++)
         {
             if(pre[i]==-1) ans++;
             if(vs[i]) sum++;
         }
         if(ans>1)  printf("Impossible\n");
         else
         {
             if(sum==2||sum==0)
                printf("Possible\n");
             else
                printf("Impossible\n");
         }
     }
    return 0;
}

#include <iostream>
#include <map>
#include <string>
using namespace std;

const int N = 250000 * 2 + 1;
int pa[N], rk[N], dg[N];
map<string, int> mp;

// 并查集判连通
int fd(int x){
    if(pa[x] == x)
        return x;
    return pa[x] = fd(pa[x]);
}

void un(int a, int b){
    int ra, rb;
    ra = fd(a);
    rb = fd(b);
    if(ra == rb)
        return;
    if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        if(rk[ra] == rk[rb])
            rk[rb]++;
    }
}

int main(){
    int k, n,  idx, s, e;
    string ss, se;
    bool tag;
    cin>>k;
    while(k--){
        cin>>n;
        for(int i=0; i<2*n; i++){
            pa[i] = i;
            rk[i] = 0;
            dg[i] = 0;
        }
        idx = 0;
        for(int t=0; t<n; t++){
            cin>>ss>>se;
            if(mp.find(ss) == mp.end()){
                s = idx++;
                mp[ss] = s;
            }
            else
                s = mp[ss];
            if(mp.find(se) == mp.end()){
                e = idx++;
                mp[se] = e;
            }
            else
                e = mp[se];
            un(s, e);
            dg[s]++;
            dg[e]++;
        }
        tag = true;
        s = 0;
        for(int i=0; i<n; i++){
            s += dg[i] & 1;
             if(dg[i] == 0  || s > 2){
                tag = false;
                break;
            }
        }
        if(tag && s && s!= 2)
            tag = false;
        if(tag){
            s = fd(0);
            for(int i=1; i<n; i++){
                if(s != fd(i)){
                    tag = false;
                    break;
                }
            }
        }
        if(tag)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
    return 0;
}
*/
