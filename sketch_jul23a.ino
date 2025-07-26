#include "HUSKYLENS.h"
#include "SoftwareSerial.h"

HUSKYLENS huskylens;
SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  huskylens.begin(mySerial);

  if (!huskylens.knock()) {
    Serial.println("HuskyLens not connected!");
  } else {
    Serial.println("HuskyLens ready!");
  }

 
 huskylens.writeAlgorithm(ALGORITHM_OBJECT_CLASSIFICATION);

}

void loop() {
  if (!huskylens.request()) {
    Serial.println("No data from HuskyLens");
  } else if (!huskylens.available()) {
    Serial.println("No face detected");
  } else {
    while (huskylens.available()) {
      HUSKYLENSResult result = huskylens.read();
      Serial.print("Face ID: ");
      Serial.print(result.ID);
      Serial.print("  X: ");
      Serial.print(result.xCenter);
      Serial.print("  Y: ");
      Serial.println(result.yCenter);
    }
  }

  delay(300);
}
