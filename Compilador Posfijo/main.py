from calculadora import *

with open('C:/Users/estudiantes/Desktop/Posfijo/operaciones.txt.txt','r') as f:
    content = f.readlines()

cal = Calculadora()

for i in content:
    content = i.strip('\n').split(' ')
    print(cal.posOrden(content))
    
