#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

ofstream wyjscie;

void wypiszJSON(){
    //wypis liczby losowej
    int y;
    y = rand();
    cout << y;
    wyjscie << " [  \n { \n "liczba losowa" : " " << y;

     }

void wypiszLosowyJSON (int max){
    //wypis liczby losowej od 0 do maxa do jsona
    int x;
    x = rand()%max + 1;
    cout << x;
    wyjscie >>" [ \n { \n "liczba losowa" :" << x;
}

int main(){

int max;

    wyjscie.open("wyj.json");

    cout << "podaj liczbe max: ";
        cin >> max;

    wypiszJSON();
    wypiszLosowyJSON(max);

    wyjscie.close();

    return 0;

}
