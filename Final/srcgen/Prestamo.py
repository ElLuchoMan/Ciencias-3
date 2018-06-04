class Prestamo:
  def __init__(this,codigo,fechaI,fechaF,fechaO,observacion):
    this.codigo=codigo
    recurso = Recurso()
    cuenta = Cuenta()
    estado = Estado()
    this.fechaI=fechaI
    this.fechaF=fechaF
    this.fechaO=fechaO
    this.observacion=observacion

  def getCodigo():
    return this.codigo

  def getRecurso():
    return this.recurso

  def getCuenta():
    return this.cuenta

  def getEstado():
    return this.estado

  def getFechai():
    return this.fechaI

  def getFechaf():
    return this.fechaF

  def getFechao():
    return this.fechaO

  def getObservacion():
    return this.observacion

  def setCodigo(this,codigo):
    this.codigo = codigo

  def setRecurso(this,recurso):
    this.recurso = recurso

  def setCuenta(this,cuenta):
    this.cuenta = cuenta

  def setEstado(this,estado):
    this.estado = estado

  def setFechai(this,fechaI):
    this.fechaI = fechaI

  def setFechaf(this,fechaF):
    this.fechaF = fechaF

  def setFechao(this,fechaO):
    this.fechaO = fechaO

  def setObservacion(this,observacion):
    this.observacion = observacion

