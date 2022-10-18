#include <bits/stdc++.h>
using namespace std;
struct Stack{
    int *arr = new int[100];
    int top = -1;
};
void Push(Stack &s, int data){
    s.top++;
    s.arr[s.top] = data;
}
void Pop(Stack &s){
    if(s.top == -1)
        cout<<"Stack is empty!";
    else
        s.top--;
}
int Top(Stack s){
    return s.arr[s.top];
}
int Size(Stack s){
    return s.top+1;
}
bool isEmpty(Stack s){
    return s.top == -1;
}
void printStack(Stack s){
    for (int i = 0; i < s.top+1; i++)
        cout<<s.arr[i]<<" ";
    cout<<endl;
}
int main()
{
    Stack s;
    Push(s,11);Push(s,12);Push(s,13);
    printStack(s);
    Pop(s);
    printStack(s);
    cout<<"Top value of the stack: "<<Top(s)<<endl;
    cout<<"Size of the stack: "<<Size(s)<<endl;
    cout<<"Is stack is empty: "<<isEmpty(s)<<endl;
    delete[] s.arr;
    return 0;
}
