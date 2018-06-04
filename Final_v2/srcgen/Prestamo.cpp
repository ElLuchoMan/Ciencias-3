class Prestamo{

  Prestamo(this){
      recurso = Recurso();
      cuenta = Cuenta();
      estado = Estado();
  }
  Prestamo((this,codigo,fechaIn,fechaFin,fechaOut,observacion):
      this.codigo=codigo
      this.fechaIn=fechaIn
      this.fechaFin=fechaFin
      this.fechaOut=fechaOut
      this.observacion=observacion
      recurso = Recurso();
      cuenta = Cuenta();
      estado = Estado();

  void getCodigo(){
    return this.codigo
	}
  void getFechain(){
    return this.fechaIn
	}
  void getFechafin(){
    return this.fechaFin
	}
  void getFechaout(){
    return this.fechaOut
	}
  void getObservacion(){
    return this.observacion
	}
  void getRecurso(){
    return this.recurso
	}
  void getCuenta(){
    return this.cuenta
	}
  void getEstado(){
    return this.estado
	}
  String setCodigo(this,codigo){
    this.codigo = codigo
  }

  String setFechain(this,fechaIn){
    this.fechaIn = fechaIn
  }

  String setFechafin(this,fechaFin){
    this.fechaFin = fechaFin
  }

  String setFechaout(this,fechaOut){
    this.fechaOut = fechaOut
  }

  String setObservacion(this,observacion){
    this.observacion = observacion
  }

  String setRecurso(this,recurso){
    this.recurso = recurso
  }

  String setCuenta(this,cuenta){
    this.cuenta = cuenta
  }

  String setEstado(this,estado){
    this.estado = estado
  }

};