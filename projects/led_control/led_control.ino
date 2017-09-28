//Variables:
int rPin = 11;
int gPin = 10;
int bPin = 9; //Set the PWM pins to be used on the arduino
int rVal = 0;
int gVal = 0;
int bVal = 0; //Set the values to 0 to begin with
void setup() {
// put your setup code here, to run once:
//No setup for this project.
}
void loop() {
// put your main code here, to run repeatedly:
analogWrite(rPin, rVal);
analogWrite(gPin, gVal);
analogWrite(bPin, bVal); //Apply PWM output to each leg of the RGB LED, with the value stored in the corresponding variable.
rVal = random(0,255);
gVal = random(0,255);
bVal = random(0,255); //Randomise the variables to get a random color each time
delay(500); //Delay before changing colors, so we can see each change.
}
