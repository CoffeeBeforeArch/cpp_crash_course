// This file contains the interface for an integer array class
// By: Nick from CoffeeBeforeArch

class IntegerArray {
public:
    int *data;
    int size;

    IntegerArray(int size) {
        data = new int[size];
        // "this" refers to the object we are in
        // Allows us to differentiate between method parameters and
        // fields
        this->size = size;
    }

    // A destructor for integer array
    ~IntegerArray() {
        delete[] data;
    }

    // A necessary copy constructor for this to work intuitively
    // Performs what is known as a deep copy
    // Default copy constructor does a shallow copy (just fields)
    IntegerArray(IntegerArray &o){
        data = new int[o.size];
        size = o.size;
        for(int i = 0; i < size; i++){
            data[i] = o.data[i];
        }
    }
};
