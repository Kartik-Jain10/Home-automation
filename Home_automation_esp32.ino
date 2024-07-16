
#define BLYNK_TEMPLATE_ID "TMPL31rDGaSHo"
#define BLYNK_TEMPLATE_NAME "Home automation"
#define BLYNK_AUTH_TOKEN "eAUyO3DWvwBVlkNHwFd-_T68fAq4Tjw7"

#define BLYNK_PRINT Serial
#define relay_pin 23

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "NETWORK SSID";
char pass[] = "PASSWORD";

int relay;
// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin V1
// you can connect multiple vitual pin to ESP32 pins
BLYNK_WRITE(V1)
{
  int relay = param.asInt(); // assigning incoming value from pin V1 to a variable
  digitalWrite(relay_pin, !relay);

  // process received value
}

void setup()
{
  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
  delay(10);
  Serial.println('\n');
  
  WiFi.begin(ssid, password);             // Connect to the network
  Serial.print("Connecting to ");
  Serial.print(ssid);

  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect
    delay(500);
    Serial.print('.');
  }

  Serial.println('\n');
  Serial.println("Connection established!");  
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());         // Send the IP address of the ESP8266 to the computer
  // Debug console
  Serial.begin(9600);
  pinMode(relay_pin, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  
}

void loop()
{
 
  Blynk.run();

}