#include "systemc.h"

SC_MODULE(test_controle_ula) {
    sc_in<bool> clock;
    sc_out<sc_bv<2>> ti_ALUOp;
    sc_out<sc_bv<6>> ti_Func;
    sc_in<sc_bv<3>> to_ALUControl;

    void do_test();
    void print();

    SC_CTOR(test_controle_ula) {
        SC_CTHREAD(do_test, clock.pos());
    }
};
