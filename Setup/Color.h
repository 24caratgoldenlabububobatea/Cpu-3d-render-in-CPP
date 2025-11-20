#ifndef _COLOR_H
#define _COLOR_H

class Color {
    double red, green, blue, special;

public:

    Color();
    Color(double, double, double, double);

    // getters
    double getColorRed() const { return red; }
    double getColorGreen() const { return green; }
    double getColorBlue() const { return blue; }
    double getColorSpecial() const { return special; }

    // chainable setters
    Color& setColorRed(double redValue) { red = redValue; return *this; }
    Color& setColorGreen(double greenValue) { green = greenValue; return *this; }
    Color& setColorBlue(double blueValue) { blue = blueValue; return *this; }
    Color& setColorSpecial(double specialValue) { special = specialValue; return *this; }
};


// default constructor
Color::Color() {
    red = 0.5;
    green = 0.5;
    blue = 0.5;
    special = 0.0;
}

// full constructor
Color::Color(double r, double g, double b, double s) {
    red = r;
    green = g;
    blue = b;
    special = s;
}

#endif
