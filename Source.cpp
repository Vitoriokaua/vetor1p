#include <iostream>

using namespace std;

/*Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos: 
Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main() {
	int tam = 6;
	int* A = new int[tam] { 1, 0, 5, -2, -5, 7 };

	int soma=0;
	soma = A[0] + A[1] + A[5];
	cout << "a soma e: " << soma<< endl;

	A[4] = 100;


	for (int i = 0; i < tam; i++)
	{
		cout << A[i] << endl;
	}




}














