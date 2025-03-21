#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x, y;
    double area, perimetro, diagonal;
    x=0, y=0;

    
cout<<"Digite o valor da base de um retangulo: ";
cin>>x;

cout<<"Digite o valor da altura de um retangulo: ";
cin>>y;


area=(double) x*y;

perimetro= 2*(y+x);

diagonal=sqrt(pow(x,2)+ pow(y,2));




cout<<fixed<<setprecision(2);
cout<<"Valor da area: " <<area <<endl;

cout<<fixed<<setprecision(4);
cout << "Valor do Petrimetro: "<<perimetro <<endl; 

cout<<"Valor da Diagonal: "<< diagonal << endl;

    return 0;
}
