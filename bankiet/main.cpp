#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int maxa = 100*1000+10;


int lewo[maxa]; // lewo[i] = kogo chce miec osoba i po lewej stronie
bool sprawdzony[maxa];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
    cin >> lewo[i];
    }

    int stoly = 0;
    for (int i = 1; i <= n; i++) {
        if (sprawdzony[i] == false){  // jezeli nie sprawdzilismy jeszcze osoby o indeksie i
            int indeks = i;
            while (sprawdzony[indeks] == false) {// chodzimy po sasiadach “lewo”, dopoki nie zrobimy cyklu
                sprawdzony[indeks] = true;
                indeks = lewo[indeks];  //przechodzimy na indeks sasiada
            }
            // mamy o jeden stol wiecej
            stoly++;
        }
    }

    cout << stoly <<endl;
    return 0;
}

