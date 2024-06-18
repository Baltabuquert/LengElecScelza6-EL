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
      
# Definimos el pin de los leds
led1 = Pin(13, Pin.OUT)
led2 = Pin(12, Pin.OUT)

# Funcion de encencido y apagado de los leds 
while True:
   enviar_msg("Led 1 Prendido")
   enviar_msg("Led 2 Prendido")
   led1.on()
   led2.on()
   time.sleep(2)
   enviar_msg("Led 1 Apagado")
   enviar_msg("Led 2 Apagado")
   led1.off()
   led2.off()
   time.sleep(2)
