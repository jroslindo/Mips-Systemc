#include "systemc.h"

SC_MODULE(test_memoria_ram)
{
    sc_in<bool> clock;
    /** SAIDAS */
    sc_in<bool> clock_out;

    void do_test();
    void print();

    SC_CTOR(test_memoria_ram)
    {
        SC_CTHREAD(do_test, clock.pos());
    }
};
