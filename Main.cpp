#include <iostream>

using namespace std;


int main(){

   string aluno1;
   string aluno2;
   string aluno3;
   
   float nota1; 
   float nota2; 
   float nota3; 
   float media1;
   
   float nota4; 
   float nota5; 
   float nota6; 
   float media2;
    
   float nota7; 
   float nota8; 
   float nota9; 
   float media3;
 
    cout <<"Nome completo dos alunos: "<< endl;
    
    cout <<"Aluno1:  ";
    cin >> aluno1;
    
    cout <<"Digite as 3 notas para calculo da media aluno1: "<< endl;
    
    cout <<"N1: ";
    cin >> nota1;
    
    cout <<"N2: ";
    cin >> nota2;

    cout <<"N3: ";
    cin >> nota3;
    
    cout <<"Aluno2:  ";
    cin >> aluno2;
    cout <<"Digite as 3 notas para calculo da media aluno2: "<< endl;
    
    cout <<"N1: ";
    cin >> nota4;
    
    cout <<"N2: ";
    cin >> nota5;

    cout <<"N3: ";
    cin >> nota6;
    
    cout <<"Aluno3: ";
    cin >> aluno3;
    cout <<"Digite as 3 notas para calculo da media aluno2:   "<< endl;
    
    cout <<"N1: ";
    cin >> nota7;
    
    cout <<"N2: ";
    cin >> nota8;

    cout <<"N3: ";
    cin >> nota9;
     
    
    media1 = (nota1 + nota2 + nota3) / 3;
    media2 = (nota4 + nota5 + nota6) / 3;
    media3 = (nota7 + nota8 + nota9) / 3;
    
    
    cout << aluno1<< " Sua média de notas é: "<< media1 << endl;
    
    cout << aluno2<< " Sua média de notas é: "<< media2 << endl;
    
    cout << aluno3<< " Sua média de notas é: "<< media3 << endl;
    
    if(media1 > media2 && media3 ){
     cout << aluno1<< " Tem a maior nota:  "<< media1 << endl;   
    }
    
    if(media2 > media1 && media3 ){
     cout << aluno2<< " Tem a maior nota:  "<< media2 << endl;   
    }
    
    if(media3 > media1 && media3 ){
     cout << aluno3<< " Tem a maior nota:  "<< media3 << endl;   
    }
   
   


    return 0;
}
