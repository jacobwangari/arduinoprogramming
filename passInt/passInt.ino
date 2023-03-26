
int x = 1;
int y = 2;
int z = 3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(x);
 Serial.print(" , ");
Serial.print( y);  
Serial.print(" , ");
  Serial.println( z);
  z = z + 3;
  x = x + 5;
  y = y + 7;
  delay(1000);  

}
