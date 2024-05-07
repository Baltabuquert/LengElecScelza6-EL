import csv

tipos_arboles = {}

 
with open('arbolado-en-espacios-verdes.csv', newline='') as csvfile:
	spamreader = csv.reader(csvfile, delimiter=',')
	next(spamreader)
	for row in spamreader:
		tipo_arbol = row[7]
		if tipo_arbol in tipos_arboles: 	tipos_arboles[tipo_arbol] += 1
		else: 			tipos_arboles[tipo_arbol] = 1

 
print(tipos_arboles)

# Ordeno
tipos_arboles_ordenados = {k: v for k, v in sorted(tipos_arboles.items(), key=lambda item: item[1], reverse=True)}


# Armo la tabla ordenada
for arbol in tipos_arboles_ordenados:
		print(f'{tipos_arboles_ordenados[arbol]}  | {arbol}')
