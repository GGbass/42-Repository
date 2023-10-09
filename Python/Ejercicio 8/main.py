f = open('fichero de texto 2.txt', 'w')
lista = [
    'linea 1\n',
    'linea 2\n',
    'linea 3\n',
]

f.writelines(lista)
f.close()