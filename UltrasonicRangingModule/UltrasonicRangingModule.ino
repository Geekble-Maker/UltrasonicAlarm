/*
 * HC-SR04 초음파 거리 센서 구동 예제 <버전정보>
 * <키트이름> 의 <센서이름> 을 구동하는 예제입니다.
 * 
 * 키트 정보를 아래 링크에서 확인하실 수 있습니다.
 * <https://geekble.shop/***> <링크할당>
 * 더 재미있는 예제를 찾아보고 여러분의 멋진 아이디어를 공유해주세요!
 * <링크할당, 기획 확인>
 * 
 * 설명 영상을 참고하세요 <기획단 확인해주세요>
 * 
 * 가장 최신 버전의 코드를 아래 링크에서 확인하실 수 있습니다.
 * <git 링크 할당? 민바크님 도움필요>
 * 
 * Geekble Co. LTD. <수드래곤!> <메롱>
 */

#include <Ultrasonic.h>     // HC-SR04 초음파 거리 센서를 구동하기 위한 라이브러리를 불러옵니다.
                            // 이 예제에서는 "Ultrasonic" 라이브러리 3.0.0 버전을 사용합니다.

Ultrasonic Detector(5, 6);  // Ultrasonic 클래스의 Detector 인스턴스를 생성하고 핀을 할당합니다.
                            // 이 예제에서는 아두이노 나노의 "D5" 핀에 "Trig"를, "D6" 핀에 "Echo"를 할당합니다.

void setup()
{
    Serial.begin(9600);     // 시리얼 모니터 사용을 위해 baud rate을 설정합니다.
                            // 이 예제에서는 아두이노 IDE 시리얼 모니터의 기본 baud rate인 "9600"으로 설정합니다.
}

void loop()
{
    /*
     * 1초마다 거리값을 읽어들여 Serial Monitor로 표시합니다.
     */
    Serial.print("Distance: ");
	Serial.print( Detector.read() );      // "인스턴스명".read(); 명령어를 이용해 거리값을 읽어 시리얼모니터로 전송합니다.
    Serial.println(" Cm");
    delay(1000);        // 1초간 대기합니다.
}