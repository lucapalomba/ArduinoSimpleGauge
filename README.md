# ArduinoSimpleGauge

This is an example for using Arduino with the ServoMotor.

I've used this simple code to convert a sequential 3 Byte expressed in degrees (000-Max[150 for my servo]);


## How pass data

Data must be passed with Data Serialization in 3 byte.
If you want to pass a <100 number, use 0 to complete the 3byte sequence.
These 3 bytes represent the angle degrees of your servo, is quite simple and it works perfectly.

### Example

byte[0] = 0
byte[1] = 9
byte[2] = 5

This sequence represent 95°

## Keep your angle < Max

Your servo is created for working with an angle between 0 and 180, but sometimes your servo is not perfectly setted and can have problem with the bounds numbers.

My servo for example works with 0-150 boundaries.
