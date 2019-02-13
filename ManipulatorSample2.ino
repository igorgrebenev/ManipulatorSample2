 // Maksim Grebenev 2018
#import "SGServo.h"
#import "ROT3U6DOF.h"

void setup() {
  setupROT3U6DOF(0, 0); // 500-900Initialize servos ROT3U6DOF_SERVO_COUNT/ROT3U6DOF_SERVO_START_PORT
  resetROT3U6DOF(); // установим кутяплю в исходное положение
  delay(6000); // подождем 1 мин для прогрева потенцииометра
}

void loop() {
  // хотим собрать пирамидку
 
  // устанавливаем начальное положение манипулятора
  int positions00[] = {27, 65, 120, 180, 15, 20};
  performAllServos(positions00);

  delay(3000); 
}
