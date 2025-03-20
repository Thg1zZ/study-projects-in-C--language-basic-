#include<bits/stdc++.h>

using namespace std;

int main(){
    
   int n;

   cout<<"Quantas pessoas serão digitadas?";
   cin>> n;
   
   double altura[n];
   string nome [n];
   char sexo[n];


   for (int i = 0; i<n; i++){
        
        cout<< "Digite o nome da pessoa: ";
        cin.ignore(INT_MAX,'\n');
        getline(cin, nome[i]);

        cout <<"Digite o genero da pessoa(F/M): ";
        cin>> sexo[i];

        cout <<"Digite a altura: ";
        cin >> altura[i];
    }

    double altura1;
    altura1=0;

    for (int i = 0; i <n; i++){
        if ( altura[i]>=altura1){
            altura1=altura[i];
        }

    }

    for (int i = 0; i <n; i++){
        if ( altura[i]==altura1)
        {
            cout<<fixed<<setprecision(2);
            cout << nome[i] << " do sexo " << sexo[i] 
              << " tem a maior altura: " << altura1 << "." << endl;
                 
        }

    }
    
    
   
   
   
   
   
   
   
    return 0;
}
