#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    string v[5], w[5];
    double x[10], y[10];
    int i, p, d;

    i = 0;
    while (i < 5) {
        v[0] = "amy";
        v[1] = "michele";
        v[2] = "sergio";
        v[3] = "luca";
        v[4] = "gianni";
        cout << "vettore V cella numero " << i + 1 << ":" << v[i] << endl;
        i = i + 1;
    }
    i = 0;
    while (i < 5) {
        w[0] = "Antonio";
        w[1] = "daniele";
        w[2] = "gianvito";
        w[3] = "mariapia";
        w[4] = "daiana";
        cout << "vettore w cella numero " << i + 1 << ":" << w[i] << endl;
        i = i + 1;
    }
    i = 1;
    while (i < 10) {
        x[i] = i;
        if (x[i] % 2 == 0) {
            p = (int) x[i];
            cout << "vettore x con indice pari cella numero " << i << ":" << p << endl;
            cout << "vettore x con valore pari cella numero " << i << ":" << p << endl;
        } else {
            d = (int) x[i];
            cout << "vettore x con indice dispari cella numero " << i << ":" << d << endl;
        }
        i = i + 1;
    }
    while (i * 2 <= 10) {
        y[i] = i * 2;
        cout << "vettore y cella numero " << i + 1 << ":" << y[i] << endl;
        i = i + 1;
    }
    return 0;
}
