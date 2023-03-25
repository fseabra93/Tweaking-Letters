#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void tweakLetters(char pal[], int arr[], int tam){

  for (int i=0; i<tam; i++){
    pal[i] += arr[i];
  }

  cout << pal << endl;
}

int main() {
  char palavra[20];
  cout << "Digite a palavra: ";
  cin.getline(palavra, 20);

  int tam;
  tam = strlen(palavra);
  
  int vet[tam];


  for (int i=0; i<tam; i++){
    cin >> vet[i];
  }

  tweakLetters(palavra, vet, tam);
}