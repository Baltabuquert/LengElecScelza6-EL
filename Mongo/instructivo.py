Instructivo Pymongo 
Crear una base de datos

Lo primero que debemos implementar para poder crear una base de datos son las siguientes lineas:

1-import pymongo
2-myclient = pymongo.MongoClient("mongodb://localhost:27017/")
3-mydb = myclient["mydatabase"]

1-Importamos la libreria.
2-Aquí creamos el cliente donde vamos a usar la "URL" e "IP" correspondientes
3-Y seleccionamos un nombre para nuestra database.

Luego se podra verificar con el siguiente nombre:

print(myclient.list_database_names())

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Crear una colección

En el siguiente codigo nombraremos la coleccion para poder crearla.

mycol = mydb["customers"]

Y para verificar si la coleccion existe:

collist = mydb.list_collection_names()
if "customers" in collist:
  print("The collection exists.")

En el codigo de verificacion se pregunta si en todas las lista se encuentra nuestra coleccion, si asi se, lo mostrará en el print

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Crear un item

Tras crear la coleccion y la database, crearemos un diccionario, el cual luego lo agregaremos

1-mydict = { "name": "John", "address": "Highway 37" }
2-x = mycol.insert_one(mydict)

1-Creamos un documento
2-Lo agregamos

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Borrar un item

Para eliminar un solo item vamos a usar la siguiente linea: myquery = {"item" = "valor"}

1-myquery = { "address": "Mountain 21" }
2-mycol.delete_one(myquery) 

1-Determina la fila que tiene el valor "Mountain 21"
2-Y se borra la fila completa del "Mountain 21"

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Borrar muchos items

Para borrar muchos items existen 2 posiblidades, borrar solo algunos o borrar todos los items.

para borrar solo algunos items, vamos a usar el siguiente codigo:

1-myquery = { "address": {"$regex": "^S"} }
2-x = mycol.delete_many(myquery)

1-en ese ejemplo, se seleccion todos los items que comienzan con una "S"
2-finalmente se borran los items seleccionados

Por otra parte si se desea eliminar todos, los pasos a seguir son mas sencillos

x = mycol.delete_many({})

Con usar este comando ya se borrarían absolutamente todos los items

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Actualizar un item

Para actuaizar items, debemos crear otra query con el valor nuevo

1-myquery = { "address": "Valley 345" }
2-newvalues = { "$set": { "address": "Canyon 123" } }
3-mycol.update_one(myquery, newvalues)

1-el valor del item que se quiere actualizar
2-valor deseado al actualizar
3-se cambia el valor anterior por el nuevo

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Actualizar muchos items

1-myquery = { "address": { "$regex": "^S" } }
2-newvalues = { "$set": { "name": "Minnie" } }
3-x = mycol.update_many(myquery, newvalues)

1-Se cre una query para todas las direcciones que empiezen con "S"
2-Declaro el nuevo valor deseado, el cual sera el nombre "Minnie"
3-Termino reemplazando/actualizando los valores

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Buscar todos los items

En el caso de buscar todos los items se usan las siguientes lineas de código

1-for x in mycol.find():
2-  print(x) 

1-El codigo for x in hara que lea todo los items.
2-Se va a mostrar todos los items encontrados.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Buscar algunos items

Para buscar solo unos items, se usaran los siguientes códigos:

1-for x in mycol.find({},{ "_id": 0, "name": 1, "address": 1 }):
2-  print(x) 

1-Se usa el mismo codigo que usamos para seleccionar todos los items, pero ahora usaremos unos parametros 
con los que seleccionamos que items queremos, dependiendo si ponemos un "1" si queremos ver los items, y un
"0" si no es el caso.
2-Se muestra el resultado.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Buscar un solo item

Las busquedas se van a basar en el siguiente codigo:

1-x = mycol.find_one()
2-print(x) 

1-Buscamos la coleccion
2-El print la muestra para poder leerla
