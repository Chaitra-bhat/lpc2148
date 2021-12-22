#include<stdio.h>
#include<stdint.h>

#include<lpc214x.h>


int main(){
// Make P0.11 pin as LED pin
IO0DIR = (1U<<11)	;	//Setting P0.11 as output

	while(1)
	{
		IO0CLR = (1U<<11);
		IO0SET = (1U<<11);
		//for(int i=0;i<1000;i++);
		IO0CLR = (1U<<11);
	}
	
	return 0;
}

