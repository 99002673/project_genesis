#include <stdio.h>
#include "phy_equation.h"
int main()
{ int input;
	printf("PRESS\n 1. To find Velocity V=IR\n 2. To find Speed S=d/t\n 3. To find Kenitic Energy E=1/2*m*v*v\n");
    printf(" 4. To find Force F=m*a\n 5. To find Potential Energy P=m*g*h\n 6. To find Power P=VI\n");
    printf(" 7. To find Density D=M/V\n 8. To find Pressure P=F/A\n 9. To find Frequency(f) f=velocity/wavelenght\n\n");
	scanf("%d",&input);
	if(input==1){
		ohms_law();
	}
	else if(input==2){
	     velocity_dis_time();	
	}
	else if(input==3){
	     kinetic_energy();	
	}
	else if(input==4){
	    force();	
	}
	else if(input==5){
	     potential_energy();	
	}
	else if(input==6){
	     power();	
	}
	else if(input==7){
	     density();	
	}
	else if(input==8){
	     pressure();	
	}
	else if(input==9){
	     frequency();	
	}
	else
	printf("Enter number between 1-9 only.....\n");
return 0;
}
