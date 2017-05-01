int ledPin = 0;

void setup() {
  pinMode(ledPin,OUTPUT);

}

void loop() {

  int randomDelay = random(3,10);
  int randomPulse = random(100,400);

  int randomBrightness = random(150,255);
  
  for(int brightness = 0; brightness < randomBrightness; brightness++){
    analogWrite(ledPin, brightness);
    delay(randomDelay);
  }

  for(int brightness = randomBrightness; brightness >= 0; brightness--){
    analogWrite(ledPin, brightness);
    delay(randomDelay);
  }  

delay(randomPulse);
}
