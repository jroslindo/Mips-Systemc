#include "systemc.h"

SC_MODULE(test_pc) {
    sc_in<bool> clock;
    sc_out<sc_bv<32>> ti_Next_PC;
    sc_in<sc_bv<32>> to_PC;

    void do_test();
    void print();

    SC_CTOR(test_pc) {
        SC_CTHREAD(do_test, clock.pos());
    }
};
#pragma once
