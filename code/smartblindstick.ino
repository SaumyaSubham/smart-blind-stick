int sensorPin=A0;//ir
int sensorValue = 0;
int sensorPin1=A1; //water
int sensorValue1 = 0;
int sensorPin2=A2; //switch
int sensorValue2 = 0;
const int buzz=A3;
int a=0;
int i=0;
char inChar=0;
void setup() {
  pinMode(buzz,OUTPUT);
   digitalWrite(buzz,LOW);
   Serial.begin(9600);
 
  delay(500);
 
}

void loop() {
   sensorValue = analogRead(sensorPin);
  sensorValue1 = analogRead(sensorPin1);
   sensorValue2 = analogRead(sensorPin2);
 
 if(sensorValue < 500  )
  {

 digitalWrite(buzz,HIGH); 
  delay (1000); 
 
 
    }
    else {digitalWrite(buzz,LOW); }
  
   if(sensorValue1 > 200  )
 {
 digitalWrite(buzz,HIGH); 
  delay (500); 
  
 digitalWrite(buzz,LOW); 
  delay (500);   
  }
  if(sensorValue2 < 500  )
  {
   
    digitalWrite(buzz,HIGH); 
     Serial.print("Emergency, Please help me - Copy the lat/long value and search it on google map - 20.586188,86.5616671");
  delay (10000); 
  
    }
  }
