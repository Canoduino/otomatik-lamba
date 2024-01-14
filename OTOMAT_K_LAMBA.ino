#define ldr A0
#define isik 8
int isik_deger;

void setup() {
 pinMode(ldr, INPUT);
 pinMode(isik, OUTPUT);
 Serial.begin(9600);
}
void loop() {
isik_deger = analogRead(ldr);
Serial.println(isik_deger);
if(isik_deger < 300){
  digitalWrite(isik, LOW); 
 }
 else{
  digitalWrite(isik, HIGH);
 }
delay(300);
}
