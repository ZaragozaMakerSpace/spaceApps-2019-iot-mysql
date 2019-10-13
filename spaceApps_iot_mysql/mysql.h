
#include <MySQL_Connection.h>
#include <MySQL_Cursor.h>




MySQL_Connection conn(&client);
MySQL_Cursor* cursor;


bool conectarMySQL()
{
  bool conectado=false;
  if (conn.connect(serverDB,3306,userDB,passwordDB))
  {
    debug("OK");
    cursor = new MySQL_Cursor(&conn);
    conectado= true;
  }
  else
  {
    debug(F("Error en la conexion base de datos"));
  }
  return conectado;
}

bool insertarMedida()
{
  /*
   * Hay que montar la consulta SQL como un texto, de ahí que se use el objeto String(valor) 
  */
  bool estado=false;
  String INSERT_SQL = "INSERT INTO prueba.tablaPrueba(`CAMPO1`,`CAMPO2`, `CAMPO3`)  \
                    VALUES ('" +String(5)+ "','" + String(6) + "', '" + String(7)+"');";
  debug(INSERT_SQL);
  if (cursor->execute(INSERT_SQL.c_str())==0)//La función admite cadenas de caracter y no objetos String
  {//Atención a los mensajes de error ya que devuelve positivo si ha enviado la consulta correctamente,  no controla error de sintaxis de SQL
    debug(F("Datos insertados correctamente"));
    estado=true;
  }
  else
  {
    debug(F("Error insertando datos"));
  }
  return estado;
}
