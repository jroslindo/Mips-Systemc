#include <systemc.h>

SC_MODULE(sign_extend)
{

  /** ENTRADAS */
  sc_in<sc_bv<16>> i_Data0;
  /** SAIDAS */
  sc_out<sc_bv<32>> o_Data;

  SC_CTOR(sign_extend)
  {
    SC_METHOD(entry);
    sensitive << i_Data0;
  }

  void entry();
};