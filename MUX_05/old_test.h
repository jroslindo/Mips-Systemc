#include "systemc.h"

SC_MODULE(test_or_1bit)
{
    sc_in<bool> ti_CLK;
    /** ENTRADAS */
    sc_out<bool> ti_Sel;
    sc_out<sc_bv<5>> ti_Data0;
    sc_out<sc_bv<5>> ti_Data1;
    /** SAIDAS */
    sc_in<sc_bv<5>> to_Data;

    void do_test();
    void print();

    SC_CTOR(test_or_1bit)
    {
        SC_CTHREAD(do_test, ti_CLK.pos());
    }
};
