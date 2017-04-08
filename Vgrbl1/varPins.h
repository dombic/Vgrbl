 extern volatile uint8_t *ioPort[19];
 extern volatile uint8_t *ioPin[19];
 extern volatile uint8_t *ioDdr[19];
 extern volatile uint8_t *ioInt[19];
 extern volatile uint8_t ioBit[19];

 extern uint8_t XSpin; // > X Step
 extern uint8_t YSpin; // > Y Step
 extern uint8_t ZSpin; // > Z Step
 extern uint8_t XDpin; // > X Dir
 extern uint8_t YDpin; // > Y Dir
 extern uint8_t ZDpin; // > Z Dir
 extern uint8_t ENpin; // > Enable
 extern uint8_t XLpin; // < X Limit
 extern uint8_t YLpin; // < Y Limit
 extern uint8_t ZLpin; // < Z Limit
 extern uint8_t M3pin; // > no PWM
 extern uint8_t M4pin; // > Spindle Direction (M4)
 extern uint8_t REpin; // < Reset/Abort
 extern uint8_t FHpin; // < Feed Hold
 extern uint8_t CSpin; // < Cycle Start/Resume
 extern uint8_t COpin; // > Coolant
 extern uint8_t NUpin; //   Not Used
 extern uint8_t PRpin; // < Probe

 void varPins();
