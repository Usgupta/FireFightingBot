const int sensorMin = 0;     // sensor minimum
const int sensorMax = 1024;  // sensor maximum

int enableA = 1;
int enableB = 9;

int LM1 = 2;      // left motor
int LM2 = 3  ;   // left motor
int RM1 = 4  ;     // right motor
int RM2 = 5  ;     // right motor
int pump = 6;   //pump




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(pump, OUTPUT);
}

void loop() {
  // read the sensor on analog A0:
  int sensorReading = analogRead(A0);
  pinMode (sensorReading,INPUT);

  // map the sensor range (four options):
  // ex: 'long int map(long int, long int, long int, long int, long int)'
  int range = map(sensorReading, sensorMin, sensorMax, 0, 7);
   Serial.println("** detecting Fire **");
   Serial.println("range is");
   Serial.println(range);
  // range value:
  switch (range) 
  {
    case 0:  
    {
      // A fire closer than 1.5 feet away.
      Serial.println("** Close Fire **");
      Serial.println(sensorReading);
    //digitalWrite (enableA, LOW);
    //digitalWrite (enableB, LOW);
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, LOW);
      digitalWrite(pump,HIGH);
      delay(5000);
      Serial.println(pump,HIGH);
      digitalWrite(pump,LOW);

      
    }
    

    /*
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    delay(300); //Slow down the speed of robot
    
    break;
    */
  case 1:
  { 
  // A fire between 1-3 feet away. (read 33 for fire)
    Serial.println("** Distant Fire **");
    Serial.println(sensorReading);
    /*digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    delay(5000);
    */
    
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    //Slow down the speed of robot
    delay(500);
    digitalWrite(pump,LOW);
    
    //int PUMP = digitalRead(pump);
    //Serial.println(PUMP);
    //delay(5000); 
    break;
  }  
    break;
  case 2:    // No fire detected.
    Serial.println("No Fire");
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    delay(500);
    /*
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    delay(300); //Slow down the speed of robot
    digitalWrite(pump,LOW);
    break;
    */
    
    /*
     * 
    Serial.println ("Motion Forward");
    //digitalWrite (enableA, HIGH);
    //digitalWrite (enableB, HIGH);
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);  
    digitalWrite(RM2, LOW);
    delay(10000); 
    Serial.println ("Motion Forward");
     */
    break;
    
  }
  delay(1);  // delay between reads


}
