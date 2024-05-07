import os # importo el sistema para poder limpiar la pantalla del terminal de Windows y Linux
import csv # importo csv para la lectura del archivo .csv

# funcion para limpiar la pantalla, dejando el trabajo mas presentable
def clear():
    if os.name == "nt":
        os.system("cls")
    else:
        os.system("clear")
clear()

#Defino variables y matrices necesarias
tipos_arboles = {}
nombre_arbol = {}
numero_arbol = {}
diam = {}
menu = {}
elegido = {}
orden = 0
prom = 0
i = 0

# Leer el archivo
with open('arbolado-en-espacios-verdes.csv', newline='') as csvfile:
	spamreader = csv.reader(csvfile, delimiter=',')
	next(spamreader)
	for row in spamreader:
		
		tipo_arbol = row[7]
		diametro = row [4]

		if tipo_arbol in tipos_arboles: 
			# Ya lo tengo, le sumo uno
			tipos_arboles[tipo_arbol] += 1
			diam[tipo_arbol] += int(diametro)

		else: 
			# Es el primer arbol que leo
			tipos_arboles[tipo_arbol] = 1
			
			#menú gráfico
			numero_arbol[tipo_arbol] = int(orden) + 1
			orden = orden + 1

			#Pongo un numero al arbol
			nombre_arbol [int(i) + 1] = tipo_arbol
			i = i + 1

			#Descubro el diametro de los arboles
			diam[tipo_arbol] = int(diametro)
			

# Ordeno de menor a mayor
ordenados = {k: v for k, v in sorted(numero_arbol.items(), key=lambda item: item[1], reverse=False)}

#imprimo y realizo pruebas
for arbol in ordenados:
	print (f'{ordenados[arbol]} | {arbol}')

# Agrego el input
a = None
while a is None:
    try:
    	print()
    	a = int(input("Enter a number: "))

    except ValueError:
   		print("Not an integer value...")

elegido = nombre_arbol[a]

print("")
print("Arbol elegido: ",elegido)

prom = diam[elegido]/tipos_arboles[elegido]

print ("Promedio del diametro: ",prom)
print()
