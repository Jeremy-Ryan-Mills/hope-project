

/**
Notes:
speaker on/off - maybe figured out
screen - kinda figured out
bluetooth - test ready...
motor,  
ADC,

*/

const int speakerOnOffSwitch = 11; // Assign pin 11 speakerOnOffSwitch

void setup() {
  // put your setup code here, to run once:
  pinMode(speakerOnOffSwitch, OUTPUT); // Set pin 11 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(speakerOnOffSwitch, HIGH); // Turn Speaker on
  delay(1000); // Wait for 1 second

  digitalWrite(speakerOnOffSwitch, LOW); // Turn Speaker off
  delay(1000); // Wait for 1 second

}
