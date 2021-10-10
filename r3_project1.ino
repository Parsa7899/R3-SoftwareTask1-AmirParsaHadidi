int number=0; // initializing the variable
int sensorValue = 0 ; // initializing the variable
void setup()
{
     Serial.begin(9600);    // initializing serial communication at 9600 bits per second:
     pinMode(A0, INPUT);
     
  // Right display
     pinMode(4, OUTPUT) ; 	//D0
     pinMode(5, OUTPUT) ; 	//D1
     pinMode(6, OUTPUT) ; 	//D2
     pinMode(7, OUTPUT) ; 	//D3
     // Left display
     pinMode(8, OUTPUT) ; 	//D0
     pinMode(9, OUTPUT) ; 	//D1
     pinMode(10, OUTPUT) ; 	//D2
     pinMode(11, OUTPUT) ; 	//D3

}

void display1(int number){  // Right 7-segments display
  //0000-binary format (display 0)
  if (number==0){
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  //0001-binary format (display 1)
  if (number==1){
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  //0010-binary format (display 2)
  if (number==2){
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  //0011-binary format (display 3)
  if (number==3){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  //0100-binary format (display 4)
  if (number==4){
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  //0101-binary format (display 5)
  if (number==5){
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  //0110-binary format (display 6)
  if (number==6){
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  //0111-binary format (display 7)
  if (number==7){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  //1000-binary format (display 8)
  if (number==8){
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
  //1001-binary format (display 9)
  if (number==9){
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
}
  
  
  void display2(int number){   //Left 7-segments display
  //0000-binary format (display 0)
  if (number==0){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  //0001-binary format (display 1)
  if (number==1){
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  //0010-binary format (display 2)
  if (number==2){
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  //0011-binary format (display 3)
  if (number==3){
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  //0100-binary format (display 4)
  if (number==4){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  //0101-binary format (display 5)
  if (number==5){
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  //0110-binary format (display 6)
  if (number==6){
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  //0111-binary format (display 7)
  if (number==7){
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  //1000-binary format (display 8)
  if (number==8){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  //1001-binary format (display 9)
  if (number==9){
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  }
  void loop(){
  display1(number); // Displaying numbers on the right 7-segment display
  display2(number); // Displaying numbers on the left 7-segment display
  sensorValue = analogRead(A0);      // reading the input on analog pin 0:
  number = map(sensorValue, 0, 1023, 0, 9);  
    }
  
  
  


 
  


