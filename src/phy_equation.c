#include "phy_equation.h"
int ohms_law(){ 
  char choice;
  int V,I,R;
	printf("What you want to find Voltage(V) or Current(I) or Resistance(R)\n");
	scanf(" %c",&choice);
	if(choice=='V')
	{
		printf("Enter values of I and R\n");
		scanf("%d %d",&I,&R);
		V=I*R;
		printf("Voltage= %d",V);
	}
	else if(choice=='I')
	{
		printf("Enter values of V and R\n");
		scanf("%d %d",&V,&R);
		I=V/R;
		printf("Current= %d",I);
	}
	else if(choice=='R')
	{
		printf("Enter values of V and I\n");
		scanf("%d %d",&V,&I);
		R=V/I;
		printf("Resistance= %d",R);
	}
	else
	printf("Invalid input Please check again..... ");
	
	return 0;
}
int velocity_dis_time(){
	char choice;
	int s,d,t;
		printf("What you want to find speed(S) or distance(D) or time(T) \n");
	    scanf(" %c",&choice);
	if(choice=='S'){
		printf("Enter values of D and T\n");
		scanf("%d %d",&d,&t);
		s=d/t;
		printf("Speed= %d m/sec",s);
	}
	else if(choice=='D'){
		printf("Enter values of S and T\n");
		scanf("%d %d",&s,&t);
		d=s*t;
		printf("Distance=%d m",d);
	}
	else if(choice=='T'){
		printf("Enter values of D and S\n");
		scanf("%d%d",&d,&s);
		t=d/s;
		printf("Time= %d sec",t);
	}
	else
	printf("Invalid input Please check again..... ");
	
	return 0;
}
int kinetic_energy(){
char choice;
  int e,m,v;
	printf("What you want to find E or M or V\n");
	scanf(" %c",&choice);
	if(choice=='E')
	{
		printf("Enter values of M and V\n");
		scanf("%d %d",&m,&v);
		printf("Kinetic Energy= %d",(1/2*(m*v*v)));
	}	
	else if(choice=='M')
	{
		printf("Enter values of E and V\n");
		scanf("%d %d",&e,&v);
		m=(2*e)/(v*v);
		printf("Mass= %d",m);
	}
		else if(choice=='V')
	{
		printf("Enter values of E and M\n");
		scanf("%d %d",&e,&m);
		v=sqrt((2*e)/m);
		printf("Velocity= %d",v);
	}
		else
		printf("Invalid input Please check again..... ");
	
	return 0;
}
int force(){
char choice;
  int f,m,a;
	printf("What you want to find F or M or A\n");
	scanf(" %c",&choice);
	if(choice=='F')
	{
		printf("Enter values of M and A\n");
		scanf("%d %d",&m,&a);
		printf("Force= %d",m*a);
	}	
	else if(choice=='M')
	{
		printf("Enter values of F and A\n");
		scanf("%d %d",&f,&a);
		printf("Mass= %d",(f/a));
	}
		else if(choice=='A')
	{
		printf("Enter values of F and M\n");
		scanf("%d %d",&f,&m);
		printf("Accleration= %d",(f/m));
	}
	else
		printf("Invalid input Please check again..... ");
	
	return 0;
}
int  potential_energy(){
char choice;
  float p,m,h;
  float g=9.8;
	printf("What you want to find P or M or H (gravity=9.8)\n");
	scanf(" %c",&choice);
	if(choice=='P')
	{
		printf("Enter values of M and H\n");
		scanf("%f %f",&m,&h);
		printf("Potential Energy= %f",m*g*h);
	}
	else if(choice=='M')
	{
		printf("Enter values of P and H\n");
		scanf("%f %f",&p,&h);
		printf("Mass= %f",(p/(g*h)));
	}
	else if(choice=='H')
	{
		printf("Enter values of P and M\n");
		scanf("%f %f",&p,&m);
		printf("Height= %f",(p/(g*m)));
	}
	else
		printf("Invalid input Please check again..... ");
	
	return 0;	
}	
int power(){
char choice;
  int p,v,i;
  
	printf("What you want to find power(P) or voltage(V) or current(I)\n");
	scanf(" %c",&choice);
	if(choice=='P')
	{
		printf("Enter values of V and I\n");
		scanf("%d %d",&v,&i);
		printf("Power= %d",v*i);
	}
	else if(choice=='V')
	{
		printf("Enter values of P and I\n");
		scanf("%d %d",&p,&i);
		printf("Voltage= %d",p/i);
	}
		else if(choice=='I')
	{
		printf("Enter values of P and V\n");
		scanf("%d %d",&p,&v);
		printf("Current= %d",p/v);
	}
	else
		printf("Invalid input Please check again..... ");
	
	return 0;	
}
int density(){
  char choice;
  int d,m,v;
  
	printf("What you want to find Density(D) or Mass(M) or Volume(V)\n");
	scanf(" %c",&choice);
	if(choice=='D')
	{
		printf("Enter values of M and V\n");
		scanf("%d %d",&m,&v);
		printf("Density= %d",m/v);
	}
	else if(choice=='M')
	{
		printf("Enter values of D and V\n");
		scanf("%d %d",&d,&v);
		printf("Mass of the body= %d",d*v);
	}
	else if(choice=='V')
	{
		printf("Enter values of D and m\n");
		scanf("%d %d",&d,&m);
		printf("Volume of the body= %d",d*m);
	}
	else
		printf("Invalid input Please check again..... ");
	
	return 0;
}
int pressure(){
  char choice;
  int f,p,a;
  
	printf("What you want to find Pressure(P) or Force(F) or Area(A)\n");
	scanf(" %c",&choice);
	if(choice=='P')
	{
		printf("Enter values of F and A\n");
		scanf("%d %d",&f,&a);
		printf("Pressure= %d",f/a);
	}
	if(choice=='F')
	{
		printf("Enter values of P and A\n");
		scanf("%d %d",&p,&a);
		printf("Force= %d",p*a);
	}
	if(choice=='A')
	{
		printf("Enter values of F and P\n");
		scanf("%d %d",&p,&f);
		printf("Total Area= %d",f/p);
	}
	else
		printf("Invalid input Please check again..... ");
	
	return 0;	
}
int frequency(){
	char choice;
   int f,v,w;
  
	printf("What you want to find Frequency(F) or Velocity(V) or Wavelength(W)\n");
	scanf(" %c",&choice);
	if(choice=='F')
	{
		printf("Enter values of V and W\n");
		scanf("%d %d",&v,&w);
		printf("Frequency = %d",v/w);
	}
	if(choice=='v')
	{
		printf("Enter values of F and W\n");
		scanf("%d %d",&f,&w);
		printf("Velocity= %d",f*w);
	}
	if(choice=='W')
	{
		printf("Enter values of V and f\n");
		scanf("%d %d",&v,&f);
		printf("Wave length= %d",v/f);
	}
	else
		printf("Invalid input Please check again..... ");
	
	return 0;	

}
