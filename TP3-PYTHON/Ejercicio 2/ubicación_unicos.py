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
arboles_unicos = {}
longitud = {}

# Lectura del archivo
with open('completo.csv', newline='') as csvfile:
	spamreader = csv.reader(csvfile, delimiter=',')
	next(spamreader)
	for row in spamreader:
		
		#Paso los datos necesarios
		tipo_arbol = row[7] #Paso los tipos de arboles
		lon = row [0] #Paso la longitud
		lat = row [1] #Paso la latitud

		if tipo_arbol in tipos_arboles: # Ya lo tengo, le sumo uno
			tipos_arboles[tipo_arbol] += 1
		else: # Es el primer arbol que leo
			tipos_arboles[tipo_arbol] = 1



		# Elimino los arboles con mas de un ejemplar
		for tipo_arbol in tipos_arboles:
			if tipos_arboles[tipo_arbol] > 1:
				tipos_arboles[tipo_arbol] = 0


# Paso los arboles que si son "útiles" a una nueva matriz
for tipos_arboles in arboles_unicos:
	if tipos_arboles [tipo_arbol] == 1:
		arboles_unicos[tipo_arbol]

# Paso los parametros correspondientes a la longitud
for tipo_arbol in arboles_unicos:
	longitud [tipo_arbol] = double(lon)

# Paso los parametros correspondientes a la latitud
for tipo_arbol in arboles_unicos:
	latitud [tipo_arbol] = double(lat)


# Imprimo los links de cada arbol
for tipo_arbol in arboles_unicos:
	print (f' {tipo_arbol}: https://www.google.com/maps?q={latitud}.{longitud}')