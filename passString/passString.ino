int cnt;
int dt = 3000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  Serial.print(cnt);
  Serial.println(" Missisipi ");
  cnt++;
  delay(dt);

}
