#include <iostream>
using namespace std;
 main ()

{
    setlocale ( LC_ALL, "Portuguese" );
    system ("cls");
    
    // quantidadede presta��es pagas
    // e o valor atual da presta��o
    // escreva um algoritmo que determine o total pago pelo consorciado e o saldo devedor.

    float valorpresta, atualprestapaga, totalpresta,totalpago, totalfatura, devedorsaldo;

    cout << " Fale o total de presta��es pagas " << endl;
    cin >> valorpresta;
        cout << " Fale o valor atual de sua presta��o " << endl;
        cin >> atualprestapaga;
            cout << " fale o total de presta��es  " << endl;
            cin >> totalpresta;

     totalpago = valorpresta * atualprestapaga;
     totalfatura = valorpresta * totalpresta;
     devedorsaldo = totalfatura - totalpago;

         cout << " O saldo devedor � " << devedorsaldo << endl;



     
    
     
      



     

    
    
    




   


    












}