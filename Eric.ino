/**
 * Name- Aditya Sheoran
 * Student ID- 2010993030
 */
void Point()
{
   digitalWrite(LED_BUILTIN, HIGH);     
   delay(200);                          
   digitalWrite(LED_BUILTIN, LOW);    
   delay(200);  
}                         
void Line()
{
   digitalWrite(LED_BUILTIN, HIGH);       
   delay(1000);                           
   digitalWrite(LED_BUILTIN, LOW);      
   delay(1000);                           
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  // A (.-)
    Point();                         
    Line();                        
    delay(2000);

    //D (-..)
    Line();
    Point();
    Point();
    delay(2000);

    //I (..)
    Point();
    Point();
    delay(2000);

    //T (-)
    Line();
    delay(2000);

    //Y (-.--)
    Line();
    Point();
    Line();
    Line();
    delay(2000);
  
    //A (.-)
    Point();
    Line();
    delay(2000);
}


  
