void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
char  input = Serial.read();
Serial.println(input);
  if(input=='f'){// forwar
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    } 
   else if(input == 's'){//stop
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
   }
   else if(input == 'b'){//back
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
   }
   else if (input =='r'){//turn right
    digitalWrite (7, HIGH);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    delay (2200);
    digitalWrite(7, LOW);
    digitalWrite (8, LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    }
    else if(input == 'l'){//turn left
    digitalWrite (7, LOW);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, HIGH);
    delay (2200);
    digitalWrite(7, LOW);
    digitalWrite (8, LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
      }
      else if (input=='g'){ //rotate clockwise
    digitalWrite (7, HIGH);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    delay (3000); 
        }
      else{
    delay(2000);
    }
   }
  }

