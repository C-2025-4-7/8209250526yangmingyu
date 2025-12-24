#include "mytemperature.h"
double celsius_to_fah(double cel) {
    return cel * 9.0 / 5.0 + 32;
}
double fah_to_celsius(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}