#include "test_registradores.h"

void test_registradores::do_test() {

    while (true) {

        i_RegWrite.write(1);
        i_ReadRegister1.write(0b00000);
        i_ReadRegister2.write(0b00000);
        i_WriteRegister.write(0b00001);
        i_WriteData.write(0b00000000000000000000000000000001);
        print();
        wait(1);

        i_RegWrite.write(1);
        i_ReadRegister1.write(0b00000);
        i_ReadRegister2.write(0b00000);
        i_WriteRegister.write(0b00010);
        i_WriteData.write(0b00000000000000000000000000000010);
        print();
        wait(1);

        i_RegWrite.write(1);
        i_ReadRegister1.write(0b00000);
        i_ReadRegister2.write(0b00000);
        i_WriteRegister.write(0b00101);
        i_WriteData.write(0b00000000000000000000000000000101);
        print();
        wait(1);

        i_RegWrite.write(0);
        i_ReadRegister1.write(0b00001);
        i_ReadRegister2.write(0b00010);
        i_WriteRegister.write(0b00000);
        i_WriteData.write(0b00000000000000000000000000000000);
        print();
        wait(1);

        i_RegWrite.write(0);
        i_ReadRegister1.write(0b00010);
        i_ReadRegister2.write(0b00101);
        i_WriteRegister.write(0b00000);
        i_WriteData.write(0b00000000000000000000000000000000);
        print();
        wait(1);

    }
}

void test_registradores::print() {

}