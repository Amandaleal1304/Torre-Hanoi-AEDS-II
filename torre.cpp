#include <iostream>
#include <windows.h>
#include <ctime>
#include <math.h>

using namespace std;

void torre_hanoi(int n, char origem, char destino, char auxiliar)
{
    if (n == 1)
    {
        cout << "Mover disco " << n << " de " << origem << " para " << destino << endl;
    }
    else
    {
        torre_hanoi(n - 1, origem, auxiliar, destino);
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    srand(time(NULL));

    int discos = 10;
    int resultado = pow(2, discos) - 1;

    double inicio = clock();
    torre_hanoi(discos, 'A', 'C', 'B'); // Origem | Auxiliar | Destino
    // A é a origem da torre 1
    // B é a torre auxiliar (Torre 2)
    // C é a torre destino (Torre 3)
    double fim = clock();

    cout << "Numero de movimentos: " << resultado << endl;
    cout << "Tempo de execucao: " << (fim - inicio) / CLOCKS_PER_SEC << " segundos" << endl;

    cout << endl
         << endl;
    return 0;
}