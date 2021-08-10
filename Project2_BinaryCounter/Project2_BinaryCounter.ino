int i = 0;
int num1 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(i = 0; i<32; i++){
    num1 = i;
    delay(500);
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,0);
    digitalWrite(12,0);
    digitalWrite(13,0);
    if (num1 > 15){
      digitalWrite(9,1);
      num1 = num1 - 16;
    }
    if (num1 > 7){
      digitalWrite(10,1);
      num1 = num1 - 8;
    }
    if (num1 > 3){
      digitalWrite(11,1);
      num1 = num1 - 4;
    }
    if (num1 > 1){
      digitalWrite(12,1);
      num1 = num1 - 2;
    }
    if(num1 > 0){
      digitalWrite(13,1);
      num1 = num1 - 1;  
    }
  }
}
