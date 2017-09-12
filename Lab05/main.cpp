#include <iostream>

using namespace std;

int main(){
    //DEFINIMOS LA MATRIZ DE 3X3
    int mat[3][3]={{-4,5,1},{12,6,7},{23,8,0}};
    cout << "La Matriz de 3x3 es: " ;
    for (int i=0; i<3; i++){
            cout <<endl;
        for (int j=0; j<3; j++){
            cout<< mat[i][j]<< " " ;
        }
    }

    cout <<endl;



    //LA SUMA DE ELEMENTOS
    int sum=0;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            sum= sum +mat[i][j];
        }
    }
    cout << "La suma de la lista es: " << sum << endl;


    // EL PROMEDIO DE ELEMENTOS
    int promedio = (sum/9);
    cout << "El promedio de la lista es: " << promedio << endl;

    //EL MAYOR DE LOS ELEMENTOS
    int mayor=0;
    for (int i=0; i<3; i++){
         for (int j=0; j<3; j++){
            if (mat[i][j]> mayor){
                mayor = mat[i][j];
            }
        }
    }
    cout << "El mayor de la lista es: " << mayor << endl;

    //EL MENOR DE LOS ELEMENTOS
    int menor=mat[0][0];
    for (int i=0; i<3; i++){
         for (int j=0; j<3; j++){
            if (mat[i][j]< menor){
                menor = mat[i][j];
            }
        }
    }
    cout << "El menor de la lista es: " << menor << endl;

    //LA MEDIA DE LOS ELEMENTOS

    int mediana = mat[2][2];
    cout << "La Mediana Aritmetica es: "<< mediana;

    return 0;

}
