#include<malloc.h>
struct node{
	int x;
	node * next;
};
struct Stack{
	node * p;
};
void push(Stack s,int a){
	node * b=(node*)malloc(sizeof(node));
	b->x=a;
	if(s.p==nullptr){
		s.p=b;
	}
	else{
		s.p->next=b;
	}
}