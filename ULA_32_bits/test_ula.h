#pragma once
#include "systemc.h"

SC_MODULE(test_ula) {
    sc_in<bool> clock;
    sc_out<sc_bv<32>> ti_A, ti_B;
    sc_out<sc_bv<3>> ti_C;
    sc_in<sc_bv<32>> to_S;
    sc_in<sc_bv<1>>  to_Z;

    void do_test();
    void print();

    SC_CTOR(test_ula) {
        SC_CTHREAD(do_test, clock.pos());
    }
};
