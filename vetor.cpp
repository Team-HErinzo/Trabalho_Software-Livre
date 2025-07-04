#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    
    vector<int> lista_numerica(tamanho);
    int numero, maior;
    
    for(int i = 0; i < tamanho; i++){
        cin >> numero;
        lista_numerica[i] = numero;
        
        if(i == 0){
            maior = numero;
        }
        
        else if(numero > maior){
            maior = numero;
        }
    }
    
    cout << maior << endl;
    
    return 0;
}
