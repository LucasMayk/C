#include <iostream>
#include <stack> //Biblioteca da Pilha//

using namespace std;

int main() {
	
	stack <string> NomeProduto;
	stack <float> ValorProduto;
	stack <int> NotaFiscal;
	stack <int> ProdutoNF;
	
	int nf, x=0, qtd;
	string produto;
	float valor;
	
	cout << "Digite o numero da Nota Fiscal: \n";
	cin >> nf;
	NotaFiscal.push(nf);
	cout << "\n";
	
	while(x != 9) {
		cout << "Digite 1 para inserir produtos: \n";
		cout << "Digite 2 para inserir uma nova Nota Fiscal: \n";
		cout << "Digite 9 para sair: \n";
		cout << "\n";
		cout << "Opcao: ";
		cin >> x;
		cout << "\n";
		
		if(x == 1) {
			cout << "Digite a quantidade de produtos: \n";
			cin >> qtd;
			ProdutoNF.push(qtd);
			cout << "\n";
			for(int i=0; i<qtd; i++) {
				cout << "Digite o nome do produto: \n";
				cin >> produto;
				cout << "Digite o valor do produto: \n";
				cin >> valor;
				NomeProduto.push(produto);
				ValorProduto.push(valor);
				cout << "\n";
			}
		} else if(x ==2) {
			cout << "Digite o numero da Nota Fiscal: \n";
			cin >> nf;
			NotaFiscal.push(nf);
		}
	}
	
	int nota = NotaFiscal.size();
	for(int y=0; y<nota; y++) {
		cout << "Numero da Nota Fiscal: " << y+1 << "\n";
		int MostraProduto = ProdutoNF.top();
		ProdutoNF.top();
		for(int z=0; z<MostraProduto; z++) {
			cout << "Produto: " << NomeProduto.top() << " Valor: " << ValorProduto.top() << "\n";
			NomeProduto.pop();
			ValorProduto.pop();
		}
	}
	
	return 0;
}
