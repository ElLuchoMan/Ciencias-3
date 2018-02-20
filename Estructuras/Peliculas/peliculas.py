#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys
from pila import *

class Pelicula:

    def __init__(self,name,year,gender,author):
        self.name=name
        self.year=year
        self.gender=gender
        self.author=author

pila = Pila()

pila.apilar(Pelicula("Love",2015,"Romance","Gaspar"))
pila.apilar(Pelicula("Robot",2012,"Fantasia","Cameron Corn"))
pila.apilar(Pelicula("Whiplash",2014,"Drama","Damien Chazelle"))
pila.apilar(Pelicula("The House",2002,"Horror","Jarnol Queen"))

while pila.es_vacia() == False:
    movie = pila.desapilar()
    print(movie.name)
    print(movie.year)
    print(movie.gender)
    print(movie.author+"\n")
print "La pila esta vacia:",pila.es_vacia()
