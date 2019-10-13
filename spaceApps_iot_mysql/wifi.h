#include <ESP8266WiFi.h>

WiFiClient client;

bool conectarWifi(uint16_t timeout = 15000)
{
  uint32_t flag = 0;
  bool conectado = false;
  uint8_t contador = 0;
  uint8_t progreso = 0;

  debug("Conectando: " + String(ssid));
  debug("pass:" + String(password));
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  flag = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - flag < timeout)
  {
    Serial.print(".");
    delay(500);
  }
  if (WiFi.status() == WL_CONNECTED)
  {
    conectado = true;
    Serial.println(WiFi.localIP());
  }
  return conectado;
}
