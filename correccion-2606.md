# Corrección 26/06

Hola chicos, 

Bien el repo. 

Falla el código de búsqueda con este error:
```python
{'_id': 15, 'Materia': 'Montaje', 'dia': 'Viernes', 'docente': 'Barbato Gustavo', 'duracion': '4', 'horario_inicio': '09:50'}

Materias que son del día 'Jueves':
Traceback (most recent call last):
  File "/home/alan/Escritorio/madero/lenguajes_electronicos/2024/mongo/busqueda.py", line 19, in <module>
    print(storage.find({'dia': 'Jueves'}))
TypeError: Storage.find() takes 1 positional argument but 2 were given
```

¿Cómo se soluciona? 

Ojo también con el archivo instructivo. Debe ser `.md`, no un `.py`

Nota: 9 (nueve) 

