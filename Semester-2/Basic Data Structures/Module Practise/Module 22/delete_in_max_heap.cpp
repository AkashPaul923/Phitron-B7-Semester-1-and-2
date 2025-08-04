#include <bits/stdc++.h>
using namespace std;

void insert_in_max_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int child = v.size() - 1;
    while (child != 0)
    {
        int parent = (child - 1) / 2;
        if (v[child] > v[parent])
            swap(v[child], v[parent]);
        else
            break;
        child = parent;
    }
}

void delete_in_max_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int left_idx = (cur_idx * 2) + 1;
        int right_idx = (cur_idx * 2) + 2;
        int left_val = INT_MIN, right_val = INT_MIN;
        if (left_idx < v.size())
            left_val = v[left_idx];
        if (right_idx < v.size())
            right_val = v[right_idx];

        if (left_val >= right_val && left_val > v[cur_idx])
        {
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if (right_val > left_val && right_val > v[cur_idx])
        {
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_in_max_heap(v, val);
    }
    print_heap(v);
    delete_in_max_heap(v);
    print_heap(v);

    return 0;
}