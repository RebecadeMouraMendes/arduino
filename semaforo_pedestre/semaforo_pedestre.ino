// C++ code
//
int verPed = 6;
int vermPed = 7;
int verCar = 10;
int vermCar = 12;
int amaCar = 11;
  
void setup()
{
  pinMode(verPed, OUTPUT);
  pinMode(vermPed, OUTPUT);
  pinMode(verCar, OUTPUT);
  pinMode(vermCar, OUTPUT);
  pinMode(amaCar, OUTPUT);
}

void loop()
{
  digitalWrite(verCar, HIGH);
  digitalWrite(vermPed, HIGH);
  delay(5000);
  digitalWrite(verCar, LOW);
  digitalWrite(amaCar, HIGH);
  delay(2000);
  digitalWrite(amaCar, LOW);
  digitalWrite(vermCar, HIGH);

  digitalWrite(vermPed, LOW);
  digitalWrite(verPed, HIGH);
  delay(5000);
  digitalWrite(verPed, LOW);
  for(int i = 0; i<=3; i++){
  digitalWrite(vermPed, HIGH);
  delay(500);
  digitalWrite(vermPed, LOW);
  delay(500);
  }
  digitalWrite(vermCar, LOW);
  
  
}
