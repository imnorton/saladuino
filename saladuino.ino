int onion_pin = A0;
int coriander_pin = A1;
int strawberry_pin = A2;

int onion_sensor;
int coriander_sensor;
int strawberry_sensor;

int onion_value;
int coriander_value;
int strawberry_value;


void setup() {
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  onion_sensor = analogRead(onion_pin);
  coriander_sensor = analogRead(coriander_pin);
  strawberry_sensor = analogRead(strawberry_pin);

  onion_value = map(onion_sensor,1023,0,0,100);
  coriander_value = map(coriander_sensor,1023,0,0,100);
  strawberry_value = map(strawberry_sensor,1023,0,0,100);

  // { "strawberry": 33, "onion": 44, "coriander": 55 }
  Serial.print("{ \"strawberry\": ");
  Serial.print(strawberry_value);
  Serial.print(", \"onion\": ");
  Serial.print(onion_value);
  Serial.print(", \"coriander\": ");
  Serial.print(coriander_value);
  Serial.println(" }");
  delay(10000);
}
