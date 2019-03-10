// This file contains the interface for a templated class with
// specific implementations based on data types
// By: Nick from CoffeeBeforeArch

template <typename T>
class Container {
private:
    T element;
public:
    Container(const T e) : element(e) {}
    T inc() { return ++element; }
};

template<>
class Container <char> {
private:
    char element;
public:
    Container(const char e) : element(e) {}
    char uppercase() { return toupper(element); }
};
