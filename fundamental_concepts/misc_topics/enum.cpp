// This program shows off the basics of enums in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Enums allow us to give more meaning to integers
// Similar to a new data-type, but it's just a subset of integers
enum suit_t {
    CLUBS=0,
    DIAMONDS=1,
    HEARTS=2,
    SPADES=3
};

// Had we used an integer here, it would be easier to mistakenly
// have an out-of-bounds access. Restricting to the enum prevents
// this!
const char* print_suit(const suit_t suit){
    const char *names[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    return names[suit];
}

int main(){
    // Make two suit_t variables
    suit_t card1 = CLUBS;
    suit_t card2 = SPADES;

    // Print out the string from our function, and the actual value
    cout << "card1 is a " << print_suit(card1) << " with value " << card1 << endl;
    cout << "card2 is a " << print_suit(card2) << " with value " << card2 << endl;

    return 0;
}
