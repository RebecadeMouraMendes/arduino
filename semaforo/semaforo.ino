// C++ code
//
int vermelho = 12;
int verde = 7;
int amarelo = 11;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
}

void loop()
{
  digitalWrite(verde, HIGH); // Led vermelho fica aceso
  delay(5000); // Esperar 5 segundos
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH); // Led amarelo fica aceso
  delay(2000); // Esperar 2 segundos
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH); // Led verde fica aceso
  delay(5000); // Esperar 5 segundos
  digitalWrite(vermelho, LOW);
}