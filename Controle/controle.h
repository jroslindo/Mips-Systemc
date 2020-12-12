#include <systemc.h>

SC_MODULE(controle)
{

  /** ENTRADAS */
  sc_in<sc_bv<6>> i_OP;
  sc_in<bool> i_CLK;
  /** SAIDAS */
  sc_out<bool> o_RegDst;
  sc_out<bool> o_Jump;
  sc_out<bool> o_Branch;
  sc_out<bool> o_MemRead;
  sc_out<bool> o_MemtoReg;
  sc_out<sc_bv<2>> o_ALUOp;
  sc_out<bool> o_MemWrite;
  sc_out<bool> o_ALUSrc;
  sc_out<bool> o_RegWrite;

  SC_CTOR(controle)
  {
    SC_METHOD(entry);
    sensitive << i_OP << i_CLK;
  }

  void entry();
};