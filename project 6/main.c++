#include <bits/stdc++.h>

using namespace std;

int main(){
  
    int x, y, troca,soma;
    
    cout<<"Digite dois numeros:";
    cin>> x >> y ;
  
    troca=0;

    if(y<x){
      troca=y;
      y=x;
      x=troca;

    }
      

    soma=0;

    for(int i=x+1;i <y; i++){
        if(i%2!=0){
         soma=soma+i;
        }

    }

    cout<<"Soma Dos Impares: "<<soma << endl;




    return 0;
}
