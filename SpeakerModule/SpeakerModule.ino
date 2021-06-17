/*
 * Speaker Module 구동 예제 <버전정보>
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

void setup()
{
    ;
}

void loop()
{
    /* 스피커에 기계음을 발생시킵니다. */
    // 이 예제에서는 아두이노 나노의 "D11" 핀을 오디오 출력핀으로 할당합니다.
        // tone(할당 핀, 출력주파수);
    // 100Hz부터 1KHz 사이의 임의의 주파수를 출력합니다.
        // random(최소값, 최대값);
    tone(11, random(100,1000));
    delay(50);  // 50mSec동안 출력합니다.
}