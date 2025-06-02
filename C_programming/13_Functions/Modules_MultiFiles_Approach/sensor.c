#include "sensor.h"

//private variable
static unsigned int sensor_reading=340;

//public variable
unsigned char sensor_name[20]="ultra sonic";
void sensing(void)
{
	printf("Sensing\n");
}

void get_sensor_value(void)
{
	printf("Reading=%i \n",sensor_reading);
}