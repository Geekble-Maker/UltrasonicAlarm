/*
 * Ultrasonic Alarm System 구동 예제 <버전정보>
 * <키트이름>을 구동하는 예제입니다.
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

#define Alarm_Distance 100  // 경보를 울릴 기준 거리를 설정합니다.
                            // 이 예제에서는 1m (100cm)를 기준으로 설정합니다.
#define Pin_Speaker 11      // 스피커 모듈의 + 핀을 연결할 아두이노 나노 핀을 설정합니다.
                            // 이 예제에서는 아두이노 나노의 "D11"핀을 오디오 출력핀으로 할당합니다.

#include <Ultrasonic.h>     // HC-SR04 초음파 거리 센서를 구동하기 위한 라이브러리를 불러옵니다.
                            // 이 예제에서는 "Ultrasonic" 라이브러리 3.0.0 버전을 사용합니다.

Ultrasonic Detector(5, 6);  // Ultrasonic 클래스의 Detector 인스턴스를 생성하고 핀을 할당합니다.
                            // 이 예제에서는 아두이노 나노의 "D5" 핀에 "Trig"를, "D6" 핀에 "Echo"를 할당합니다.

unsigned int Distance_Cm;   // 읽어들인 거리값을 저장하기위한 변수를 만듭니다.

void setup()
{
    Serial.begin(9600);     // 시리얼 모니터 사용을 위해 baud rate을 설정합니다.
                            // 이 예제에서는 아두이노 IDE 시리얼 모니터의 기본 baud rate인 "9600"으로 설정합니다.
}

void loop()
{
	Distance_Cm = Detector.read();  // 초음파 거리 센서에서 거리를 측정해 Distance_Cm에 저장합니다.

    /* 읽어들인 거리값을 Serial Monitor로 표시합니다.   */
    Serial.print("Distance: ");
    Serial.print(Distance_Cm);
    Serial.println(" Cm");
    
    /* 측정된 거리가 경보를 울릴 기준거리보다 가까운 경우입니다.    */
    if (Distance_Cm < Alarm_Distance)
    {
        tone(Pin_Speaker, random(100,1000));    // 100Hz부터 1KHz 사이의 임의의 주파수를 출력합니다.
                                                // random(최소값, 최대값);
    }
    
    /* 측정된 거리가 경보를 울릴 기준거리보다 먼 경우입니다.    */
    else
    {
        noTone(Pin_Speaker); // 경보음 출력을 중단합니다.
    }

    delay(100); // 100msec마다 위의 동작을 수행합니다.
}
