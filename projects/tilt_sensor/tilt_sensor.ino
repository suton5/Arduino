//Variables:
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Serial Established..\nTilt board to continue.");
pinMode (7, INPUT); //Set pin 7 to input for reading the sensor.
}
void loop() {
// put your main code here, to run repeatedly:
if (digitalRead(7) == true)
{
Serial.println("Tilted!");
}
else {
Serial.println("Upright!");
}
}
