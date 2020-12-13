#include "systemc.h"

SC_MODULE(test_or_1bit)
{
    sc_in<bool> ti_CLK;
    /** ENTRADAS */
    sc_out<sc_bv<16>> ti_Data0;
    /** SAIDAS */
    sc_in<sc_bv<32>> to_Data;

    void do_test();
    void print();

    SC_CTOR(test_or_1bit)
    {
        SC_CTHREAD(do_test, ti_CLK.pos());
    }
};
