#include "counter.h"

int main(void) {
    cntr c;

    c.set_range(5, 10);
    cout << "First check\n";
    c.check_value();
    c.change_value(4);
    cout << "Second check\n";
    c.check_value();
    c.change_value(5);
    cout << "Third check\n";
    c.check_value();
    c.change_value(3);
    cout << "Fourth check\n";
    c.check_value();

}