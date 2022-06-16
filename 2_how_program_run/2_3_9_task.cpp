#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int c = *a; 
    *a = *b; 
    *b = c;
}

void rotate(int a[], unsigned size, int shift)
{
    for (int s=0; s<shift; s++)
    {
        for (int i=0; i<size-1; i++)
            swap( &a[i], &a[i+1] );
    }
}

int main()
{
    int m[10] = {1,2,3,4,5,6,7,8,9,10};
    int* q = m+10;

    rotate(m, 10, 4);
    for (int* p =m; p!=q; p++ )
    {
        cout << *p << " " ;
    }
    cout << endl;

    rotate(m, 10, 3);
    for (int* p=m; p!=q; p++ )
    {
        cout << *p << " " ;
    }
    cout << endl;

    rotate(m, 10, 2);
    for (int* p=m; p!=q; p++ )
    {
        cout << *p << " " ;
    }

}