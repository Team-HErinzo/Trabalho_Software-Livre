#include <iostream>
using namespace std;

bool EhPrimo(int valor){
    int divisores = 0;
    
    for(int i = 1; i <= valor; i++){
        
        if(valor % i == 0){
            divisores ++;
        }
    }
    
    if(divisores > 2){
        return false;
    }
    
    else {
        return true;
    }
}


int main(){
    int valor;
    cin >> valor;
    
    if(EhPrimo(valor)){
        cout << "Primo" << endl;
    }
    
    else{
        cout << "Não é primo" << endl;
    }

    return 0;
}
