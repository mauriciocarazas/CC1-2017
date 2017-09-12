#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //Profe mi codigo recibe un valor de entrada, que corresponde al numero de filas a trabajr
    const unsigned n = 3;
    vector<vector<int> > output(n, vector<int>(1 << n));

    unsigned num_blanco = 1U << (n - 1);
    for(unsigned col = 0; col < n; ++col, num_blanco >>= 1U)
    {
        for(unsigned row = num_blanco; row < (1U << n); row += (num_blanco * 2))
        {
            fill_n(&output[col][row], num_blanco, 1);
        }
    }
    //IMPRIME LAS TABLAS DE VERDAD, MAS NO LAS OPERACIONES
    for(unsigned x = 0; x < (1 << n); ++x)
    {
        for(unsigned y = 0; y < n; ++y)
        {
            cout << output[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}
