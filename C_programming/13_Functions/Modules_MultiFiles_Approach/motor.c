#include "motor.h"

//public variable
unsigned char Motor_One_Direction=0x01;

//private variable
static unsigned char motor_status=0x01;
void move_forward(void)
{
	if(motor_status)
	{
		printf("moving forward\n");
	}
	else
	{
		printf("motors are off\n");
	}
}

void stop(void)
{
	printf("stopping\n");
}
