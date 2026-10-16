#include <iostream>
using namespace std;

int main() {

double a,b;
int izbira;

cout << "*****SUPER KALKULATOR*****" << endl;
cout << "Sestevanje" << endl;
cout << "Odstevanje" << endl;
cout << "Mnozenje" << endl;

cout << "Izberi operacijo: ";
cin >> izbira;

cout << "Vnesi prvo število: ";
cin >> a;

cout << "Vnesi drugo število: ";
cin >> b;

cout << endl;

switch(izbira){
    case 1:
    cout << "Rezultat: " << a+b << endl;
    break;

    case 2:
    cout << "Rezultat: " << a-b << endl;
    break;

    case 3:
    cout << "Rezultat: " << a*b << endl;
    break;

    default:
    cout << "Napacna izbira" << endl;

}

    return 0;
}