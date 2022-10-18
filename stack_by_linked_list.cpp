#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next = NULL;
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
    if(s.top == NULL)
        cout<<"Stack is empty!";
    else{
    Node* n = s.top;
    s.top = s.top->next;
    delete n;
    }
}
bool isEmpty(Stack s){
    return s.top == NULL;
}
int Top(Stack s){
    return s.top->data;
}
int Size(Stack s){
    int size = 1;
    Node* temp = s.top;
    while(temp->next != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}
void printStack(Stack s){
    Node* temp = s.top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Stack s;
    Push(s,22);Push(s,33);Push(s,44);
    printStack(s);
    Push(s,55);
    printStack(s);
    Pop(s);
    printStack(s);
    cout<<"Is empty: "<<isEmpty(s)<<endl;
    cout<<"Size: "<<Size(s)<<endl;
    cout<<"Top element: "<<Top(s)<<endl;
    return 0;
}
