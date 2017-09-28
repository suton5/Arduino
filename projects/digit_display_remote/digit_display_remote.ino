#include <IRremote.h> //Notice we have included the IRremote library here.

//Variables:
int pin_a = 6;
int pin_b = 7;
int pin_c = 8;
int pin_d = 9;
int pin_e = 10;
int pin_f = 11;
int pin_g = 12;
int pin_h = 13;
int delayVar = 500;
IRrecv irrecv(5); //Set up the IR Reciever, call it irrecv and attach it to the correct pin
decode_results results; //Set up a variable to hold the results

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  //irrecv.blink13(true); //Blinks the LED on the Arduino board as it gets data from the remote.
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
  pinMode(pin_h, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (irrecv.decode( & results)) {

    String tmp = (String) results.value;
    //Serial.println(tmp);

    if (tmp == "4294967295") //This value tells the Arduino that the previous button is still active.
    {
      Serial.println("Button still active."); //Report to the serial monitor the last button was still held down
    } else {

      if (tmp == "16738455") {
        ch_0();
        Serial.println("0");
      } else if (tmp == "16724175") {
        ch_1();
        Serial.println("1");
      } else if (tmp == "16718055") {
        ch_2();
        Serial.println("2");
      } else if (tmp == "16743045") {
        ch_3();
        Serial.println("3");
      } else if (tmp == "16716015") {
        ch_4();
        Serial.println("4");
      } else if (tmp == "16726215") {
        ch_5();
        Serial.println("5");
      } else if (tmp == "16734885") {
        ch_6();
        Serial.println("6");
      } else if (tmp == "16728765") {
        ch_7();
        Serial.println("7");
      } else if (tmp == "16730805") {
        ch_8();
        Serial.println("8");
      } else if (tmp == "16732845") {
        ch_9();
        Serial.println("9");
      }
      

    }

    irrecv.resume(); // Receive the next value

  }
}

void ch_1() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, LOW);
  digitalWrite(pin_d, LOW);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, LOW);
  digitalWrite(pin_g, LOW);
  digitalWrite(pin_h, LOW);
}
void ch_2() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, LOW);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, HIGH);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, LOW);
  digitalWrite(pin_h, HIGH);
}
void ch_3() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, LOW);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, LOW);
  digitalWrite(pin_h, HIGH);
}
void ch_4() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, LOW);
  digitalWrite(pin_d, LOW);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, LOW);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_h, HIGH);
}
void ch_5() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, LOW);
  digitalWrite(pin_e, LOW);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_h, HIGH);
}
void ch_6() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, HIGH);
  digitalWrite(pin_e, LOW);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_h, HIGH);
}
void ch_7() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, LOW);
  digitalWrite(pin_d, LOW);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, LOW);
  digitalWrite(pin_h, LOW);
}
void ch_8() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, HIGH);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_h, HIGH);
}
void ch_9() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, LOW);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_h, HIGH);
}
void ch_0() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
  digitalWrite(pin_c, HIGH);
  digitalWrite(pin_d, HIGH);
  digitalWrite(pin_e, HIGH);
  digitalWrite(pin_f, HIGH);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_h, LOW);
}
