#include <systemc.h>

SC_MODULE(pc_add_4)
{

  /** ENTRADAS */
  sc_in<sc_bv<32>> i_Data0;
  /** SAIDAS */
  sc_out<sc_bv<32>> o_Data;

  SC_CTOR(pc_add_4)
  {
    SC_METHOD(entry);
    sensitive << i_Data0;
  }

  void entry();
};