#include "clock_div.h"

void clock_div::entry()
{
	if(count == 1){
		clock_out.write(true);
	}else{
		clock_out.write(false);
	}
		
	count++;

	if (count == 2)
	{
		count = 0;
	}

}
