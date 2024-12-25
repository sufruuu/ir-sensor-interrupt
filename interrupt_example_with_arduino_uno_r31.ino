bool on=false;
void setup()
{
  pinMode(10, OUTPUT);
  attachInterrupt(0,ledchange,FALLING);
}

void loop()
{
 
  delay(10000);
  

}
void ledchange(){
 on=!on;
 if(on)
  digitalWrite(10,LOW );
  else
  digitalWrite(10, HIGH); 


}