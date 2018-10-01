int v = A0;
float vout = 0.0;
float  vin = 0.0;
float r1 = 30000.0;
float r2 = 7500.0;
int val = 0;

void setup() {
  pinMode(v,INPUT);
  Serial.begin(9600);
}

void loop() {
  val  = analogRead(v);
  vout = (val*5.0)/1024.0;
  vin = vout/(r2/(r1+r2));
  Serial.println(vin);
delay(500);
}
