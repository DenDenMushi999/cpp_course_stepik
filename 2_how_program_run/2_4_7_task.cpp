#include <iostream>
using namespace std;

unsigned strlength(char* str)
{
    int i=0;
    for( ; *str!='\0'; str++ ) { i++; }
    return i;
}

void strcat(char *to, char *from)
{
    // move 'to' for the end
    for (; *to != '\0'; to++);
    for (; *from!='\0'; from++, to++ )
        *to = *from;
    *to = '\0';
}


int main()
{
    char cstr1[100] = "cccccc1"; 
    char cstr2[100] = "ssss2";
    // char cstr1[100] = ""; 
    // char cstr2[100] = "";
    
    unsigned l1 = strlength(cstr1); 
    unsigned l2 = strlength(cstr2);
    cout << "lengths are : " << l1 << " " << l2 << endl; 
    strcat( cstr1, cstr2 );

    const char* q=cstr1+l1+l2+1;
    for ( char* p=cstr1; p!=q; p++ )
        cout << *p ;
    cout << endl;

}