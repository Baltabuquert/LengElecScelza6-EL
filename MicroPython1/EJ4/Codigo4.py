import machine
from machine import Pin
import time
from umqtt.simple import MQTTClient
import network
from time import sleep_us,sleep
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
      
# Definimos el pin del boton, los leds y el sensor
boton = Pin(27, Pin.IN, Pin.PULL_DOWN)
led1 = Pin(14, Pin.OUT)
led2 = Pin(12, Pin.OUT)
led3 = Pin(13, Pin.OUT)

echo=Pin(21,Pin.IN)
trig=Pin(19,Pin.OUT)

while True:
   
    distance = ultrasonic.distance_cm()
    distancia(distance)
    time.sleep(0.5)
      
    a = button.value()
        
    if a == 0:
        if b == 0:                      
            b = 1
        else:
            b = 0

    distancia(distance)

    if b == 0:
       
        if distance < 10:
            ledG.value(0)
            ledB.value(0)
            ledR.value(0)
        elif distance < 20:
            ledG.value (1)
            ledR.value (0)
            ledB.value (0)
        elif distance < 30:
            ledG.value (1)
            ledR.value (0)
            ledB.value (1)
        elif distance < 40:
            ledB.value (1)
            ledG.value (1)
            ledR.value (1)
    elif b == 1:
      
        ledG.value(0)
        ledB.value(0)
        ledR.value(0)
        time.sleep(0.3)
        ledG.value(1)
        ledR.value(1)
        ledB.value(1)
        time.sleep(0.3)

time.sleep(0.5)

