

#include <Keyboard.h>




void setup() {
  // put your setup code here, to run once:

    Keyboard.begin();
    delay(5000);
    Keyboard.println("killall Dock");
    delay (1000);
    Keyboard.write(176);

}

void loop() {
  // put your main code here, to run repeatedly:

}
