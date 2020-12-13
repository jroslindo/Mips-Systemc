#include "systemc.h"

SC_MODULE(test_or_1bit)
{
    /** ENTRADAS */
    sc_out<sc_bv<6>> ti_OP;
    sc_in<bool> ti_CLK;
    
    /** SAIDAS */
    sc_in<bool> to_RegDst;
    sc_in<bool> to_Jump;
    sc_in<bool> to_Branch;
    sc_in<bool> to_MemRead;
    sc_in<bool> to_MemtoReg;
    sc_in<sc_bv<2>> to_ALUOp;
    sc_in<bool> to_MemWrite;
    sc_in<bool> to_ALUSrc;
    sc_in<bool> to_RegWrite;

    void do_test();
    void print();

    SC_CTOR(test_or_1bit)
    {
        SC_CTHREAD(do_test, ti_CLK.pos());
    }
};
