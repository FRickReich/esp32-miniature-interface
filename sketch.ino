#include <WiFi.h>

// sketch configuration
const char* ssid        = "wi-fi network name";       // Name of wi-fi network.
const char* password    = "wi-fi network password";   // Password of wi-fi network.
const int serverPort    = 80;                         // Port to run the server on.
const String pageTitle  = "PageTitle"                // Title of website.

String header;                                      // HTTP request header.

// set LED to ON
// - pin                = GPIO to be controlled
void ledOn(int pin)
{
   digitalWrite(pin, HIGH);
}

// set LED to OFF
// - pin                = GPIO to be controlled 
void ledOff(int pin)
{
   digitalWrite(pin, LOW);
}

// set LED to fade
// - pin                = GPIO to be controlled
// - reverse            = Reverse fade direction (false > start OFF)
// - speed              = Speed of fade
void ledFade(int pin)
{

}

// set LED to blink
// - pin                = GPIO to be controlled
// - reverse            = Reverse blinking direction (false > start OFF)
// - firstDelay         = Delay for the on state
// - secondDelay        = Delay time for off state
void ledBlink(int pin)
{

}


// set LED to flicker
// - pin                = GPIO to be controlled
void ledFlicker(int pin)
{

}

# sketch start
void start()
{

}

# sketch loop
void loop()
{

}
