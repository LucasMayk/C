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
	cout << "Digite o primeiro n�mero: \n";
	cin >> num1;
	cout << "\n";
	//Codigo para mostra as op��es dos operadores
	cout << "OP��O DE OPERADORES:" << "\n";
	cout << "1 = soma" << "\n" << "2 = subtra��o" << "\n" << "3 = divis�o" << "\n" << "4 = multiplica��o" << "\n" << "5 = raiz quadrada" << "\n"
	<< "6 = potencia��o" << "\n" << "7 = percentual" << "\n" << "8 = invers�o de sinais" << "\n" << "Digite qual n�mero voc� quer: \n";
	//Codigo para recebe valor desejado pelo usuario
	cin >> operador;
	cout << "\n";
	//Codigo para recebe outro valor
	cout << "Digite o secundo n�mero: \n";
	cin >> num2;	
	cout << "\n";
	
	// if do soma
	if(operador == 1){
		cout << "Sua soma �: " << num1 + num2;
	}
	//if da subtra��o
	  if(operador == 2){
		  cout << "Sua subtra��o �: " << num1 - num2;
	}
	//if da divis�o
	    if(operador == 3){
		    cout << "Sua divis�o �: " << num1 / num2;
	}
	//if da multiplica��o
		  if(operador == 4){
		      cout << "Sua multiplica��o �: " << num1 * num2;
	}
	//if da raiz quadrada
		    if(operador == 5){
		        cout << "A raiz quadrada de " << num1 << " �: " << sqrt(num1) << " , " << " e de " << num2 << " �: " << sqrt(num2);
	}
	//if da potencia��o
			  if(operador == 6){
			  	  cout << "Digite sua potencia: ";
			  	  cin >> potencia;
			  	  cout << "\n";
		          cout << "A potencia��o de " << num1 << " �: " << pow(num1,potencia) << " , " << " e de " << num2 << " �: " << pow(num2,potencia);
	}
	//if do percentual
			    if(operador == 7){
			  	    cout << "Digite seu percentual: ";
			  	    cin >> percentual;
			  	    cout << "\n";
		            cout << "Seu pencentual de " << num1 << " �: " << (num1*percentual)/100 << " , " << " e de " << num2 << " �: " << (num2*percentual)/100;
	}
	//if da invers�o de sinais
		          if(operador == 8){
		              if(num1 > 0 && num2 > 0){
		              	cout << "A invers�o de sinais de " << num1 << " �: " << num1*(-1) << " e de " << num2 << " �: " << num2*(-1);
					  }
					  else{
					  	cout << "A invers�o de sinais de " << num1 << " �: " << num1*(-1) << " e de " << num2 << " �: " << num2*(-1);
					  }
	}
	
	
	return 0;
}
