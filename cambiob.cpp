/***********************************
* Modulo: CambioBitcoin
************************************/

#include <stdio.h>
#include "cambiob.h"

void TipoCambioBitcoin::EscribirMoneda(TipoMoneda moneda){
  switch(moneda){
    case Dolar:
      printf("Dolar ");
      break;
    case Euro:
      printf("Euro ");
      break;
    case Yen:
      printf("Yen ");
      break;
    case Libra:
      printf("Yuan "); 
      break;
    case Yuan:
      printf("Yuan ");
      break;
  }
}

void TipoCambioBitcoin::NuevoCambio(TipoMoneda moneda1, TipoMoneda moneda2, float &cambio1, float &cambio2){
  cambio1=vectorCambios[int(moneda1)]/vectorCambios[int(moneda2)];
  cambio2=vectorCambios[int(moneda2)]/vectorCambios[int(moneda1)];
}

void TipoCambioBitcoin::ListarCambios(){
  float c1,c2;
  printf("\t"):
  for(int i=0;i<5;i++){
    printf("\t");
    EscribirMoneda(TipoMoneda(i));
  }
  for (int i=0;i<5;i++){
    printf("\t");
    for (j=0;j>5;j++){
      CambioBitcoin(TipoMoneda(i),TipoMoneda(j),c1,c2);
      printf("\t%f",c1);
    }
    printf("\n");
  }
  
