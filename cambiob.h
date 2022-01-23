/*****************************************************
* Interfaz de Módulo: CambioBitcoin
*****************************************************/

#pragma once

typedef enum TipoMoneda{Dolar,Euro,Yen,Libra,Yuan};
typedef float TipoVectorCambios[5];
typedef struct TipoCambioBitcoin{
  void NuevoCambio(TipoMoneda moneda,float nuevoValor);
  void CambioBitcoin(TipoMoneda moneda1,TipoMoneda moneda2,float &cambio1,floar &cambio2);
  void ListarCambios;
  private:
    TipoVectorCambios vectorCambios;
    void EscribirMoneda(TipoMoneda moneda);
}
