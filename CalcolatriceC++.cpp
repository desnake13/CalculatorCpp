

#include <iostream>
#include <cmath>
using namespace std;

class Calcolatrice {
    public:  

        double num1, num2;

        // funzione per l'inserimento dei valori
        void InputValori() {
            cout << "Inserisci il primo numero: ";
            cin >> num1;
            cout << "Inserisci il secondo numero: ";
            cin >> num2;
        };

        // funzione per la somma
        double Somma() {
            return num1 + num2;
        };

        // funzione per la sottrazione
        double Sottrazione() {
            return num1 - num2;
        };

        // funzione per la moltiplicazione
        double Moltiplicazione() {
            return num1 * num2;
        };

        // funzione per la divisione
        double Divisione() {
            if (num2 != 0) {
                return num1 / num2;
            }
            else {
                cout << "Non puoi dividere per 0";
            }
        }; 
};      



int main()
{
    Calcolatrice Calcolo1;

    double risultato;
    char operatore;

    cout << "Scegli un operatore +,-,*,/  :  ";
    cin >> operatore;

    switch (operatore) {
        case '+':
            Calcolo1.InputValori();
            risultato = Calcolo1.Somma();
            break;
        case '-':
            Calcolo1.InputValori();
            risultato = Calcolo1.Sottrazione();
            break;
        case '*':
            Calcolo1.InputValori();
            risultato = Calcolo1.Moltiplicazione();
            break;
        case '/':
            Calcolo1.InputValori();
            risultato = Calcolo1.Divisione();
            break;
        default:
            cout << "Operatore non valido.";

    }

    cout << "Risultato = " << risultato;


    return 0;
}

