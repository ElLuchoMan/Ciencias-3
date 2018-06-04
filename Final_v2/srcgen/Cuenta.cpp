class Cuenta{

  Cuenta(this){
      estado = Estado();
      historial = Historial();
  }
  Cuenta((this,codigo,nombre,apellido,mail,telefono):
      this.codigo=codigo
      this.nombre=nombre
      this.apellido=apellido
      this.mail=mail
      this.telefono=telefono
      estado = Estado();
      historial = Historial();

  void getCodigo(){
    return this.codigo
	}
  void getNombre(){
    return this.nombre
	}
  void getApellido(){
    return this.apellido
	}
  void getMail(){
    return this.mail
	}
  void getTelefono(){
    return this.telefono
	}
  void getEstado(){
    return this.estado
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

  String setApellido(this,apellido){
    this.apellido = apellido
  }

  String setMail(this,mail){
    this.mail = mail
  }

  String setTelefono(this,telefono){
    this.telefono = telefono
  }

  String setEstado(this,estado){
    this.estado = estado
  }

  String setHistorial(this,historial){
    this.historial = historial
  }

};