#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    char operacao;
    cin >> n;

    vector<vector<int>> matriz1(n, vector<int>(n));
    vector<vector<int>> matriz2(n, vector<int>(n));
    vector<vector<int>> matriz_r(n, vector<int>(n, 0)); // inicia com 0

    // Leitura da matriz 1
    for (auto& linha : matriz1)
        for (int &x : linha)
            cin >> x;

    // Leitura da matriz 2
    for (auto& linha : matriz2)
        for (int &x : linha)
            cin >> x;

    cin >> operacao;

    // Adição
    if(operacao == 'a'){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                matriz_r[i][j] = matriz1[i][j] + matriz2[i][j];
    }

    // Impressão da matriz resultado
    for (auto& linha : matriz_r) {
        for (int x : linha)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
