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
void setup() {
// put your setup code here, to run once:
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
ch_0();
delay(delayVar);
ch_1();
delay(delayVar);
ch_2();
delay(delayVar);
ch_3();
delay(delayVar);
ch_4();
delay(delayVar);
ch_5();
delay(delayVar);
ch_6();
delay(delayVar);
ch_7();
delay(delayVar);
ch_8();
delay(delayVar);
ch_9();
delay(delayVar);
ch_a();
delay(delayVar);
ch_b();
delay(delayVar);
ch_c();
delay(delayVar);
ch_d();
delay(delayVar);
ch_e();
delay(delayVar);
ch_f();
delay(delayVar);
delay(delayVar);
}
void ch_a()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, LOW);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_b()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_c()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, LOW);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, LOW);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, LOW);
}
void ch_d()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, LOW);
digitalWrite(pin_g, LOW);
digitalWrite(pin_h, HIGH);
}
void ch_e()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, LOW);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, LOW);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_f()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, LOW);
digitalWrite(pin_c, LOW);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, LOW);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_1()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, LOW);
digitalWrite(pin_d, LOW);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, LOW);
digitalWrite(pin_g, LOW);
digitalWrite(pin_h, LOW);
}
void ch_2()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, LOW);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, LOW);
digitalWrite(pin_h, HIGH);
}
void ch_3()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, LOW);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, LOW);
digitalWrite(pin_h, HIGH);
}
void ch_4()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, LOW);
digitalWrite(pin_d, LOW);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, LOW);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_5()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, LOW);
digitalWrite(pin_e, LOW);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_6()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, LOW);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_7()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, LOW);
digitalWrite(pin_d, LOW);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, LOW);
digitalWrite(pin_h, LOW);
}
void ch_8()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_9()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, LOW);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, HIGH);
}
void ch_0()
{
digitalWrite(pin_a, LOW);
digitalWrite(pin_b, HIGH);
digitalWrite(pin_c, HIGH);
digitalWrite(pin_d, HIGH);
digitalWrite(pin_e, HIGH);
digitalWrite(pin_f, HIGH);
digitalWrite(pin_g, HIGH);
digitalWrite(pin_h, LOW);
}
