# Programa de ejemplo IOT + MySQL (basado en ESP8266)

## Ejemplo realizado para el space apps 2019 por parte de ZaragozaMakerSpace


###Aquí tenemos nuestros ingredientes.

.- 1 Wemos (LOLIN) D1 R2
.- OLED I2C (0.98'') (libreria SSD1306Wire)
.- Giroscopio  I2C (aunque no lo vamos a usar para las pruebas de base de datos)
.- Programa de ejemplo de manejo de bases de datos con el ESP8266 (github de zaragoza maker  space)

El ejemplo está dividido en diferentes apartados, un programa principal (.ino) y diferentes librerías locales (.h)

define.h:

.- Información de a que pines conectamos nuestro bus de datos I2C
.- Información sobre la WiFi a la que me voy a conectar (SSID, PSK)
.- Función para trabajar por tiempos sin usar delay

oled.h

.- Inicializar la pantalla
.- Mostrar mensajes en pantalla (recomendable ver ejemplo que viene con la librería SSD1306Wire)
.- Función de mostrar información por pantalla (debugoled(String msg));

wifi.h

.- Función de conectar a una red WiFi indicada en el define.h

mysql.h

.- Conectar a una base de datos.
.- Ejemplo de la consulta SQL necesaria para introducir los datos
