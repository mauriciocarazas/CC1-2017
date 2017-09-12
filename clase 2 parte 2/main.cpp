
int main()
{
    //DEFINIMOS LA LISTA
    int len;
    cout << "Dame el tamanio de la lista" << endl;
    cin>>len;
    int arr[len];
    cout << "Dame una lista para "<< len <<" numeros" <<endl;
    for (int i=0;i<len;i++){cin >>arr[i];}

    //LA SUMA DE ELEMENTOS
    int sum=0;
    for (int i=0; i<len; i++){
        sum= sum +arr[i];
    }

    cout << "La suma de la lista es: " << sum << endl;

    // EL PROMEDIO DE ELEMENTOS
    int promedio = (sum/len);
    cout << "El promedio de la lista es: " << promedio << endl;

    //EL MAYOR DE LOS ELEMENTOS

    int mayor=0;
    for (int i=0; i<len; i++){
        if (arr[i]> mayor){
            mayor = arr[i];
        }
    }
    cout << "El mayor de la lista es: " << mayor << endl;
    //EL MENOR DE LOS ELEMENTOS

    int menor=arr[0];
    for (int i=0; i<len; i++){
        if (arr[i]< menor){
            menor = arr[i];
        }
    }
    cout << "El menor de la lista es: " << menor << endl;

    //LA MEDIA DE LOS ELEMENTOS

    double mediana = 0;
     if (len%2==0){
         mediana =(arr[(len/2)-1]+arr[(len/2)])/2.0 ;
        }
    else {
        mediana = arr[(len/2)];
        }
    cout << "La Mediana Aritmetica es: "<< mediana;

    return 0;
}
