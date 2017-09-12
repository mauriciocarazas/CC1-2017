#include <iostream>

using namespace std;

int main()
{
    cout << "Hola, dime por favor a que hora llegaste a el trabajo en formato horas - minutos - segundos(24 horas)" << endl;
    int he;
    int me;
    int se;
    string st;
    string mt;
    cout << "Dame las horas" << endl;
    cin >> he ;
    cout << "Dame los minutos" << endl;
    cin >> me ;
    cout << "Dame los segundos" << endl;
    cin >> se ;
    /*if (se==0){
        string st = "00";
        /*else:
                se =st;
    }
    if (me==0){
        string mt = "00";
    }*/
    //cout << "Tu hora de entrada es:" <<he<<":"<<me<<":"<<se;
    cout << "Ahora dime la hora a la que sales en formato horas - minutos - segundos(24 horas)" << endl;
    int hs;
    int ms;
    int ss;
    cout << "Dame las horas" << endl;
    cin >> hs ;
    cout << "Dame los minutos" << endl;
    cin >> ms ;
    cout << "Dame los segundos" << endl;
    cin >> ss ;

    int horas = hs-he;
    int minutos = ms-me;
    int segundos = ss-se;

    if (segundos < 0){
        segundos=segundos+60;
        minutos=minutos-1;
    }
    if (minutos < 0){
        minutos=minutos+60;
        horas=horas-1;
    }
    cout << "El tiempo que pasas en el trabajo es " << horas << ":" << minutos << ":"  << segundos;

    return 0;
}
