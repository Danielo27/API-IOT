#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

String getApiHttps(const char* host, const String instruction,const char* id, bool debug){
   HTTPClient http;
   WiFiClientSecure client;

   const int httpsPort = 443;
   String url = host + instruction + id;
   
   client.setInsecure();
   client.connect(url, httpsPort);

   http.begin(client, url);
   
   delay(1000);
      
   int httpCode = http.GET();
   String payload;

   if(http.GET() == HTTP_CODE_OK){
      payload = http.getString(); 
   }else{
     payload = "error 404";
   }
   
   if(debug == true){
      Serial << "HTTP URL: " << host << "Rensponse Code: " << httpCode << "\n Returned data from Server " << payload << "\n";
   }
   
   http.end();
   return payload;
}

String getApiHttp(const char* host ,const String instruction,const char* id, bool debug){
  WiFiClientSecure httpsClient;
  WiFiClient client;
  HTTPClient http;

  String link;

  link = host + instruction + id;
  
  http.begin(client, link);
  int httpCode = http.GET();

  String payload = http.getString();
  if(debug == true){
      Serial << "HTTP URL: " << link << " Rensponse Code: " << httpCode << " Returned data from Server " << payload << " payload \n";
   }
  
  http.end();
  return payload;
}

 /*API: Control Conection
  Version: 1.2
  Author: Daniel Quintero Henriquez*/
