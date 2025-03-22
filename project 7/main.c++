#include<bits/stdc++.h>

using namespace std;

int main(){
    
   int n;

   cout<<"Quantas pessoas serão digitadas?";
   cin>> n;
   
   double altura[n], alturaMedia, altura1, porcetageMenor;
   string nome [n];
   int idade [n], menor;


   for (int i = 0; i<n; i++){

    cout<<"Dados da "<<i+1<<" a pessoa "<< endl;
        
        cout<< "Digite o nome da pessoa: ";
        cin.ignore(INT_MAX,'\n');
        getline(cin, nome[i]);

        cout <<"Digite a idade da pessoa: ";
        cin>> idade[i];

        cout <<"Digite a altura: ";
        cin >> altura[i];
    }

    altura1=0;

    for (int i = 0; i <n; i++){
          altura1=altura1+altura[i];

    }

    alturaMedia=altura1/n;
    cout<<fixed<<setprecision(2);
    cout<<"Altura media: "<< alturaMedia<< endl;
     menor=0;
    
     for (int i = 0; i <n; i++){
        if ( idade[i]<16)
        {
          menor++;
                 
        }
    }

    porcetageMenor=(menor * 100)/n;
    
    cout<<fixed<<setprecision(1);
    cout<<"Pessoas com menos de 16 anos:"<<porcetageMenor<<"%"<<endl;

   for (int i = 0; i <n; i++){
    if ( idade[i]<16)
    {
      cout<<nome[i]<< endl;
             
    }
}
    
    
   
   
   
   
   
   
   
    return 0;
}
