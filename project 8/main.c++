#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    
cout<< "Qual é a ordem da matriz?";
cin>>n;
 
int matriz[n][n];


 for (int i = 0; i <n; i++){ 
  for(int j= 0; j <n; j++){

 cout<<"Elemento"<<i<<j<<":";
 cin>>matriz[i][j];
       }
}
 cout<<"Diagonal Principal:\n";
 int valorNegativo;
 valorNegativo=0;

 for(int i = 0; i <n; i++){
    cout<<" "<<matriz[i][i];

    
    
}


for (int i = 0; i <n; i++)
    {for (int j = 0; j < n; j++)
    {
        if(matriz[i][j]<0){
       
            valorNegativo++;
          
        }
    }
    
    }

cout<<"\nQUANTIDADE DE NEGATIVOS= "<<valorNegativo;

 












    return 0;
}
