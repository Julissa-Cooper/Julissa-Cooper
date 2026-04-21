#include <iostream>
#include <windows.h>
using namespace std;


 int main()
{
cout <<"Ingrese el numero de consumo :";
      cin< 100;
       if ( kWh < 100 )
       {
        Total = consumo * descuento;
       
       }

        else if (consumo > = 100 < 300 )
        {
               d= *0.8  precio= 0.12
             subtotal = consumo * precio 
             descuento =  subtotal * d;
            Total = subtotal * d ;


        }

        
        else if (consumo > = 300 , < 500 )
        {
               d= *0.8  precio= 0.12
             subtotal = consumo * precio 
             descuento =  subtotal * d;
            Total = subtotal * d ;


        }
    
   else if ( d= *0.15  precio= 0.12 )
    {
     d= kwh *0.8;
        subtotal = consumo * precio 
             descuento =  subtotal * d;
      Total = subtotal -  descuento ;
    
       }
 else   {
    d= kwh *0.15;
      Total = subtotal -  descuento ;
    
       }
 else if (d= *0.25  precio= 0.12 )
 {
    d= kwh *0.25;
        subtotal = consumo * precio 
             descuento =  subtotal * d;
      Total = subtotal -  descuento ;
    
 }
 

         cout <<"El total a pagar es : $" <<Total;
 return 0;
       
}
