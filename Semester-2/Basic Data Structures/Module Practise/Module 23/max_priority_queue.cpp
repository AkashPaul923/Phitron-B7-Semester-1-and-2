#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(20);
    cout << pq.top() << endl;
    pq.push(5);
    cout << pq.top() << endl;
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(50);
    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;

    return 0;
}