#include <ESP8266WiFi.h>
#include <WiFiClient.h>

/*FUNCTION WIFI CONECTION WIRSELESS*/
void conectar_red(const char* ssid,const char* password){
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    
    int retries = 0;
    while((WiFi.status() != WL_CONNECTED) && (retries < 15)){
      retries++;
      delay(500);
      Serial.print(".");
    }

    if(retries > 14){
      Serial.println(F("Intento de Conexion con la red Fallido"));
    }else{
      Serial << "Conexion Exitosa IP del Dispositivo: " << WiFi.localIP() << "\n";
    }
}
/*API: Control Conection
  Version: 1.0
  Author: Daniel Quintero Henriquez*/
