int sensorPin = 0; //pin analógico

void setup() //inicializa
{
Serial.begin(9600); //Comienza conexión serial
}
void loop() //Ejecución continua
{
int reading = analogRead(sensorPin);
//convertir a voltaje
float voltage = reading * 5.0* 100.0;
voltage /= 1024.0;
Serial.print(voltage); //envía por serial
Serial.println(" degrees C");
delay(1000); //pausa de un seg
}         
