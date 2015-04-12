#include <iostream>
#include <string>
#include <stack>
#include <list>
using namespace std;

// 状态
struct state{
	int ch;                // 0-127: ASCII字符, 128: 空字符， 129: 终止状态
	state* out1;   //  分支1
	state* out2;   //  分支2
};

// NFA片段
struct fraq{
	state* start;         // 开始状态
	list<state> out; // 没有任何指向其他状态的状态
};

state* re2nfa(string str){
	int n = str.size();
	state* tmp = new state;
	tmp->out1 = NULL;
	tmp->out2 = NULL;
	fraq* fq = new fraq;
	stack<char> ops;
	stack<fraq> nfafraq;
}

int main(){
	return 0;
}
