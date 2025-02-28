/*
    SlimeVR Code is placed under the MIT license
    Copyright (c) 2021 Eiren Rain & SlimeVR contributors

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
*/
#ifndef SLIMEVR_SENSORFACTORY_H_
#define SLIMEVR_SENSORFACTORY_H_

#include "globals.h"
#include "sensor.h"

class SensorFactory
{

private:
    uint8_t getMagnetometerDeviceID(uint8_t addr);
    
public:
    SensorFactory();
    ~SensorFactory();
    void create();
    void init();
    void motionSetup();
    void motionLoop();
    void sendData();
    void startCalibration(int sensorId, int calibrationType);
    void SetIMU(uint8_t bus);
    void IMU_Int_Triggered(uint8_t IMU_ID);
    boolean GetSensorOnline(uint8_t IMU_ID);
    Sensor *IMUs[16];
    boolean CalibrationEvent();
};

#endif // SLIMEVR_SENSORFACTORY_H_