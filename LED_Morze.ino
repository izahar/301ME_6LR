#define LED_A 13
#define LED_B 12
void setup() {
 pinMode(LED_A, OUTPUT);
 pinMode(LED_B, OUTPUT);
}
void loop () {
 digitalWrite (LED_A, HIGH);
 delay (500);
 digitalWrite (LED_A, LOW);
 delay (500);

 digitalWrite (LED_A, HIGH);
 delay (500);
 digitalWrite (LED_A, LOW);
 delay (500);

 digitalWrite (LED_A, HIGH);
 delay (500);
 digitalWrite (LED_A, LOW);
 delay (1000);

 digitalWrite (LED_B, HIGH);
 delay (500);
 digitalWrite (LED_B, LOW);
 delay (500);

 digitalWrite (LED_B, HIGH);
 delay (500);
 digitalWrite (LED_B, LOW);
 delay (500);

 digitalWrite (LED_B, HIGH);
 delay (500);
 digitalWrite (LED_B, LOW);
 delay (1000);
}
