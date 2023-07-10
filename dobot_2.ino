   
  int out =13;
  int out1=12;
  int push=8;
  int sensor=4;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(8,INPUT);
pinMode(4,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int button=digitalRead(push);
  int sig=digitalRead(sensor);
  Serial.println(button);
  Serial.println(sig);
  if(digitalRead(push)==0)
  {
    digitalWrite(13,HIGH);
    if(digitalRead(sensor)==0)
    {
      digitalWrite(12,HIGH);
    }
    else {
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      }
    }
  }
