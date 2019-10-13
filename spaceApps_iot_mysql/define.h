/*
 * Comunicaciones I2C
 */

#define SDA D1
#define SCL D2
/*
 * Configuración wifi
 */

#define STASSID "TU_SSID"
#define STAPSK  "TU_PASSWORD_MINIMO_8CARACTERES"

/*
 * Función preprocesada para trabajar con tiempos y no con "delay"
 * Nos permite hacer una ejecución sin bloquear el dispositivo
 */
 
 #define runEvery(t) for (static uint16_t _lasttime;(uint16_t)((uint16_t)millis() - _lasttime) >= (t);_lasttime += (t))
