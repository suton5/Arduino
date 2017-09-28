#include <IRremote.h> //Notice we have included the IRremote library here.
//Variables:
IRrecv irrecv(5); //Set up the IR Reciever, call it irrecv and attach it to the correct pin
decode_results results; //Set up a variable to hold the results
void setup()
{
// put your setup code here, to run once:
Serial.begin(9600);
irrecv.enableIRIn(); // Start the receiver
irrecv.blink13(true); //Blinks the LED on the Arduino board as it gets data from the remote.
}
void loop() {
// put your main code here, to run repeatedly:
if (irrecv.decode(&results)) {
String tmp = (String)results.value;
if (tmp == "4294967295") //This value tells the Arduino that the previous button is still active.
{
Serial.println("Button still active."); //Report to the serial monitor the last button was still held down
}
else {
//Serial.println(results.value, HEX); //A new button has been pressed with the value shown.
Serial.println(tmp);
}
irrecv.resume(); // Receive the next value
}
}
