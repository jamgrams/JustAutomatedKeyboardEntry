

#include <Keyboard.h>




void setup() {
  // put your setup code here, to run once:

    Keyboard.begin();
    delay(5000);
    Keyboard.press(131);//cmd
    Keyboard.press(32);//space
    Keyboard.releaseAll();
    delay(5000);
    Keyboard.print("terminal");
    Keyboard.write(176);
    
    
    delay(5000);
    Keyboard.println("killall Dock");
    delay (1000);
    Keyboard.write(176);//enter

}

void loop() {
  // put your main code here, to run repeatedly:

}
