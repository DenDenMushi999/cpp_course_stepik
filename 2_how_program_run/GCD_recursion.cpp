#include <iostream>

using namespace std; 

template <class T> const T& max (const T& a, const T& b) {
  return (a<b)?b:a;     // or: return comp(a,b)?b:a; for version (2)
}

template <class T> const T& min (const T& a, const T& b) {
  return (a>b)?b:a;     // or: return comp(a,b)?b:a; for version (2)
}

unsigned gcd(unsigned a, unsigned b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    gcd( min(a,b), max(a,b) % min(a,b)  );
}

int main()
{
    unsigned a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "GCD of " << a << " and " << b << " is : " << gcd(a,b);

    return 0;
}


