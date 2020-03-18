#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(115200);
  mlx.begin();
}

void loop() {
  String line1, line2, line3, line4;
  line1 = "Object: ";
  line1 += String(mlx.readObjectTempC(), 1);
  line1 += "[C]";
  line2 = "Ambient: ";
  line2 += String(mlx.readAmbientTempC(), 1);
  line2 += "[C]";

  line3 = "Object: ";
  line3 += String(mlx.readObjectTempF(), 1);
  line3 += "[F]";
  line4 = "Ambient: ";
  line4 += String(mlx.readAmbientTempF(), 1);
  line4 += "[F]";

  Serial.println(line1);
  Serial.println(line2);
  Serial.println();
  Serial.println(line3);
  Serial.println(line4);
  Serial.println();

  delay(3000);
}
