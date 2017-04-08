# Vgrbl
Grbl G-Code Interpreter / Stepper Motor Controller with Variable Pins

This is a small modification of the popular Grbl G-Code Interpreter / Stepper Motor Controller allowing for reassignment of pins at run-time. 

When uploaded, the software should behave exactly like the unmodified Grbl. To change the assignment of any pin, the ‘$V’ command followed by a letter, an equal sign and a number ($Vx=n ) can be issued. The letter indicates the function of the pin, the number corresponds to the pin numbers of an Arduino Uno board. For e.g. the Command “$VA=18” would designate Arduinos A4 pin to act as Grbl’s X-Step output.

SnapCNC is a G-Code sender featuring a pin assignment GUI. It can be found on https://drive.google.com/drive/folders/0B4rNCk6xyuP_Y1ZuMnlzUmxHbEE

$VA	> 	(2)	X Step
$VB	> 	(3)	Y Step
$VC	> 	(4)	Z Step
$VD	> 	(5)	X Dir
$VE	> 	(6)	Y Dir
$VF	> 	(7)	Z Dir
$VG	> 	(8)	Enable
$VH	< 	(9)	X Limit
$VI	< 	(10)	Y Limit
$VJ	< 	(11)	Z Limit
$VK	> 	(12)	M3
$VL	> 	(13)	Spindle Direction (M4)
$VM	<	(14)	Reset/Abort	A0
$VN	< 	(15)	Feed Hold	A1
$VO	< 	(16)	Cycle Start/Resume	A2
$VP	> 	(17)	Coolant	A3
$VQ	  	(18)	Not Used	A4
$VR	< 	(19)	Probe	A5

Note:
New libraries in the AVR/Arduino IDE can result in "sketch too large" error when compiling Grbl.
I therefore have included a precompiled HEX file that can be flushed to the UNO board.
