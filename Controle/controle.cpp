#include "controle.h"

void controle::entry()
{

	// i_OP.read();

	if (i_OP.read() == "000000")
	{
		o_RegDst.write(true);
		o_ALUOp.write("01");
	}
	else
	{
		o_RegDst.write(false);
		o_ALUOp.write("00");
	}

	if (i_OP.read() == "000010")
	{
		o_Jump.write(true);
	}
	else
	{
		o_Jump.write(false);
	}

	if (i_OP.read() == "000100")
	{
		o_Branch.write(true);
		o_ALUOp.write("10");
	}
	else
	{
		o_Branch.write(false);
		o_ALUOp.write("00");
	}

	if (i_OP.read() == "100011")
	{
		o_MemRead.write(true);
		o_MemtoReg.write(true);
	}
	else
	{
		o_MemRead.write(false);
		o_MemtoReg.write(false);
	}

	/** CASOS ESPECIAIS */
	if ((i_OP.read()[5] and !i_OP.read()[4] and i_OP.read()[3] and !i_OP.read()[2] and i_OP.read()[1] and i_OP.read()[0]) and !i_CLK.read())
	{
		o_MemWrite.write(true);
	}
	else
	{
		o_MemWrite.write(false);
	}

	if (i_OP.read() == "101011" || i_OP.read() == "001000" || i_OP.read() == "100011")
	{
		o_ALUSrc.write(true);
	}
	else
	{
		o_ALUSrc.write(false);
	}

	if (((!i_OP.read()[5] and !i_OP.read()[4] and !i_OP.read()[3] and !i_OP.read()[2] and !i_OP.read()[1] and !i_OP.read()[0]) or
		 (i_OP.read()[5] and !i_OP.read()[4] and !i_OP.read()[3] and !i_OP.read()[2] and i_OP.read()[1] and i_OP.read()[0]) or
		 (!i_OP.read()[5] and !i_OP.read()[4] and i_OP.read()[3] and !i_OP.read()[2] and !i_OP.read()[1] and !i_OP.read()[0])) and
		!i_CLK.read())
	{
		o_RegWrite.write(true);
	}
	else
	{
		o_RegWrite.write(false);
	}

}
