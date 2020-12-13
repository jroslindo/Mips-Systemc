#include <systemc.h>

SC_MODULE(mux_32)
{
  /** ENTRADAS */
  sc_in<bool> i_Sel;
  sc_in<sc_bv<32>> i_Data0;
  sc_in<sc_bv<32>> i_Data1;
  /** SAIDAS */
  sc_out<sc_bv<32>> o_Data;

  SC_CTOR(mux_32)
  {
    SC_METHOD(entry);
    sensitive << i_Sel;
  }

  void entry();
};