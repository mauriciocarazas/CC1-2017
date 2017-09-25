#include <iostream>
#if !defined (nullptr)
#define nullptr NULL
#endif
using namespace std;
/*void functA(int *a, int len){
        for (int i=0;i<len;i++){
            cout << "a[i]   es :"   << a[i]  << endl; // *(&a[i])
            cout << "*(a+i) es :" << *(a+i)<< endl;
        }
    }
*/
int main()
{
    cout << "Pointers !" << endl;

/*
    int a = 5;
    cout << "a: "<<a<< endl;
    int *ptr=&a;
    ++ptr;
    cout << "a: "<<a<< endl;
    (*ptr)++;
    cout << "a: "<<a<< endl;
*/
//-----------------------------------------------------------
/*
    int a=5;
    cout << "a: "<<a<< endl;
    int &c=a;Y
    c++;
    cout << "c: "<<c<< endl;
    cout << "a: "<<a<< endl;

    cout << ++*(&a)<<endl; // se anula
*/
//------------------------------------------------------------
/*

    // PUNTEROS EN ARRAY
    // El puntero y el array están intimamente relacionados, x ejm en u array conoces el tamaño,
    // pero algunas veces deben adaptarse a lo que el usuario requiera, para esto usamos punteros.
    int a[3];
    // a ---> X020--->[1]
    //        X021--->[2]
    //        X022--->[3]

    cout << &a[0]<<endl;
    cout << &a[1]<<endl;
   // cout << ++(&a[1])<<endl;
    cout << ++(*(&a[0]))<<endl;
*/
//--------------------------------------------------------------------
/*
    //PUNTEROS EN FUNCIONES
    int a [3]={10,11,12};

    cout << "primera llamada : functA(a,3) " << endl;
    functA(a,3);

    cout << "segunda llamada : functA(&(a[0]),3) " << endl;
    functA(&(a[0]),3);

    cout << "tercera llamada : functA(&(a[1]),2) " << endl;
    functA(&(a[1]),2);
*/
//-------------------------------------------------------------------
    /*
    //int a[3];
    int *a =NULL;//=0  INCLUDE NULL
    int b=5;
    int *ptrb=new int; //creo un puntero de tipo entero y SEPARA UN PEDACITO DE ESA MEMORIA PARA EL
    *ptrb=b;// el espacio de memoria que creé almacena el valor de B
    //-----------------------------------------------
    int *ptrArray = new int [3]; // == int a[3]
    int *ptrArray = new int [3]; // declaré un array Ndimendional

*/








/*
EJERCICIO PARA EL CONTROL !!
    MULTIPLICACION DE  2 MATRICES  BIDIMENSIONAL E IMORIMA EL RESULTADO
    - EL USUARIO INGRESA DE QUE TAMAÑOS SON LAS MATRICES
    - SOLO USAMOS PUNTEROS
    - SE HACE EN UNA FUNCION RECURSIVA QUE PASA
    - NO PODEMOS USAR CORCHETES PARA ACCESAR A LOS VALORES DE LA MATRIZ




*/

    // MIMSMA TAREA DE MULTIPLICACION DE MATRICES, DONDE EL USUARIO PUEDE MODIFICAR EL TAMAÑO DE LA MATRIZ
    // DECLARAR UN ARRAY UNIDIENSIONAL, BIDIMENSIONAL O TRIDIMENSIONAL
    // ¿ COMO INICIALIZO ESO?
    // ESTA EN EL CAPITULO DE PUNTEROS DEL LIRO
    // NO USAR NI MRD DE ARRAYS
    return 0;
}
