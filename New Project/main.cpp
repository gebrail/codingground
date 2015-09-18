#include <iostream>

using namespace std;

int main(void)
{
  float n1,n2,n3,n4,n5,resultado,acu;
   cout << "\n Introduzca la primera nota : "; 
   cin>>n1;
      cout << "\n Introduzca la segunda nota : "; 
   cin>>n2;
      cout << "\n Introduzca la tercera nota : "; 
   cin>>n3;
      cout << "\n Introduzca la cuarta nota : "; 
   cin>>n4;
      cout << "\n Introduzca la quinta nota : "; 
   cin>>n5;
   
   acu=n1+n2+n3+n4+n5;
   resultado=acu/5;
   if(resultado>3.0 && resultado<3.5){
       cout << "\n Aprobo con baja nota : "<<resultado; 
       
   }
      if(resultado>=3.5 && resultado<4.0){
       cout << "\n Aprobo con nota aceptable : "<<resultado; 
       
   }
         if(resultado>=4.0 && resultado<=5.0){
       cout << "\n Aprobo Excelentemente : "<<resultado; 
       
   }
         if(resultado>0.0 && resultado<3.0){
       cout << "\n Reprobo xD LOl : " <<resultado <<"\n"; 
       
   }
   
   return 0;
}

