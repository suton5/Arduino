//Variables
int ledPin = 6; //This is a variable. We will discuss this after the code segment!
int pwmVal = 255; //PWM range is 0 - 255. Change this value and reupload to see the difference!
int currVal = 0;
String serialOut = "Current Value: ";
void setup() {
// put your setup code here, to run once:
pinMode(ledPin, OUTPUT); //Set the pin we chose above as OUTPUT.
Serial.begin(9600); //Open serial port
}
void loop() {
// put your main code here, to run repeatedly:
analogWrite(ledPin, pwmVal); //analogWrite is the arduino function for PWM. We are telling the Arduino to apply a PWM signal to ledPin, with the value of pwmVal which we set at the top of this code.
if (pwmVal <= 0) { //If value is 0
pwmVal = 255; //Reset the value to max ready to begin again
}
else { //Otherwise if value is not 0
pwmVal--; //Decrease value by 1
}
Serial.print(serialOut); //Print "Current Value: "
Serial.println(pwmVal); //Add the value to the end of the last line. NOTE this command is println, which adds a newline character at the end of the line. This saves us having to add another "\n".
}
