float pi = 3.14;
float diameter;
float height;
String naam;

void setup()
{
  Serial.begin(9600);
}

void loop()

{
  Serial.println("Wat is je naam?");
  while(Serial.available() == 0)
  {
    
  }
  naam = Serial.readString();

  Serial.println("Hallo " + naam + "  Hoe breed is jouw cilinder?");

    while(Serial.available() == 0)
  {
    
  }
  diameter = Serial.parseInt();

  Serial.println("En hoe hoog is jouw cilinder?");

  while(Serial.available()==0)
  {
    
  }

  height = Serial.parseInt();

  while(Serial.available()==0)
  {
    
  }
  
  //calculate volume cilindre
  float volume = pi * (diameter / 2) * (diameter / 2) * height;
  Serial.println("Inhoud van een cilinder ================");
  Serial.print ("hoogte ");
  Serial.print (height);
  Serial.print (" diameter, ");
  Serial.print (diameter);
  Serial.print (" de inhoud is ");
  Serial.print (volume);
  Serial.println ("cm3");
  delay (1000);

}
