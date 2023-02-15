# API CONTROL PARA IOT

Esta API se esta desarrollando con el fin de controlar un dispositivo de tipo
ESP8266, Para dicha razon se estara usando esta API la cual almacenara las 
instrucciones a ejecutar por la ESP8266; par ello es necesario que dichos comandos se adapten
a las instrucciones que puede recibir el dispositivo.

Tambien es necesario configurar el dispositivo con el id del campo de la API que mostrara
las instrucciones al dispostivio de lo contrario el dispositivo retornara un 
error de tipo 404.

ademas de esto se desarrollo una interfaz en html5 para poder enviar las intrucciones
a ejecutar por el ESP8266.

# Instrucciones

```
cd (Ruta del Proyecto)/
node index.js
ngrok http --scheme=http 3000 --host-header=localhost:3000
```

# Requisitos
- json-Server
- IDE Arduino 
- ESP8266
- Interfaz de Control

# Agradecimientos

* Al Semillero Ruta de la innovacion. :+1:
* Yordan Quintero Por el diseño :+1:
* Al equipo de tutores de Unlab 4.0

# Formas de Ayudar

* Comenta a otros sobre este proyecto 📢
* Da las gracias públicamente :neckbeard: .


### :muscle: Daniel Quintero Henriquez


