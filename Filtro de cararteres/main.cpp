#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    cout << "Escribe lo que quieras, yo reconozco a las palabras ;)" << endl;
    string a ;
    cin >> a ;
    cout << "Ingresaste: " << a<< endl;
    int len=a.size();
    cout <<"El tamanio de tu string es: "<<len<<endl;
    //******************************************************************************
    string n;
    for (int i=0; i<len ; i++){
        if (isalpha(a[i])){
            cout << a[i];
            if (isupper(a[i])){a[i-1]='_';}
        }
    }
    return 0;
}
