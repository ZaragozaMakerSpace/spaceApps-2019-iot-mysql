
void debug(String msg)
{
  if (DEBUG)
    Serial.println(msg);
  
}

void configurarDebug()
{
  if (DEBUG)Serial.begin(115200);
  Serial.println(__DATE__);
  Serial.println(__TIME__);
  Serial.println(__FILE__);

}
