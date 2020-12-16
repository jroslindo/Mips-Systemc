#include <systemc.h>

SC_MODULE(clock_div)
{

  /** ENTRADAS */
  sc_in<bool> clock_in;
  /** SAIDAS */
  sc_out<bool> clock_out;

  /** Variavel */
  int count = 0;
  

  SC_CTOR(clock_div)
  {
    SC_METHOD(entry);
    sensitive << clock_in.neg();
  }

  void entry();
};