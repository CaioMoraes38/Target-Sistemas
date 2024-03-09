#include <iostream>

using namespace std;

bool verificaFibonacci(int N, int a = 0, int b = 1) {
   
    if (N == b) {
        return true;
    }
   
    else if (N > b) {
        return verificaFibonacci(N, b, a + b);
    }
   
    else {
        return false;
    }
}

int main() {
	setlocale(LC_ALL,"portuguese");
	
    int N;
    cout << "Informe um numero: ";
    cin >> N;

    if (verificaFibonacci(N)) {
        cout << "O numero " << N << " pertence a sequencia de Fibonacci." << endl;
    } else {
        cout << "O numero " << N << " nao pertence a sequencia de Fibonacci." <<endl;
    }

    return 0;
}

