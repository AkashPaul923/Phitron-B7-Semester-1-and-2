#include <iostream>
using namespace std;

int main()
{
    int x;
    char s[20];

    cin >> x;
    cin.ignore(); // for ignore enter key
    cin.getline(s, 20); // for input string with space

    cout << x << endl << s;

    return 0;
}