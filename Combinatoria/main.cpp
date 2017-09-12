#include <iostream>
using namespace std;
int main(){
    //cout << "Hola, yo soy la op. combinatoria y resuelvo ejercicios de N en K "<<endl<< "Por favor ingresa el numero de elementos de n"<<endl;

    int len = 5; // AQUI PONES EL TAMAÑO DE LA LISTA
    char arra[5] = {'a','b','c','d','e'}; // AQUI PONES LOS ELEMENTOS
    //ES PREDEFINIDO QUE VA A TRABAJAR EN GRUPOS DE 2 EN 2
    int counter =0;


    for (int i=0; i<len-1; i++){
        for (int j=i+1 ; j<len;j++)
            cout << arra[i]<< arra[j]<< endl;
            counter=counter+1;

    }

    cout << "el numero de combinaciones en grupos de dos es :" << counter;




 return 0;
}

/*
ESTE CODIGO TE LA RESPUESTA DIRECTAMENTE, POR EJEMPLO COMBINATORIA DE 4 EN 2 ES = 6
#include <iostream>
using namespace std;
int comb(int n, int k){
 if(k==0 || k==n){
  return 1;
 }else{
  return comb(n-1,k-1)+ comb(n-1,k);
 }
}
int main(){
 cout<<" nCk "<<endl;
 cout<<"Ingrese el n: "<<endl;
 cin>>n;
 cout<<"Ingrese el k: "<<endl;
 cin>>k;
 cout<<"El combinatorio es: "<<comb(n,k);
}
return 0;
 */
