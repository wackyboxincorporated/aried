[ UNO AVR arduino .ino for the Uno driving serial interface and i2c display. ]
# ArIED : Arduino IED. (Not IDE.)
The ArIED project is to create a device that is used to easily create electronic remote control of "landforming / mining explosives" . 
A lot of voltage conversion circuitry is hidden within this little gadget. 12v solenoid driving!!1 Let's go! Thin high-resistance wire red hot! Let's... move forward.
It has to have a battery for that reason!

Specification: 
Battery: 2000 mAh Li-Ion 3.7v (converted to 5v internally)
Processing: ESP32-S3-WROOM1 (currently not in use) , Uno (not mega)
Interconnect circuitry: Just over a baker's dozen wires, voltage step-up on pin 12 and battery positive
Interface: Pushbutton, switch, i2c 20x4 LCD, USB (on arduino), serial (on arduino), 2 analog input pins available for input from another piece of equipment ( like a radio reciever )
Purpose:
--------- = wire
* = explosion
~ = radio signals
() = wall
| = vertical wire
% = igniter or solenoid or whatever is used


*********                                         -|------ stepup converter
Explosive %------------------------|()()()         |          |
.  ********                       |()()()----------|--      ArIED 
  .                                                           |
 .                                                            ------- radio reciever ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ radio



Trying to simplify the way rigging personal land forming explosives are setup and controlled.
It's called ArIED because IED is improvised bomb, and that's what this helps , is to reduce the improvisation and just  make it simple!
Not a terrorist device, and not for criminal use.




