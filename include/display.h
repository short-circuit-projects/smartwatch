#pragma once
#include <cmath>
#include <TFT_eSPI.h>
#include <time.h>

class Display
{
public:
    void drawWiFiSymbol(int x, int y, uint16_t color = TFT_WHITE);
    void drawHomeSymbol(int x, int y, uint16_t color = TFT_WHITE);
    void drawRefreshSymbol(int x, int y, uint16_t color = TFT_WHITE);
    void drawClockSymbol(int x, int y, uint16_t color = TFT_WHITE);
    void drawFitnessSymbol(int x, int y, uint16_t color = TFT_WHITE);
    void drawBatterySymbol(int x, int y, int battery, uint16_t color = TFT_WHITE);
    /**
     * TODO
     * WRITE YOUR PUBLIC MEMBERS AND FUNCTION HEADERS HERE
     */

private:
    TFT_eSPI tft;
    /**
     * TODO
     * WRITE YOUR PRIVATE MEMBERS AND FUNCTIONS HEADERS HERE
     */
};