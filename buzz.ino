/* Made by MegaTeam or TeamMega. 2019-2020 */
int ledPin = 8;
int speakerOut = 9;               
byte names[] ={'1'};  
int tones[] = {1014};
byte val = 0;
int serByte = -1;
int statePin = LOW;
int count = 0;

void setup() {
 pinMode(ledPin, OUTPUT); 
 pinMode(speakerOut, OUTPUT); 
 Serial.begin(9600);
}

void loop() {
  digitalWrite(speakerOut, LOW);     
  serByte = Serial.read();
  if (serByte != -1) {
    val = serByte;
    Serial.print(val);
    statePin = !statePin;
    digitalWrite(ledPin, statePin);
  }
  for (count=0;count<=8;count++) {
    if (names[count] == val) {       
      digitalWrite(speakerOut, HIGH);
      digitalWrite(ledPin, HIGH);
      delayMicroseconds(tones[count]);
      digitalWrite(speakerOut, LOW);
      digitalWrite(ledPin, LOW);
      delayMicroseconds(tones[count]);
    }
  }
}
