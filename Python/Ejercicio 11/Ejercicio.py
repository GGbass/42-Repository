import sqlite3

conn = sqlite3.connect('task.db')
cursor = conn.cursor()


rows = cursor.execute('SELECT * FROM Alumnos')
for row in rows:
    print(row)



conn.close()