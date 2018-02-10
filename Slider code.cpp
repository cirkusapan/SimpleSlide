//Setup

//librarys
#include <Encoder.h>
#include <AccelStepper.h>
#include

//Outputs

//Motor controller
#define DIR_pin 			x
#define STEP_pin			x

//Led controller
#define clock_pin			x
#define data_pin			x
#define orgentation_pin		x

//Inputs

//Rotatory pulse encoder
#define rotorypulsA_pin		x
#define rotorypulsB_pin		x
#define clickrotorpuls_pin	x

//Buttons
#define upbotton_pin		x
#define downbutton_pin		x
#define stopgo_pin			x
#define bounce_pin			x

//code setup
#define go = 1
#define stop = 0
#define

float Speed
float maxSpeed
float acceleration

boolean Bounce = false
boolean Move = false

int Rotorystate
int	prevRotorystate
int direction = 1


AccelStepper stepper1(forwardstep1, backwardstep1)


void setup() 
{
  // put your setup code here, to run once:

}
void loop() 
{
 
}
void readLoopButtons
{
	if (digitalRead(upbotton_pin) == LOW)
	{
		direction = 1
	}
	if (digitalRead(downbutton_pin) == LOW)
	{
		direction = -1
	}
	if (digitalRead(stopgo_pin) == LOW)
	{
		if (Move == true)
		{
			Move = false
		}
		else
		{
			Move = true
		}
	}
	if (digitalRead(bounce_pin) == LOW)
	{
		if (Bounce = true)
		{
			Bounce = false
		}
		else
		{
			Bounce = true
		}
	}
}
void rotorypuls
{	
	Rotorystate = digitalRead(rotorypulsA_pin)
	if (Rotorystate != prevRotorystate)
	{
		if (digitalRead(rotorypulsB_pin) != Rotorystate)
		{
			setSpeed ++;
		}
		else
		{
			setSpeed --
		}
	}
	prevRotorystate = Rotorystate
}
void forwardstep1 
{  
  motor1.onestep(FORWARD, SINGLE);
}
void backwardstep1 
{  
  motor1.onestep(BACKWARD, SINGLE);
}
