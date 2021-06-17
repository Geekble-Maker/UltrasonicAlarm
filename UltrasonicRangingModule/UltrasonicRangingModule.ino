/*
 * Geekble Co. LTD.
 * <키트이름> 의 <센서이름-초음파거리센서> 을 구동하는 예제입니다.
 * <https://geekble.shop/***> <링크할당>
 * 
 * 더 재미있는 예제를 찾아보고 여러분의 멋진 아이디어를 공유해주세요!
 * <링크할당, 기획 확인>
 */
 
#include <Ultrasonic.h>

Ultrasonic Detector(5, 6);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Distance: ");
	  Serial.print( Detector.read() );
    Serial.println(" Cm");
    delay(1000);
}
