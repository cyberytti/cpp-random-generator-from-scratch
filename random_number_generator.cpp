#include <iostream>
#include <ctime>
#include <sys/time.h>
#include <cmath>
#include <unistd.h>
using namespace std;

int get_random_number() {
    usleep(1000); // Delay to ensure different timestamps
    
    timeval time;
    int increment = 0, value, multiplier, modulus;
    long seed;
    
    gettimeofday(&time, nullptr);
    seed = ((time.tv_sec * 1000L) + (time.tv_usec / 1000)) % 100;
    value = pow(seed, 2);

    if (value >= 10) {
        increment = (value / 10) % 100;
    } else {
        increment = 0; // Explicitly set increment if value < 10
    }
    
    multiplier = value % 10;
    value = pow((increment + 1), 2);
    modulus = value % 100;

    // Ensure modulus is never zero
    if (modulus == 0) {
        modulus = 1;
    }

    return (multiplier * seed + increment) % modulus;
}

int main() {
    for (int i = 0; i <= 40; i++) {
        cout << get_random_number() << endl;
    }
    return 0;
}