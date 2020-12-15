#include "ula.h"

void ula::calc()
{
    sc_uint<32> a = i_op1.read();
    sc_uint<32> b = i_op2.read();
    sc_uint<3>	ctrl_t = i_code.read();
    sc_int<32> asign;
    sc_int<32> bsign;
    sc_uint<32> o_res;

    asign = a;
    bsign = b;

    switch (ctrl_t)
    {
    case 0x0: // and
        o_res = a & b;    
        break;
    case 0x1: // or
        o_res = a | b;    
        break;
    case 0x2:  // add
        o_res = a + b;   
        break;
    case 0x6: // subtract
        o_res = a - b;    
        break;
    case 0x7: // set on less than
        o_res = (asign < bsign);  
        break;
    }

    if (o_res == 0) {
        o_out.write(o_res);
        o_zero.write(1);
    }else {
        o_out.write(o_res);
        o_zero.write(0);
    }
        
}