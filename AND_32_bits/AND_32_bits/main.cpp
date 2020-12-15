#include "systemc.h"
#include "and_port.h"
#include "test_and_port.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<sc_bv<32>> mi_Data0, mi_Data1;
    sc_signal<sc_bv<32>> mo_Data;

    sc_clock CLK("clock", 50, SC_NS);

    and_port AND_PORT("AND_PORT");
    AND_PORT(mi_Data0, mi_Data1, mo_Data);

    test_and_port TEST_AND_PORT("TEST_AND_PORT");
    TEST_AND_PORT(CLK, mi_Data0, mi_Data1, mo_Data);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_and_port");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_Data0, "i_Data0");
    sc_trace(tf, mi_Data1, "i_Data1");
    sc_trace(tf, mo_Data, "o_Data");

    sc_start(600, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}