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
#define rotorypulsA_pin	x
#define rotorypulsB_pin	x
#define clickrotorpuls_pin	x

//Buttons
#define upbotton_pin		x
#define downbutton_pin		x
#define stopgo_pin			x
#define bounce_pin			x

//code setup
#define direction = x
#define
#define

float Speed
float maxSpeed
float acceleration

boolean Bounce = false
boolean move = false

int Rotorystate
int	prevRotorystate
int x = 1
int 


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
	switch
	{
		case 0:
		if (digitalRead(upbotton_pin) == LOW)
		{
			
		}
		break;
		case 1:
		
		break;
		case 2:
		break;
		case 3:
		break;
		
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
