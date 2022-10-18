#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Stack{
    Node* top = NULL;
};
void Push(Stack &s, int data){
    Node *n = new Node;
    n->data = data;
    n->next = s.top;
    s.top = n;
}
void Pop(Stack &s){

    s.top = s.top->next;
}
bool isEmpty(Stack s){
    return s.top == NULL;
}
int Top(Stack s){
    return s.top->data;
}
int main()
{
    Stack s;
    Push(s,22);Push(s,33);
    Pop(s);
    cout<<isEmpty(s)<<endl;
    cout<<Top(s)<<endl;
    return 0;
}
