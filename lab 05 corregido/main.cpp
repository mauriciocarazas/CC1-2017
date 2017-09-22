#include <iostream>

using namespace std;
int suma(int a[4][4]){
    int sum=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            sum= sum +a[i][j];
        }
    }
    return sum;
}
int promedio (int x){
    int prom= x /16;
    return prom;
}
int mayor (int z[4][4]){
    int mayor=0;
    for (int i=0; i<4; i++){
         for (int j=0; j<4; j++){
            if (z[i][j]> mayor){
                mayor = z[i][j];
            }
        }
    }
    return mayor;
}
int menor (int p[4][4]){
    int menor=p[0][0];
    for (int i=0; i<4; i++){
         for (int j=0; j<4; j++){
            if (p[i][j]< menor){
                menor = p[i][j];
            }
        }
    }
    return menor;
}
int media (int p[4][4]){
    int mediana = p[2][4]+p[4][2];
    return mediana /2;
}

int main()
{
    //DEFINIMOS LA MATRIZ DE 3X3
    int mat[4][4]={{-4,5,1,1},{12,6,7,15},{23,9,8,0},{-2,0,8,1}};
    cout << "La Matriz de 4x4 es: " ;
    for (int i=0; i<4; i++){
            cout <<endl;
        for (int j=0; j<4; j++){
            cout<< mat[i][j]<< " " ;
        }
    }
    cout <<endl;

    cout << "La suma de la lista es: " << suma(mat) << endl;
    int s = suma(mat);

    cout << "El promedio de la lista es: " << promedio(s) << endl;

    cout << "El mayor de la lista es: " << mayor(mat) << endl;

    cout << "El menor de la lista es: " << menor(mat) << endl;

    cout << "La Mediana Aritmetica es: "<< media(mat) << endl;




     return 0;
}
