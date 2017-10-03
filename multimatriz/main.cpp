#include <iostream>
#include <stdlib.h> //PARA ASIGNAR Y LIBERAR ESPACIO DE MEMORIA
using namespace std;


int **puntero_matriz1,**puntero_matriz2,**puntero_matriz3,nFilas,nCol; //CREAMOS VARIABLES GLOBALES PARA N FILAS, COLUMNAS Y LAS MATRICES...
void PedirDatos();
/*void MultiMatriz(int **puntero_matriz1, int puntero_matriz2 , nFilas, nCol){
    for (i=0;i<nFilas;i++){
        for (j=0;j<nCol;j++){
            *(*(puntero_matriz3+i)+j)=0;
            for(k=0;k<(nFilas*nCol);k++){
                *(*(puntero_matriz3+i)+j)=(*(*(puntero_matriz3+i)+j))+ ((*(*(puntero_matriz1+i)+j))*(*(*(puntero_matriz2+i)+j)))
            }
        }
    }
}*/
/*void mostrarMatrizResultante(puntero_matriz1,nFilas,nCol){
    cout << "\n La multiplicacion de las dos matrices es: \n"
    for (i=0;i<nFilas;i++){
        for (j=0;j<nCol;j++){
            cout << *(*(puntero_matriz1+i)+j) << " ";
        }
    cout << "\n";
    }
}
*/

int main()
{
    PedirDatos();
/*    MultiMatriz(puntero_matriz1,puntero_matriz2,nFilas,nCol);
    mostrarMatrizResultante(puntero_matriz1,nFilas,nCol);
*/
    return 0;
}

void PedirDatos(){
    cout << "Digite el numero de Filas: "  ;
    cin >> nFilas;
    cout << "Digite el numero de Columnas: "  ;
    cin >> nCol;
    ///Reservando memoria para las primer matriz
    puntero_matriz1 = new int*[nFilas];
    for (int i=0; i<nFilas;i++){
        puntero_matriz1=new int *[nCol];
    }
    cout << "\n Digite los numero para la primera matriz: \n ";
    for (int i=0; i<nFilas;i++){ // cuenta las filas
        for (int j=0 ; j<nCol; j++){ // bucle anidado para que cuente las columna
            cout << "Digite numero para ["<<i<<"]["<<j<<"] "; // pedimos el numero y le indicamos en q posicion esta
            cin >> *(*(puntero_matriz1+i)+j);   /// es como crea un puntero_matriz 1 [i][j]
        }
    }
    ///Reservando memoria para las segunda matriz  (COPY --- PASTE) DE ARRIBA
    puntero_matriz2 = new int*[nFilas];
    for (int i=0; i<nFilas;i++){
        puntero_matriz2=new int *[nCol];
    }
    cout << "Digite los numero para la segunda matriz: \n ";
    for (int i=0; i<nFilas;i++){
        for (int j=0 ; j<nCol; j++){
            cout << "Digite numero para ["<<i<<"]["<<j<<"] ";
            cin >> *(*(puntero_matriz2+i)+j);
        }
    }
    puntero_matriz3 = new int*[nFilas];
    for (int i=0; i<nFilas;i++){
        puntero_matriz3=new int *[nCol];
    }
}
