#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(100);
    cout << pq.top() << endl;
    pq.push(50);
    cout << pq.top() << endl;
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;
    pq.push(10);
    cout << pq.top() << endl;

    return 0;
}