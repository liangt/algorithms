/*
#include <iostream>
using namespace std;

struct State
{
int c;
State *out;
State *out1;
int lastlist;
};

struct Frag
{
State *start;
Ptrlist *out;
};

Ptrlist *list1(State **outp);   // 创建一个新指针列表包括outp指针
Ptrlist *append(Ptrlist *l1, Ptrlist *l2);  // 两个指针列表连接起来，并返回结果
void patch(Ptrlist *l, State *s);  // 将list1中的悬空指针连接使它们指向状态s：对于l里的每个指针outp,它设置*outp=s

char* re2post(char* intern);  // 将中缀正则表达式转换成后缀表达式

State* post2nfa(char *postfix)
{
    char *p;
    Frag stack[1000], *stackp, e1, e2, e;
    State *s;

    #define push(s) *stackp++ = s
    #define pop()   *--stackp

    stackp = stack;
    for(p=postfix; *p; p++){
        switch(*p){
        // compilation cases, described below
        // 连接
        case '.':
            e2 = pop();
            e1 = pop();
            patch(e1.out, e2.start);
            push(frag(e1.start, e2.out));
            break;

        // 选择
        case '|':
            e2 = pop();
            e1 = pop();
            s = state(Split, e1.start, e2.start);
            push(frag(s, append(e1.out, e2.out)));
            break;

        // Zero or one
        case '?':
            e = pop();
            s = state(Split, e.start, NULL);
            push(frag(s, append(e.out, list1(&s->out1))));
            break;
        }

        //Zero or more:
        case '*':
            e = pop();
            s = state(Split, e.start, NULL);
            patch(e.out, s);
            push(frag(s, list1(&s->out1)));
            break;

        // One or more:
        case '+':
            e = pop();
            s = state(Split, e.start, NULL);
            patch(e.out, s);
            push(frag(e.start, list1(&s->out1)));
            break;

        // 文本字符
        default:
            s = state(*p, NULL, NULL);
            push(frag(s, list1(&s->out));
            break;
    }
    e = pop();
    patch(e.out, matchstate);
    return e.start;
}
*/
