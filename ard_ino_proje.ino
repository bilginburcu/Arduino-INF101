
#define LED 9
#define BUZZER 10
int sensor;



void setup() {
Serial.begin(9600);
pinMode(sensor,INPUT);
pinMode(LED,OUTPUT);
pinMode(BUZZER,OUTPUT);


}

void loop() {
 sensor=digitalRead(8);
 Serial.print(sensor);
 Serial.println("titresim degeri: ");
 if(sensor){
  digitalWrite(LED,HIGH);
  digitalWrite(BUZZER,HIGH);
 }
 else
 {
  digitalWrite(LED,LOW);
  digitalWrite(BUZZER,LOW);
 }

}
