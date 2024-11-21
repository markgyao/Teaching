void setup() {
  Serial.begin(9600);
  Serial.println("Hello");
}

int i=0;
msg = "";
void loop() {
   msg = "counter: "+String(i);
   Serial.println(msg);
   //Serial.println("counter: "+String(i)); 
   i=i+1;
   delay(2000);

}
