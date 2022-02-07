#include<iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
    cout <<"********************************************" << endl;
    cout <<"**************JOGO DO JOKENPO***************" << endl;
    cout <<"********************************************" << endl;

//////////***Inicio***//////////

   /* cout <<"Escolha o modo de jogo"<< endl;
    cout <<"Melhor de 3 (3) ou Jogo �nico (1)" << endl;
    cout <<"Digite 3 ou 1" << endl;
    
    int modo; 
    bool melhorDeTres;
    cin >> modo;

    if (modo == 3){
       cout  <<"Modo de jogo: TRES NEGUNHAS" <<endl;
       melhorDeTres = true; 
    }

    else{
      cout <<"Modo de jogo: MORTE SUBITA"<< endl;
    } */

    char escolha; //escolha do jogador
    int escolhaNPC; //valor aleatório entre 0 e 3
    char escolhaNPCPLT; //escolha do NPC entre Pedra Papel ou Tesoura
    char escolhaNPCPLTDiga; //o que o Programa vai exbiri como reposta do computadpr
    srand(time(NULL)); //a semente dos números aleat�rios, a partir de um contador de tempo


    //if (melhorDeTres) {
       cout <<"Escolha PEDRA (P), PAPEL (L), ou Tesoura (T)" << endl;
       cout << "Digite: P, L ou T" << endl;
      cin >> escolha;
      escolhaNPC = rand() % 3;


      
          if (escolhaNPC == 0){
            escolhaNPCPLT = 'P';
           cout <<"O Computador escolheu PEDRA" << endl;
          } 
          
          else if (escolhaNPC == 1){
            escolhaNPCPLT = 'L';
          cout <<"O Computador escolheu PAPEL" << endl;
          } 
          
          else if (escolhaNPC == 2){
            escolhaNPCPLT = 'T';
          cout <<"O Computador escolheu TESOURA" << endl;
          } 


          ///testes de comparação
          if (escolha == escolhaNPCPLT){
            cout <<"O jogo empatou" << endl;
            cout <<endl;
            return main();
          }
          else if ((escolha = 'P') && (escolhaNPCPLT = 'L')){
            cout <<"O Computador ganhou" << endl;
          }

          else if ((escolha = 'P') && (escolhaNPCPLT = 'T')){
            cout <<"Voce ganhou!!!" << endl;
          }

          else if ((escolha = 'L') && (escolhaNPCPLT = 'P')){
            cout <<"Voce ganhou!!!" << endl;
          }

          else if ((escolha = 'L') && (escolhaNPCPLT = 'T')){
            cout <<"O Computador ganhou" << endl;
          }

          else if ((escolha = 'T') && (escolhaNPCPLT = 'P')){
            cout <<"Voce ganhou!!!" << endl;
          }

          else if ((escolha = 'T') && (escolhaNPCPLT = 'L')){
            cout <<"O Computador ganhou" << endl;
          }

        cout <<"Fim de jogo";


    

}
