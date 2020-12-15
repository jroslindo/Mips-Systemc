#include "systemc.h"
#include "ula.h"
#include "test_ula.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<sc_bv<32>> mi_A, mi_B;
    sc_signal<sc_bv<3>> mi_C;
    sc_signal<sc_bv<32>> mo_S;
    sc_signal<sc_bv<1>> mo_Z;

    sc_clock CLK("clock", 50, SC_NS);

    ula ULA("ULA");
    ULA(mi_A, mi_B, mi_C, mo_S, mo_Z);

    test_ula TEST_ULA("TEST_ULA");
    TEST_ULA(CLK, mi_A, mi_B, mi_C, mo_S, mo_Z);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_ula");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_A, "i_A");
    sc_trace(tf, mi_B, "i_B");
    sc_trace(tf, mi_C, "i_C");
    sc_trace(tf, mo_S, "o_S");
    sc_trace(tf, mo_Z, "o_Z");

    sc_start(450, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}