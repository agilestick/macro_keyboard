#include "Keyboard.h"

//Define pins used.
#define BUTTON_2 2
#define BUTTON_3 3
#define BUTTON_4 4
#define BUTTON_5 5
#define BUTTON_6 6
#define BUTTON_7 7
#define BUTTON_8 8
#define BUTTON_9 9
#define BUTTON_10 10
#define BUTTON_11 11

int state = 1;

void setup()
{
  //Define the pinMode for each pin.
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
 

  //Sets the value of the pin on start up.
  digitalWrite(BUTTON_2, HIGH);
  digitalWrite(BUTTON_3, HIGH);
  digitalWrite(BUTTON_4, HIGH);
  digitalWrite(BUTTON_5, HIGH);
  digitalWrite(BUTTON_6, HIGH);
  digitalWrite(BUTTON_7, HIGH);
  digitalWrite(BUTTON_8, HIGH);
  digitalWrite(BUTTON_9, HIGH);
  digitalWrite(BUTTON_10, HIGH);
  digitalWrite(BUTTON_11, HIGH);



  Keyboard.begin(); //Turns the keyboard input on.
  delay(200); //Wait before continuing on with the code.
}

void loop()
{
  state = digitalRead(BUTTON_2);
  if(state != 1)
  {
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press('C'); //Presses the C key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_3);
  if(state != 1)
  {
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press('V'); //Presses the V key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_4);
  if(state != 1)
  {
    Keyboard.print(" GG "); //Prints a string message.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_5);
  if(state != 1)
  {
    Keyboard.press(KEY_LEFT_ALT); //Presses the ALT key.
    Keyboard.press(KEY_F4); //Presses the F4 key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_6);
  if(state != 1)
  {
    Keyboard.press(KEY_LEFT_ALT); //Presses the ALT key.
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_DELETE); //Presses the DELETE key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_7);
  if(state != 1)
  {
    Keyboard.press(KEY_LEFT_CTRL); //Presses the Windows key.
    Keyboard.press('A'); //Presses the E key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_8);
  if(state != 1)
  {
    Keyboard.press(KEY_LEFT_GUI); //Presses the Windows key.
    Keyboard.press('T'); //Presses the T key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_9);
  if(state != 1)
  {
    Keyboard.press(KEY_RETURN); //Presses the ENTER key.
    delay(200);
    Keyboard.releaseAll();
  }

  state = digitalRead(BUTTON_10);
  if(state != 1)
  {
    Keyboard.press(KEY_PAGE_UP); //Presses the CTRL key.
    delay(200);
    Keyboard.releaseAll();
  }
  
  state = digitalRead(BUTTON_11);
  if(state != 1)
  {
    Keyboard.press(KEY_PAGE_DOWN); //Presses the SHIFT key.
    delay(200);
    Keyboard.releaseAll();
  }




}
