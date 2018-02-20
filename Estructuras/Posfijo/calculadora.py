from pila import *

class Calculadora:

    def __init__(self):
        self.pila = Pila()
        

    def posOrden(self,op):
            self.arreglo = op
            for i in self.arreglo:
                if i == '-':
                    a = self.pila.desapilar()
                    b = self.pila.desapilar()
                    self.pila.apilar(b-a)
                elif i == '+':
                    a = self.pila.desapilar()
                    b = self.pila.desapilar()
                    self.pila.apilar(b+a)
                elif i == '*':
                    a = self.pila.desapilar()
                    b = self.pila.desapilar()
                    self.pila.apilar(b*a)
                elif i == '/':
                    a = self.pila.desapilar()
                    b = self.pila.desapilar()
                    self.pila.apilar(b/a)    
                else:
                    self.pila.apilar(i)
            print(self.pila.desapilar())
        

