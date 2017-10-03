#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void dibmatriz(int a,int b){
    int mat[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            mat[i][j]=1+(rand()%3);
        }
    }

    for(int i=0;i<a;i++){
        cout <<endl;
        for(int j=0;j<a;j++){
            cout << mat[i][j]<< " " ;
        }
    }
}

int main()
{
    cout << "Bienvenido al buscaminas !" << endl;
    cout << "Selecciona el nivel de dificultad: " << endl<< "Nivel 1 CASILLEROS DE 8X8" <<endl<<"Nivel 2 CASILLEROS DE 16X16" <<endl<<"Nivel 3 CASILLEROS DE 16X30" <<endl ;
    int nivel;
    cin  >> nivel;

     if (nivel==1){
        system("cls");
        int minas=10;
        dibmatriz(8,8);
    }
    if (nivel==2){
        system("cls");
        int minas=40;
        dibmatriz(16,16);
    }
    if (nivel==3){
        system("cls");
        int minas=99;
        dibmatriz(16,30);
    }

    char ch=0;
    cout << "Press Q to quit\n";
    do
    {
        ch = getch();

        switch(ch)
        {
            case 'W':
            case 'w':
                cout << "W was pressed \n";
                break;
            case 'A':
            case 'a':
                cout << "A was pressed \n";
                break;
            case 's':
            case 'S':
                cout << "S was pressed \n";
                break;
            case 'D':
            case 'd':
                cout << "D was pressed \n";
                break;

        }

    }while (ch != 'Q' && ch!='q');




    return 0;
}
