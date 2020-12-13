#include "test_or_1bit.h"

using namespace std;
void test_or_1bit::do_test()
{
    //std::cout   << "time\tX\tY\tCi\tS\tCo" << std::endl;
    while (true)
    {
        ti_Sel.write(false);
        ti_Data0.write("00000");
        ti_Data1.write("01001");
        print();
        wait(1);

        ti_Sel.write(true);
        ti_Data0.write("00000");
        ti_Data1.write("01001");
        print();
        wait(1);
    }
}

void test_or_1bit::print()
{
    cout << "\n\n"
         << sc_time_stamp() << "\t"
         << "\nSeletor: " << ti_Sel
         << "\nRespostas: " << to_Data;
}
