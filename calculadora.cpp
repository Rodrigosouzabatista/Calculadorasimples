#include <iostream>
#include <cmath>
using namespace std;

double soma(double a, double b) {
    return a + b;
}

double mult(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    return a / b;
}
double subt(double a, double b){
	return a - b;

}
int main() {
    int cod = 0;
    
    double numA = 0.0, numB = 0.0;
    
    cout << "OPERACOES\n[1] SOMA\n[2] SUBTRACAO\n[3] MULTIPLICACAO\n[4] DIVISAO\n[5] POTENCIA\n" << endl;
    cout << "Escolha uma operacao: ";
    cin >> cod;
    
    cout << "Digite o primeiro numero: ";
    cin >> numA;
    cout << "Digite o segundo numero: ";
    cin >> numB;
    
    switch(cod) {
        case 1:         // soma
            cout << "SOMA: "<< soma(numA, numB) << endl;
            break;
        case 2:         // subtra��o
            cout << "SUBTRA��O: " << soma(numA, -numB) << endl;
            break;
        case 3:         // multiplica��o
            cout << "MULTIPLICA��O: " << mult(numA, numB) << endl; 
            break;
        case 4:
            cout << "DIVIS�O: " << div(numA, numB) << endl;
            break;
        case 5:
            cout << "POT�NCIA: " << pow(numA, numB) << endl;
        
        default:
            cout << "Digite uma operacao valida" << endl;
    }
    
    return 0;
}
