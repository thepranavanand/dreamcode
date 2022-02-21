#include<WiFi.h>
#define LED 2
#define WIFISSID "IASN”
#define PASSWORD "HIAI"
void setup(){
    Serial.begin(9600);
    Serial.println("Init... T1_Intro");
    pinMode(LED, OUTPUT);
Serial.print("\n\nConnecting to");
Serial.println(WIFISSID);

WiFi.begin(WIFISSID,PASSWORD);
while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
}
Serial.println("WiFi connected.IP address:");
Serial.println(WiFi.localIP())
}

void loop(){
    digitalWrite(LED, HIGH);   
    Serial.println("HIGH");
    delay(1000);                       
    digitalWrite(LED, LOW);    
    Serial.println("LOW");
    delay(1000);
}
