#include <unistd.h>
#include "dma.h"
#include "gpio.h"
#include "fmdmasync.h"
#include "ngfmdmasync.h"
#include "stdio.h"

int main(int argc, char* argv[])
{
	
	generalgpio generalio;
	generalio.enableclk();
	ngfmdmasync ngfmtest(751000000,10000,14,1024);
	ngfmtest.start();
	sleep(30);
	ngfmtest.stop();
		

	
// Test Fmdmasync
/* 
	pwmgpio pwm;
	pwm.SetPllNumber(clk_osc,1);
	pwm.SetFrequency(5000);
	pwm.SetMode(0);
	
	fmdmasync fmtest(14,72);
	fmtest.start();
	for(int i=0;i<10000;i++)
	{
		
	}
	
	sleep(180); 
	fmtest.stop();
*/
	
}	

