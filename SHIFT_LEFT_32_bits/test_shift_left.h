#pragma once
#include "systemc.h"

SC_MODULE(test_shift_left) {
    sc_in<bool> clock;
    sc_out<sc_bv<32>> ti_Data;
    sc_in<sc_bv<32>> to_Data;

    void do_test();
    void print();

    SC_CTOR(test_shift_left) {
        SC_CTHREAD(do_test, clock.pos());
    }
};
