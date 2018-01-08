#include <iostream>
#include <limits>
#include <string>

using namespace std;

void WczytajDane(string & imie, string & nazwisko, int & wiek, int i)
{
    cout << "Podaj imie osoby nr " << i + 1 << ": ";
    cin >> imie;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Podaj nazwisko osoby nr " << i + 1 << ": ";
    cin >> nazwisko;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do
    {
        cout << "Podaj wiek osoby nr " << i + 1 << ": ";
        cin >> wiek;
        if (cin.good() == false)
        {
            cout << "Blad wczytywania danych. Sprobuj ponownie." << endl;
            wiek = 0;
        }
        else
        {
            if (wiek < 1 || wiek > 150)
            cout << "Blad. Wiek nie moze wynosic " << wiek << ". Sprobuj ponownie" << endl;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while (wiek < 1 || wiek > 150);

}

void WypiszDane(string imie, string nazwisko, int wiek, int i)
{
    cout << "Imie osoby nr " << i + 1 << ": " << imie << endl;
    cout << "Nazwisko osoby nr " << i + 1 << ": " << nazwisko << endl;
    cout << "Wiek osoby nr " << i + 1 << ": " << wiek << endl;
}

void WczytajDaneGetLine(string & imie, string & nazwisko, int & wiek, int i)
{
    cout << "Podaj imie osoby nr " << i + 1 << ": ";
    getline(cin, imie);
    cout << "Podaj nazwisko osoby nr " << i + 1 << ": ";
    getline(cin, nazwisko);
    do
    {
        cout << "Podaj wiek osoby nr " << i + 1 << ": ";
        cin >> wiek;
        if (cin.good() == false)
        {
            cout << "Blad wczytywania danych. Sprobuj ponownie." << endl;
            wiek = 0;
        }
        else
        {
            if (wiek < 1 || wiek > 150)
            cout << "Blad. Wiek nie moze wynosic " << wiek << ". Sprobuj ponownie" << endl;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while (wiek < 1 || wiek > 150);

}


void WypiszDaneGetLine(string imie, string nazwisko, int wiek, int i)
{
    cout << "Imie osoby nr " << i + 1 << ": " << imie << endl;
    cout << "Nazwisko osoby nr " << i + 1 << ": " << nazwisko << endl;
    cout << "Wiek osoby nr " << i + 1 << ": " << wiek << endl;
}

int main()
{
    string Imie[2];
    string Nazwisko[2];
    int Wiek[2];

    for (int I = 0; I < 2; I++)
    {
        WczytajDane(Imie[ I ], Nazwisko[ I ], Wiek[ I ], I);
    }

      for (int I = 0; I < 2; I++)
    {
        WypiszDane(Imie[ I ], Nazwisko[ I ], Wiek[ I ], I);
    }

        for (int I = 0; I < 2; I++)
    {
        WczytajDaneGetLine(Imie[ I ], Nazwisko[ I ], Wiek[ I ], I);
    }


          for (int I = 0; I < 2; I++)
    {
        WypiszDaneGetLine(Imie[ I ], Nazwisko[ I ], Wiek[ I ], I);
    }

    return 0;
}
