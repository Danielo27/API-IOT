#include <ArduinoJson.h>

JsonObject& decodificaJson(String json){
  const size_t capacity = JSON_OBJECT_SIZE(3) +
  JSON_ARRAY_SIZE(2) + 60; 
  DynamicJsonBuffer jsonBuffer(capacity);
   JsonObject& root = jsonBuffer.parseObject(json);
   if(!root.success()) {
    Serial.println("parseObject() failed");
   }
   return root;
}

/*API: Control Conection
  Version: 1.2
  Author: Daniel Quintero Henriquez*/
