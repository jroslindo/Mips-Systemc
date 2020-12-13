#include "test_or_1bit.h"

using namespace std;
void test_or_1bit::do_test()
{
    //std::cout   << "time\tX\tY\tCi\tS\tCo" << std::endl;
    while (true)
    {
        ti_Data0.write("0000000001000001");
        print();
        wait(1);

        ti_Data0.write("1000000001000001");
        print();
        wait(1);
    }
}

void test_or_1bit::print()
{
    cout << "\n\n"
         << sc_time_stamp() << "\t"
         << "\nRespostas: " << to_Data;
}
