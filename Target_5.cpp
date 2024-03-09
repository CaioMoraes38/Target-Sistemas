#include<iostream>
#include<cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char *Frase;
    int tamanho;

    cout << "Digite uma frase: " << endl;
    
    Frase = (char *) malloc (sizeof(char) * 50);
    cin.getline(Frase, 50);

    tamanho = strlen(Frase);
    
    cout << "Frase invertida: ";
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << Frase[i];
    }
    cout << endl;
    free(Frase); 
    return 0;
}

