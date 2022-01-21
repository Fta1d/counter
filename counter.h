#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

using std::cout;
using std::endl;

class cntr {
public:
    int counter, curr_begin, curr_end, tail;


    void set_range(int begin, int end) {
        counter = curr_begin = begin;
        curr_end = end;
    }
    void change_value(int value) {
        tail = curr_end - counter;
        counter += value;

        if (counter > curr_end) {
            reset_counter();
            counter += value - tail;
        }

    }
    void check_value(void) {
        cout << counter << endl;
    }
    void reset_counter(void) {
        counter = curr_begin;
    }
};

#endif //COUNTER_COUNTER_H
