#include "test_memoria_ram.h"

void test_memoria_ram::do_test() {

    while (true) {

        i_MemWrite.write(1);
        i_MemRead.write(0);
        i_Address.write(0b00000000000000000000000000000100);
        i_Data.write(0b00000000000000000000000000000010);
        print();
        wait(1);

        i_MemWrite.write(0);
        i_MemRead.write(1);
        i_Address.write(0b00000000000000000000000000000100);
        i_Data.write(0b00000000000000000000000000000000);
        print();
        wait(1);

    }
}

void test_memoria_ram::print() {

}