import machine
import urequests
from machine import Pin
import time
from umqtt.simple import MQTTClient
import network
from time import sleep_us,sleep
from hcsr04 import HCSR04
# ----
# Definiciones
ssid = 'CeluBalti'
wifipassword = 'hogriderrr'
sta_if = network.WLAN(network.STA_IF)
sta_if.active(True)
name = "BUQUERT,CAMPANA,PP"
# ----
# Conexión a internet
sta_if.connect(ssid, wifipassword)
print("Conectando")
while not sta_if.isconnected():
   print(".", end="")
   time.sleep(0.1)
print("")
print("Conectado a Internet")

def send_api(name, value):
    url = "http://192.168.220.127:5000/update"
    headers = {'Content-Type':'application/json'}
    data = {
            "name": name,
            "value": value
            }
    try:
        response = urequests.post(url ,json=data, headers=headers)
        print(response.text)
        response.close()
    except Exception as e:
        print("Error sending data:", e)
           
# Definimos los pines del sensor
ultrasonic = HCSR04(trigger_pin=23, echo_pin=22)
distance = 0

while True:
   
    distance = ultrasonic.distance_cm()
    print(distance)
    send_api(name, distance)
    time.sleep(3)
