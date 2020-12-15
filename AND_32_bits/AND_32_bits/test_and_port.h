#pragma once
#include "systemc.h"

SC_MODULE(test_and_port) {
    sc_in<bool> clock;
    sc_out<sc_bv<32>> ti_Data0, ti_Data1;
    sc_in<sc_bv<32>> to_Data;

    void do_test();
    void print();

    SC_CTOR(test_and_port) {
        SC_CTHREAD(do_test, clock.pos());
    }
};
