from pila import *

class Calculadora:

    def __init__(self, op):
        self.op = op
        pila = Pila()

    def posOrden():
        
        for i in op:
            if op[i] == '-':
                a = pila.desapilar()
                b = pila.desapilar()
                pila.apilar(a-b)
            else:
                pila.apilar(op[i])
    
        return pila.desapilar()

arreglo = [2,1,"-"]
cal = Calculadora(arreglo)
print(cal.posOrden)
