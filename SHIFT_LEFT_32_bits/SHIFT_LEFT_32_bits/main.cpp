#include "systemc.h"
#include "test_shift_left.h"
#include "shift_left.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<sc_bv<32>> mi_Data;
    sc_signal<sc_bv<32>> mo_Data;

    sc_clock CLK("clock", 50, SC_NS);

    shift_left SHIFT_LEFT("SHIFT_LEFT");
    SHIFT_LEFT(mi_Data, mo_Data);

    test_shift_left TEST_SHIFT_LEFT("TEST_SHIFT_LEFT");
    TEST_SHIFT_LEFT(CLK, mi_Data, mo_Data);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_shift_left");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_Data, "mi_Data");
    sc_trace(tf, mo_Data, "mo_Data");

    sc_start(600, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}