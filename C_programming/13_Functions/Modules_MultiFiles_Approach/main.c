#include <stdio.h>
#include "motor.h"
#include "sensor.h"

/*suppose we have a large project for example a robot:this robot must move using motors,and
read data using sensors,so we should have a motor module and a sensor module
each module in c at least have 1 .c (source file) and 1 .h (header file)*/

/* it is better to have a module for each group of related tasks , this is easier for modularization
and debugging */

/*note:if the module is user defined we use " " in the #include, but if it is a library we use <> in the #include

/*each module contains Public variables and private variables
public variables: are global variables that can be seen outside the module and used by differenty modules
private variables: can be seen and used only inside the module(static keyword)
*/
extern unsigned char Motor_One_Direction;
extern unsigned char sensor_name[20];
int main()
{
	move_forward();
	printf("motor direction=%i\n",Motor_One_Direction);
	printf("sensor name is :%s\n",sensor_name);
	sensing();
	get_sensor_value();

    return 0;
}