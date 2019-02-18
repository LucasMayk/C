#include <iostream>

using namespace std;

int main() {
	
	int linha, coluna, l, c;
	cout << "Montando sua Matriz: \n";
	cout << "\n";
	cout << "Digite a Linha da sua Matriz: \n";
	cin >> linha;
	cout << "Digite a Coluna da sua Matriz: \n";
	cin >> coluna;
	cout << "\n";
	
	for(l=0;l<linha;l++) {
		for(c=0;c<coluna;c++) {
			cout << "[" << l << c << "]\t";
		}
		cout << "\n";
	}
	
	cout << "\n";
	cout << "Digite os valores da sua Matriz: \n";
	cout << "\n";
	
	int M[l][c];
	
	for(l=linha-1;l>=0;l--) {
		for(c=coluna-1;c>=0;c--) {
			cout << "M[" << l << "][" << c << "]= ";
			cin >> M[l][c];
		}
	}
	
	cout << "\n";
	cout << "Diagonal Principal: \n";
	cout << "\n";

    for(l=0;l<linha;l++){
    	for(c=0;c<coluna;c++) {
    		if(l==c) {
    			cout << "M[" << l << "][" << c << "]= " << M[l][c];
			}
			cout << "\t";
		}
		cout << "\n";
	}
	
	cout << "Diagonal Secundaria: \n";
	cout << "\n";

    for(l=0;l<linha;l++){
    	for(c=0;c<coluna;c++) {
    		if(l==coluna -1 - c) {
    			cout << "M[" << l << "][" << c << "]= " << M[l][c];
			}
			cout << "\t";
		}
		cout << "\n";
	}
	return 0;
}
