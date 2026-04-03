#pragma once

class Mystring
{

    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    ~Mystring();                      // Destructor
    void display() const;
    int get_length() const; // getters
    const char *get_str() const;
};
