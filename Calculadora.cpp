#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

float num1, num2, operador, potencia, percentual;

int main() {
	
	//Codigo para aceita acentos.
	setlocale(LC_ALL, "Portuguese");
	//menu inicial
	cout << "CALCULADORA DE DOIS VALORES" << "\n";
	cout << "\n";
	//Codigo para recebe um valor
	cout << "Digite o primeiro número: \n";
	cin >> num1;
	cout << "\n";
	//Codigo para mostra as opções dos operadores
	cout << "OPÇÃO DE OPERADORES:" << "\n";
	cout << "1 = soma" << "\n" << "2 = subtração" << "\n" << "3 = divisão" << "\n" << "4 = multiplicação" << "\n" << "5 = raiz quadrada" << "\n"
	<< "6 = potenciação" << "\n" << "7 = percentual" << "\n" << "8 = inversão de sinais" << "\n" << "Digite qual número você quer: \n";
	//Codigo para recebe valor desejado pelo usuario
	cin >> operador;
	cout << "\n";
	//Codigo para recebe outro valor
	cout << "Digite o secundo número: \n";
	cin >> num2;	
	cout << "\n";
	
	// if do soma
	if(operador == 1){
		cout << "Sua soma é: " << num1 + num2;
	}
	//if da subtração
	  if(operador == 2){
		  cout << "Sua subtração é: " << num1 - num2;
	}
	//if da divisão
	    if(operador == 3){
		    cout << "Sua divisão é: " << num1 / num2;
	}
	//if da multiplicação
		  if(operador == 4){
		      cout << "Sua multiplicação é: " << num1 * num2;
	}
	//if da raiz quadrada
		    if(operador == 5){
		        cout << "A raiz quadrada de " << num1 << " é: " << sqrt(num1) << " , " << " e de " << num2 << " é: " << sqrt(num2);
	}
	//if da potenciação
			  if(operador == 6){
			  	  cout << "Digite sua potencia: ";
			  	  cin >> potencia;
			  	  cout << "\n";
		          cout << "A potenciação de " << num1 << " é: " << pow(num1,potencia) << " , " << " e de " << num2 << " é: " << pow(num2,potencia);
	}
	//if do percentual
			    if(operador == 7){
			  	    cout << "Digite seu percentual: ";
			  	    cin >> percentual;
			  	    cout << "\n";
		            cout << "Seu pencentual de " << num1 << " é: " << (num1*percentual)/100 << " , " << " e de " << num2 << " é: " << (num2*percentual)/100;
	}
	//if da inversão de sinais
		          if(operador == 8){
		              if(num1 > 0 && num2 > 0){
		              	cout << "A inversão de sinais de " << num1 << " é: " << num1*(-1) << " e de " << num2 << " é: " << num2*(-1);
					  }
					  else{
					  	cout << "A inversão de sinais de " << num1 << " é: " << num1*(-1) << " e de " << num2 << " é: " << num2*(-1);
					  }
	}
	
	
	return 0;
}
