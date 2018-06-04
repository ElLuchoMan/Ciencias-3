class Historial{

  Historial(this){
  }
  Historial((this,codigo,historial):
      this.codigo=codigo
      this.historial=historial

  void getCodigo(){
    return this.codigo
	}
  void getHistorial(){
    return this.historial
	}
  String setCodigo(this,codigo){
    this.codigo = codigo
  }

  String setHistorial(this,historial){
    this.historial = historial
  }

};