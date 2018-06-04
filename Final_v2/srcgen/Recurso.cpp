class Recurso{

  Recurso(this){
      estado = Estado();
      categoria = Categoria();
      historial = Historial();
  }
  Recurso((this,codigo,nombre,descripcion):
      this.codigo=codigo
      this.nombre=nombre
      this.descripcion=descripcion
      estado = Estado();
      categoria = Categoria();
      historial = Historial();

  void getCodigo(){
    return this.codigo
	}
  void getNombre(){
    return this.nombre
	}
  void getDescripcion(){
    return this.descripcion
	}
  void getEstado(){
    return this.estado
	}
  void getCategoria(){
    return this.categoria
	}
  void getHistorial(){
    return this.historial
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

  String setEstado(this,estado){
    this.estado = estado
  }

  String setCategoria(this,categoria){
    this.categoria = categoria
  }

  String setHistorial(this,historial){
    this.historial = historial
  }

};