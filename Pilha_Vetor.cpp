#include<iostream>
//Biblioteca do Randomico//
#include<stdlib.h>
//Biblioteca para trabalhar com Pilhas//
#include<stack> 

using namespace std;

main(){
	
    int valor, t, x, y, aux;
    //Criando a Pilha//
    stack <int> PilhaVetor;
    
    cout <<"Digite quantos elementos tera a Pilha: \n";
    cin >> t;
    cout << "\n";
    
    for(valor=0;valor<t;valor++){
        int c = valor+rand();
        PilhaVetor.push(c);//isnerir os valores na pilha
    }
    
    int vetor[t];
    for(valor=0;valor<t;valor++){
    	//Mostra o ultimo elemento inserido na Pilha//
        vetor[valor] = PilhaVetor.top();
        //Retira o ultimo elemento inserido na Pilha//
        PilhaVetor.pop();
    }

    for(x=0;x<t;x++)
    for(y=0;y<t-1;y++){
        if(vetor[y]>vetor[y+1]){
            aux = vetor[y];
            vetor[y] = vetor[y+1];
            vetor[y+1] = aux;
        }
    }
    
    for(valor=0;valor<t;valor++)
    cout <<"vetor["<<valor<<"]="<<vetor[valor]<<"\n";
}
