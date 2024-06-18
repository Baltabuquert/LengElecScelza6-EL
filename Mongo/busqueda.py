#!/usr/bin/python3

import pymongo
from base import Storage  

uri = "mongodb://localhost:27017/"
db = "madero"
coll = "clases"
storage = Storage(uri, db, coll)

# Traer toda la info a una variable
materias = storage.find()

print("Todas las materias:")
for materia in materias:
    print(materia)

print("\nMaterias que son del día 'Jueves':")
print(storage.find({'dia': 'Jueves'}))

print("\nMaterias que comienzan antes de las 12hs:")
print(storage.find({'inicio': {'$lt': '12:00'}}))

print("\nMaterias que duran más de 2 horas:")
print(storage.find({'duracion': {'$gt': 2}}))

print("\nMaterias que duran menos de 2 horas:")
print(storage.find({'duracion': {'$lt': 2}}))

print("\nMaterias cuyo nombre del docente comienza con la letra 'A':")
print(storage.find({'docente': {'$regex': '^A', '$options': 'i'}}))
