#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double idamedia;

    cout << "Dados da primeira pessoa:" << endl;

    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:" << endl;

    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    idamedia = (double)(idade1 + idade2) / 2;

    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << idamedia << " anos." << endl;

    return 0;
}
