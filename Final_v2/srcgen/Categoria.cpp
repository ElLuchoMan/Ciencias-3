class Categoria{

  Categoria(this){
  }
  Categoria((this,codigo,nombre,tiempo,descripcion):
      this.codigo=codigo
      this.nombre=nombre
      this.tiempo=tiempo
      this.descripcion=descripcion

  void getCodigo(){
    return this.codigo
	}
  void getNombre(){
    return this.nombre
	}
  void getTiempo(){
    return this.tiempo
	}
  void getDescripcion(){
    return this.descripcion
	}
  String setCodigo(this,codigo){
    this.codigo = codigo
  }

  String setNombre(this,nombre){
    this.nombre = nombre
  }

  String setTiempo(this,tiempo){
    this.tiempo = tiempo
  }

  String setDescripcion(this,descripcion){
    this.descripcion = descripcion
  }

};