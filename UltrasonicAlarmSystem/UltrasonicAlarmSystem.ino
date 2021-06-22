/*
 * Geekble Co. LTD.
 * <키트이름-초음파경보기> 을 구동하는 예제입니다.
 * <https://geekble.shop/***> <링크할당>
 * 
 * 더 재미있는 예제를 찾아보고 여러분의 멋진 아이디어를 공유해주세요!
 * <링크할당, 기획 확인>
 */

#define Alarm_Distance 100
#define Pin_Speaker 11

#include <Ultrasonic.h>

Ultrasonic Detector(5, 6);
unsigned int Distance_Cm;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
	  Distance_Cm = Detector.read();
    Serial.print("Distance: ");
    Serial.print(Distance_Cm);
    Serial.println(" Cm");
    
    if (Distance_Cm < Alarm_Distance)
    {
        tone(Pin_Speaker, random(100,1000));
    }
    
    else
    {
        noTone(Pin_Speaker);
    }

    delay(50);
}
