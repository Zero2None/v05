#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
    
    double tire::diameter() {
        return tireDiameter;
    }

    int vehicle::year() {
        return manYear;
    }

    double product::price() {
        return value;
    }

    double car::tire_diameter() {
        return T.diameter();
    }

    double operator"" _inch(unsigned long long n) {
        return n * 2.54;
    }

    double operator"" _eur(unsigned long long x) {
        return x * 7.5345;
    }
}