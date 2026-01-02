#include <iostream>
using namespace std;

class Add
{
public:
    void sum()
    {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Add obj;
    obj.sum();
    return 0;
}

