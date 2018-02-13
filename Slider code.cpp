//Setup

//librarys
#include <Encoder.h>
#include <AccelStepper.h>


//Outputs
// All thesse need to get there pin number after the variable name
// (eg. define DIR_pin 15)

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
#define maxSpeed = y


// Global variables (can be accessed everywhere)

float Speed;
float acceleration;

boolean Bounce = false;
boolean Move = false;

int Rotorystate;
int prevRotorystate;
int direction = 1;

int currentPosition; 	
int distanceToGo;	//maximum distance of track

// Dont know enough arduino-code to know if this is valid or not
//AccelStepper stepper1(forwardstep1, backwardstep1);
// My guess is though:
AccelStepper stepper = AccelStepper(forwardstep1, backwardstep1)


void setup() 
{
	currentPosition = 0; 	//global variables can be changed by name
	distanceToGo = 3000;
}
void loop() 
{
	readLoopButtons() 		//is this how i call on the "void readLoopButtons" function?
	if (currentPosition == 3000)
	{
		if (Bounce == false)
		{
			Move = false;		//if the motor has reached target location stop
			direction = -1;		//change direction
			distanceToGo = 0;	//set target location to begining of track
		}
		else
		{
			direction = -1;
			distanceToGo = 0;
		}
	}
	if (currentPosition == 0)
	{
		if (Bounce == false)
		{
			Move = false;
			direction = 1;		
			distanceToGo = 3000;
		}
		else
		{
			direction = 1;
			distanceToGo = 3000;
		}
	}
	stepper.run();
	
	
	
}
void readLoopButtons() 		//reads if any buttons if pressed
{
	if (digitalRead(upbotton_pin) == LOW)
	{
		direction = 1;
	}
	if (digitalRead(downbutton_pin) == LOW)
	{
		direction = -1;
	}
	if (digitalRead(stopgo_pin) == LOW)
	{
		if (Move == true)
		{
			Move = false;
		}
		else
		{
			Move = true;
		}
	}
	if (digitalRead(bounce_pin) == LOW)
	{
		if (Bounce = true)
		{
			Bounce = false;
		}
		else
		{
			Bounce = true;
		}
	}
}
void rotorypuls()
{	
	int Rotorystate = digitalRead(rotorypulsA_pin);
	if (Rotorystate != prevRotorystate)
	{
		if (digitalRead(rotorypulsB_pin) != Rotorystate)
		{
			setSpeed ++;
		}
		else
		{
			setSpeed --;
		}
	}
	prevRotorystate = Rotorystate;
}
void forwardstep1()
{  
  motor1.onestep(FORWARD, SINGLE);
}
void backwardstep1()
{  
  motor1.onestep(BACKWARD, SINGLE);
}
