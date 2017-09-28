//Variables:
int varPin = A0;
int val = 0;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Serial connection established..\nAdjust the Potentiometer to see the value change!");
}
void loop() {
// put your main code here, to run repeatedly:
Serial.print("Potentiometer Value: ");
val = analogRead(varPin);
Serial.println(val);
}
