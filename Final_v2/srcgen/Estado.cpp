class Estado{

  Estado(this){
  }
  Estado((this,codigo,nombre,descripcion):
      this.codigo=codigo
      this.nombre=nombre
      this.descripcion=descripcion

  void getCodigo(){
    return this.codigo
	}
  void getNombre(){
    return this.nombre
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

  String setDescripcion(this,descripcion){
    this.descripcion = descripcion
  }

};