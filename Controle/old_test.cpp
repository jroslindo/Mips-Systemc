#include "test_or_1bit.h"

using namespace std;
void test_or_1bit::do_test()
{
    //std::cout   << "time\tX\tY\tCi\tS\tCo" << std::endl;
    while (true)
    {

        ti_OP.write("000000");
        print();
        wait(1);

        ti_OP.write("000010");
        print();
        wait(1);

        ti_OP.write("000100");
        print();
        wait(1);

        ti_OP.write("100011");
        print();
        wait(1);

        ti_OP.write("001000");
        print();
        wait(1);

        ti_OP.write("101011");
        print();
        wait(1);
    }
}

void test_or_1bit::print()
{
    cout << "\n\n"
         << sc_time_stamp() << "\t"
         << "\nopcode: " << ti_OP
         << "\no_RegDst: " << to_RegDst
         << "\no_Jump: " << to_Jump
         << "\no_Branch: " << to_Branch
         << "\no_MemRead: " << to_MemRead
         << "\no_MemtoReg: " << to_MemtoReg
         << "\no_ALUOp: " << to_ALUOp
         << "\no_MemWrite: " << to_MemWrite
         << "\no_ALUSrc: " << to_ALUSrc
         << "\no_RegWrite: " << to_RegWrite
         << "\n\t";
}
