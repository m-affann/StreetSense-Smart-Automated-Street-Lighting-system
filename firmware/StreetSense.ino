# code for the final project:

const int trigPin = 2;
const int echoPin = 3;

const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void allLightsOff() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    allLightsOff();
    Serial.println("NO OBJECT - ALL OFF");
    delay(100);
    return;
  }

  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  allLightsOff();

  // CLOSE: D4 + D5
  if (distance >= 5 && distance <= 15) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    Serial.println("CLOSE - D4 D5 ON");
  }

  // MEDIUM: D6 + D7
  else if (distance > 15 && distance <= 30) {
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    Serial.println("MEDIUM - D6 D7 ON");
  }

  // FAR: D8 + D9
  else if (distance > 30 && distance <= 50) {
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    Serial.println("FAR - D8 D9 ON");
  }

  else {
    Serial.println("OUT OF RANGE - ALL OFF");
  }

  delay(100);
}
