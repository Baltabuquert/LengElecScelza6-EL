import pymongo

client = pymongo.MongoClient("mongodb://localhost:27017/")
db = client["madero"] # Nombre de la base de datos
coll = db["clases"] # Nombre de la colección (tabla)

materias = [
                {'Materia': 'Literatura', 'dia': 'Lunes', 'horario_inicio': '07:35', 'duracion': '2', 'docente': 'Salaberry Walter'},
                {'Materia': 'Ingles', 'dia': 'Lunes', 'horario_inicio': '09:50', 'duracion': '2', 'docente': 'Hernandez Maximiliano'}, 
                {'Materia': 'Instalaciones y Maquinas Electricas', 'dia': 'Lunes', 'horario_inicio': '12:00', 'duracion': '4', 'docente': 'Chazarreta Mariano'},
                {'Materia': 'Filosofia', 'dia': 'Lunes', 'horario_inicio': '03:50', 'duracion': '2', 'docente': 'Ravinale Santiago'},
                {'Materia': 'Derechos del Trabajo', 'dia': 'Martes', 'horario_inicio': '07:35', 'duracion': '2', 'docente': 'Yrigoyen Victor'}, 
                {'Materia': 'Arte', 'dia': 'Martes', 'horario_inicio': '09:50', 'duracion': '2', 'docente': 'Alcarraz Nelson'},
                {'Materia': 'Sistemas Productivos', 'dia': 'Martes', 'horario_inicio': '11:50', 'duracion': '2', 'docente': 'Servidio Luis'},
                {'Materia': 'Matematica', 'dia': 'Miercoles', 'horario_inicio': '07:35', 'duracion': '2', 'docente': 'Scarpa Ariel'}, 
                {'Materia': 'Comunicaciones', 'dia': 'Miercoles', 'horario_inicio': '09:50', 'duracion': '3', 'docente': 'Cazzaniga Alejandro'},
                {'Materia': 'Educacion Fisica', 'dia': 'Miercoles', 'horario_inicio': '12:50', 'duracion': '2', 'docente': 'Pelado Sergio'},
                {'Materia': 'Lenguajes Electronicos', 'dia': 'Jueves', 'horario_inicio': '07:35', 'duracion': '2', 'docente': 'Scelza Alan'}, 
                {'Materia': 'Ingles', 'dia': 'Jueves', 'horario_inicio': '11:50', 'duracion': '1', 'docente': 'Rizzo Bruno'},
                {'Materia': 'Doctrina', 'dia': 'Jueves', 'horario_inicio': '12:00', 'duracion': '1', 'docente': 'Ravinale Santiago'}, 
                {'Materia': 'Digital', 'dia': 'Jueves', 'horario_inicio': '12:50', 'duracion': '4', 'docente': 'Scelza Alan'}, 
                {'Materia': 'Analogica', 'dia': 'Viernes', 'horario_inicio': '07:35', 'duracion': '4', 'docente': 'Chazarreta Mariano'},
                {'Materia': 'Montaje', 'dia': 'Viernes', 'horario_inicio': '09:50', 'duracion': '4', 'docente': 'Barbato Gustavo'}
           ]

print(list(coll.find()))

i=0 # Esta variable me va a ayudar a que cada materia tenga un _id único
for m in materias:
    coll.update_one({"_id": i}, { "$set": m } , upsert=True ) #Upsert en True -> Si no existe la crea, si existe la actualiza
    i+=1

print(list(coll.find()))
