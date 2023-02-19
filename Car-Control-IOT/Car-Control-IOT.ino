/*modules*/
#include "config.h"
#include "concat.hpp"
#include "network.hpp"
#include "API.hpp"
#include "Json.hpp"

void setup(){
   Serial.begin(115200);
   conectar_red(nombre,contraseña);
}

void loop() {
  String json = getApiHttp(url,objeto,id,true);
  Serial.println(json);
  JsonObject& respuesta =  decodificaJson(json);
  Serial.println(respuesta["instruction"].as<char*>());
}
