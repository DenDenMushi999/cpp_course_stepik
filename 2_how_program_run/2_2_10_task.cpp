#include <iostream>

using namespace std;

bool end = false;

void foo()
{
    int b;
    cin >> b;
    if (b == 0)
    {
        end = true;
        return;
    }
    else
        foo();
    if (end)
    {
        cout << b;
        end = false;
    }
    else 
        cout << " " << b; 
}

int main()
{
    foo();
	return 0;
}