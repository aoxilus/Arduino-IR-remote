#include <IRremote.h>
int RECV_PIN = 8;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  if (IrReceiver.decode())
  {
    double thevalue=IrReceiver.decodedIRData.decodedRawData;
    Serial.println(thevalue);
    irrecv.resume(); // Receive the next value
    Serial.println("/////////////");
    if (thevalue == 3108437760 )
    {
      Serial.println("This is UP");
    }
    if (thevalue == 3927310080 )
    {
      Serial.println("This is DOWN");
    }
  }
  delay(100);



}
