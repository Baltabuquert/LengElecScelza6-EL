import machine
from machine import Pin
import time
from umqtt.simple import MQTTClient
import network
# ----
# Definiciones
ssid = 'Wokwi-GUEST'
wifipassword = ''
sta_if = network.WLAN(network.STA_IF)
sta_if.active(True)
# ----
# Conexión a internet
sta_if.connect(ssid, wifipassword)
print("Conectando")
while not sta_if.isconnected():
   print(".", end="")
   time.sleep(0.1)
print("")
print("Conectado a Internet")
# ----
# Conexión a los tópicos
mqtt_server = "io.adafruit.com"
port = 1883
user = "Campana"
password = "aio_oXtF1474MEfogVyOSYvJQ9L9m9pt"
client_id_gauge = "Identificador"
topico_lectura="Campana/feeds/lectura"

# Conexión al broker
try:
   conexionMQTT = MQTTClient(client_id_gauge, mqtt_server,user=user,password=password,port=int(port))
   conexionMQTT.connect() #Hacemos la conexión.
   print("Conectado con Broker MQTT")
except OSError as e:
   #Si falló la conexión, reiniciamos todo
   print("Fallo la conexion al Broker, reiniciando...")
   time.sleep(5)
   machine.reset()

# Funciones
def enviar_msg(msg):
    try:
        conexionMQTT.publish(topico_lectura,str(msg))
        print(f'Mensaje enviado con exito: {msg}')
    except OSError as e:
        print("Error ",e)
        time.sleep(5)
        machine.reset()
# ----

# Conexión al broker
try:
   conexionMQTT = MQTTClient(client_id_gauge, mqtt_server,user=user,password=password,port=int(port))
   conexionMQTT.connect() #Hacemos la conexión.
   print("Conectado con Broker MQTT")
except OSError as e:
  #Si falló la conexión, reiniciamos todo
   print("Fallo la conexion al Broker, reiniciando...")
   time.sleep(5)
   machine.reset()

# Funciones
def enviar_msg(msg):
    try:
        conexionMQTT.publish(topico_lectura,str(msg))
        print(f'Mensaje enviado con exito: {msg}')
    except OSError as e:
        print("Error ",e)
        time.sleep(5)
        machine.reset()
      
# Definimos el pin del led
led = Pin(13, Pin.OUT)

# Funcion de encencido y apagado del led 
while True:
   enviar_msg("Led Prendido")
   led.on()
   time.sleep(1)
   enviar_msg("Led Apagado")
   led.off()
   time.sleep(1)
