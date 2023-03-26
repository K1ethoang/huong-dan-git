#include <iostream>
#include <string>
using namespace std;

void print(const string &msg, const float &res)
{
    cout << "\n\t" << msg << " : " << res;
}

int phepCong(const int &a, const int &b)
{
    return a + b;
}

int main()
{
    int a = 2, b = 3;
    print("Phep cong", phepCong(a, b));
    return 0;
}