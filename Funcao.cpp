#include<iostream>

using namespace std;

//Criando a Função de Soma//
float somar(int a, int b){
    int c;
    c = a+b;
    return c;
}

main(){
    int vetor[5],x=0;
    
    cout << "Digite os elementos do Vetor: \n";
    
    while(x<5){
        cin >>vetor[x++];
    }
    
    cout << "\n";
    cout << "Valores do Vetor: \n";
    
    x=0;
    while(x<5){
    	//Chamando a Função e Somando mais 6//
        vetor[x] = somar(vetor[x],6);
        cout<< "v[" << x << "]=" << vetor[x] << "\n";
        x++;
    }
    
    cout << "\n";
    cout << "o valor de x = " << x;
}
