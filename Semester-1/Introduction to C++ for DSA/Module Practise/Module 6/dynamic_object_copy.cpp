#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 7);
    Cricketer *kholi = new Cricketer("India", 18);
    *kholi = *dhoni;
    delete dhoni;
    cout << "Kholi -> " << kholi->country << " " << kholi->jersey;

    return 0;
}