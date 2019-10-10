/*
 예제 4.3
 RGB-LED 밝기 조절
*/

const int RedLed    =  3;	  //를 3번핀에 연결
const int GreenLed  =  5;	  //LED B를 5번핀에 연결
const int BlueLed   =  6;	  //LED B를 5번핀에 연결

void setup()
{
  
  ledOutput(255, 255, 0);
 
}

void loop()
{
  
}

void ledOutput(int Red, int Green, int Blue){
  analogWrite(RedLed,Red);
  analogWrite(GreenLed,Green);
  analogWrite(BlueLed,Blue);
}
 

