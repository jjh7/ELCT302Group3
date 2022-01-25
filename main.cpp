#include "mbed.h"
#include <iostream>

AnalogIn potVoltage(PTE20);
PwmOut Tester0(PTD0);
PwmOut Tester1(PTD1);
PwmOut Tester2(PTD2);
PwmOut Tester3(PTD3);
PwmOut Tester4(PTD4);
PwmOut Tester5(PTD5);
PwmOut Tester6(PTA13);
PwmOut Tester7(PTA1);
PwmOut Tester8(PTA2);
PwmOut Tester9(PTA12);
PwmOut Tester10(PTA4);
PwmOut Tester11(PTA5);
PwmOut Tester12(PTC8);
PwmOut Tester13(PTC9);
PwmOut Tester14(PTE31);
PwmOut Tester15(PTC1);
PwmOut Tester16(PTC2);
PwmOut Tester17(PTB0);
PwmOut Tester18(PTB1);
PwmOut Tester19(PTB2);
PwmOut Tester20(PTB3);
PwmOut Tester21(PTE21);
PwmOut Tester22(PTE29);



#define Vmax 3.3f
#define Vmin 0.0f

float VoltageDigiValue;
float DutyCycle;

float getVoltage(void)
{
    VoltageDigiValue = potVoltage.read();
    
    return VoltageDigiValue*Vmax;
}
float changeDutyCycle(void)
{
     float voltageNow = getVoltage();
     DutyCycle = voltageNow/Vmax;
     Tester0.write(DutyCycle);
     Tester1.write(DutyCycle);
     Tester2.write(DutyCycle);
     Tester3.write(DutyCycle);
     Tester4.write(DutyCycle);
     Tester5.write(DutyCycle);
     Tester6.write(DutyCycle);
     Tester7.write(DutyCycle);
     Tester8.write(DutyCycle);
     Tester9.write(DutyCycle);
     Tester10.write(DutyCycle);
     Tester11.write(DutyCycle);
     Tester12.write(DutyCycle);
     Tester13.write(DutyCycle);
     Tester14.write(DutyCycle);
     Tester15.write(DutyCycle);
     Tester16.write(DutyCycle);
     Tester17.write(DutyCycle);
     Tester18.write(DutyCycle);
     Tester19.write(DutyCycle);
     Tester20.write(DutyCycle);
     Tester21.write(DutyCycle);
     Tester22.write(DutyCycle);
     return DutyCycle;
}

int main() {
    Tester0.period(0.010);
    Tester1.period(0.010);
    Tester2.period(0.010);
    Tester3.period(0.010);
    Tester4.period(0.010);
    Tester5.period(0.010);
    Tester6.period(0.010);
    Tester7.period(0.010);
    Tester8.period(0.010);
    Tester9.period(0.010);
    Tester10.period(0.010);
    Tester11.period(0.010);
    Tester12.period(0.010);
    Tester13.period(0.010);
    Tester14.period(0.010);
    Tester15.period(0.010);
    Tester16.period(0.010);
    Tester17.period(0.010);
    Tester18.period(0.010);
    Tester19.period(0.010);
    Tester20.period(0.010);
    Tester21.period(0.010);
    Tester22.period(0.010);    
    while(1) {
        cout << "\n\rPotVoltage:   " << getVoltage() << endl;
        changeDutyCycle();
        wait(0.5);
        
    }
}
