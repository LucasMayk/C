#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main(){
	
    int a;
    //Criando o Ponteiro inteiro//
    int *ponteiro;
    
    cout << "Digite o valor de A: \n";
    cin >>a;
    cout << "\n";
    
    cout << "O valor do Ponteiro = " << ponteiro << "\n";
    cout << "O valor do endereco de A = " << ponteiro;
    //Mostrando o Ponteiro//
    ponteiro = &a;
    //Convertendo o valor do Ponteiro pra 10//
    *ponteiro = 10;
    cout <<"\nO valor de ponteiro = " << ponteiro;
    cout <<"\nO valor de A = " << a;
    int *p = ponteiro;
    cout <<"\nO valor de p = " <<p;
}
