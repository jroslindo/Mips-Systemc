#include "systemc.h"
#include "MUX_32/mux_32.h"
#include "test_or_1bit.h"

int sc_main(int argc, char *argv[])
{
    sc_signal<sc_bv<32>> mi_Data0, mi_Data1, mo_Data;
    sc_signal<bool> mi_Sel;

    sc_clock CLK("clock", 50, SC_NS);

    mux_32 MUX_32("MUX_32");
    MUX_32(mi_Sel, mi_Data0, mi_Data1, mo_Data);

    test_or_1bit TESTOR1BIT("TESTOR1BIT");
    TESTOR1BIT(CLK, mi_Sel, mi_Data0, mi_Data1, mo_Data);

    sc_trace_file *tf = sc_create_vcd_trace_file("wave");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_Sel, "mi_Sel");
    sc_trace(tf, mi_Data0, "mi_Data0");
    sc_trace(tf, mi_Data1, "mi_Data1");
    sc_trace(tf, mo_Data, "mo_Data");


    sc_start(150, SC_NS);
    sc_close_vcd_trace_file(tf);

    return (0);
}