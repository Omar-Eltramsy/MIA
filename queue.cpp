#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
struct Queue
{
    stack<string> s1, s2;
    void inqueue(string name)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(name);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    string dequeue()
    {
        if (s1.empty())
        {
            cout << "the queue is empty";
            return "-1";
        }
        else
        {
            string x = s1.top();
            s1.pop();
            return x;
        }
    }
    void print()
    {
        stack<string> temp = s1;
        while (!temp.empty())
        {
            cout << temp.top() << "\n";
            temp.pop();
        }
    }
};
int main()
{
    Queue q;
    q.inqueue("Batarang");
    q.inqueue("Grapple Gun");
    q.inqueue("Explosive Gel");
    q.inqueue("Batclaw");
    q.inqueue("Cape Glide");
    q.inqueue("Smoke Pellet");
    q.print();
    return 0;
}