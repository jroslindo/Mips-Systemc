#include "test_shift_left.h"

void test_shift_left::do_test() {

    while (true) {

        ti_Data.write(0b00000000000000000000000000000000);
        print();
        wait(1);

        ti_Data.write(0b00000000000000000000000000000001);
        print();
        wait(1);

        ti_Data.write(0b00000000000000000000000000000010);
        print();
        wait(1);

        ti_Data.write(0b00000000000000000000000000000100);
        print();
        wait(1);

        ti_Data.write(0b00000000000000000000000000000101);
        print();
        wait(1);

    }
}

void test_shift_left::print() {

}