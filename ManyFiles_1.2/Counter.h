#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int value;

public:

    Counter() : value(1) {}

    Counter(int initialValue) : value(initialValue) {}

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() const {
        return value;
    }
};

#endif
