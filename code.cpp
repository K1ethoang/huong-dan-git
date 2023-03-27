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

int phepTru(const int &a, const int &b)
{
    return a - b;
}

int phepNhan(const int &a, const int &b)
{
    return a * b;
}

float phepChia(const int &a, const int &b)
{
    return (float)a / b;
}

int main()
{
    int a = 2, b = 3;
    print("Phep cong", phepCong(a, b));
    print("Phep tru", phepTru(a, b));
    print("Phep nhan", phepNhan(a, b));
    // chinh sua phep nhan
    print("Phep chia", phepChia(a, b));
    return 0;
}
