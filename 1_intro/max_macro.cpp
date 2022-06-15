#include <iostream>
#include <cmath>

#define MAX(x, y, r) { int adorable_x=(x); int adorable_y=(y); r = (adorable_x) > (adorable_y) ? (adorable_x) : (adorable_y); }

int main()
{
    int x, y;
    std::cout << "Enter x and y\n";
    std::cin >> x >> y;
    
    int r;
    MAX(x, y, r);
    cout << r << "\n" ;
    MAX(--x,--y, r);
    cout << r << "\n" ;
    MAX(x += y, ++y, r);
    cout << r << "\n" ;
    int s = (r+=3);
    cout << s << "\n" ;
}