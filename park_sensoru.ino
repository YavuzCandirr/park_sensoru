int ledkirmizi = 8;
int ledmavi = 9;
int ledyesil = 10;
int buzzerpin = 5;
int trigPin = 7;
int echoPin = 6;
long mesafe,sure;


void setup() {
pinMode(trigPin, OUTPUT);  
pinMode(echoPin, INPUT);  
Serial.begin(9600);  
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);  
pinMode(10,OUTPUT);
pinMode(8,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

sure = pulseIn(echoPin, HIGH);
mesafe = (sure/2) * 0.0343;

Serial.print("CM = ");
Serial.print(mesafe);
Serial.println();
delay(200);

digitalWrite(10,1);
digitalWrite(9,1);
digitalWrite(8,1);
digitalWrite(5,0);

if(mesafe<40 && mesafe>=30){
  digitalWrite(5,1);
  digitalWrite(10,0);
  digitalWrite(9,1);
  digitalWrite(8,1);
  delay(300);
  digitalWrite(5,0);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  delay(300);



}else if(mesafe<29 && mesafe>=20){
  digitalWrite(5,1);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,1);
  delay(120);
  digitalWrite(5,0);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  delay(120);


}else if(mesafe<20 && mesafe>=10){
  digitalWrite(5,1);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,0);
  delay(50);
  digitalWrite(5,0);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  delay(50);

 
}else if(mesafe<10){
  digitalWrite(5,1);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,0);
  delayMicroseconds(10);
  delay(500);
  

}


 
}
