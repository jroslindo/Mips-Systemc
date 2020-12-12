#include "systemc.h"
#include "Controle/controle.h"
#include "test_or_1bit.h"

int sc_main(int argc, char *argv[])
{
    sc_signal<sc_bv<6>> mi_OP;
    sc_signal<bool> mo_RegDst, mo_Jump, mo_Branch, mo_MemRead, mo_MemtoReg, mo_MemWrite, mo_ALUSrc, mo_RegWrite;
    sc_signal<sc_bv<2>> mo_ALUOp;

    sc_clock CLK("clock", 50, SC_NS);

    controle CONTROLE("CONTROLE");
    CONTROLE(mi_OP, CLK, mo_RegDst, mo_Jump, mo_Branch, mo_MemRead, mo_MemtoReg, mo_ALUOp, mo_MemWrite, mo_ALUSrc, mo_RegWrite);

    test_or_1bit TESTOR1BIT("TESTOR1BIT");
    TESTOR1BIT(mi_OP, CLK, mo_RegDst, mo_Jump, mo_Branch, mo_MemRead, mo_MemtoReg, mo_ALUOp, mo_MemWrite, mo_ALUSrc, mo_RegWrite);

    sc_trace_file *tf = sc_create_vcd_trace_file("wave");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_OP, "mi_OP");
    sc_trace(tf, mo_RegDst, "mo_RegDst");
    sc_trace(tf, mo_Jump, "mo_Jump");
    sc_trace(tf, mo_Branch, "mo_Branch");

    sc_trace(tf, mo_MemRead, "mo_MemRead");
    sc_trace(tf, mo_MemtoReg, "mo_MemtoReg");
    sc_trace(tf, mo_MemWrite, "mo_MemWrite");
    sc_trace(tf, mo_ALUSrc, "mo_ALUSrc");

    sc_trace(tf, mo_RegWrite, "mo_RegWrite");
    sc_trace(tf, mo_ALUOp, "mo_ALUOp");

    sc_start(300, SC_NS);
    sc_close_vcd_trace_file(tf);

    return (0);
}