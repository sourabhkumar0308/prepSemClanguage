#include<stdio.h>

int main()
{
float mass,speed,energy;
printf("Calculating kinetic energy of a moving object:\n");
printf("Enter the object's mass in kilograms: ");
scanf("%f",&mass);
printf("Enter the object's speed in meters per second: ");
scanf("%f",&speed);
energy = mass * speed;
printf("The object has %3.2f joules of energy\n",energy);
return 0;
}
