
#define DEBUG 1

#include "define.h"
#include "oled.h"

#include "funciones.h"
/*
   Configuración de nuestro acceso wifi
   Los parametros están en el define.h
*/
const char* ssid     = STASSID;
const char* password = STAPSK;
#include "wifi.h"


/*
   Configuración de nuestra base de datos
*/

IPAddress serverDB(192, 168, 1, 68);
char userDB[] = "prueba";//Usuario de la base de datos
char passwordDB[] = "prueba";//password de la base de datos
#include "mysql.h"




void setup()
{
  configurarOled();
  configurarDebug();
  if (conectarWifi())
  {
    debug(F("WIFI OK"));
    debugOled(F("WIFI OK"));
    if (conectarMySQL())
    {
      debug(F("BD OK "));
      debugOled(F("BD OK"));
    }
    else
    {
      debug(F("Error en BD"));
      debugOled(F("Error BD"));
    }
  }
  else
  {
    debug(F("Error WIFI"));
    debugOled(F("Error WIFI"));
  }
}

void loop()
{
  runEvery(1000)
  {
    insertarMedida();
  }
}
