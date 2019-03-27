//.cpp extension for syntax highlighting

// HEADER FILES

#pragma once  // Only include once in a compilation
#include <cstdlib>
#include <iostream>

class Name {
   public:
    Name();  // Constructor
    Name(int);
    Name(const Name &source);              // Copy constructor
    Point(int x, int y) : x_(x), y_(y){};  // Initializer list. (Non-static const members)
    ~Name();                               // Destructor
    virtual ~Name();                       //Virtual destructor. Calls all derived destructors
    void print();                          // method
    void print() const;                    // const method
    static void print();                   /// static method. can only access static members and arguments
    Name &operator+(const Name &);         // '+' operator overloading
    operator int() const { return x; }     // 'int()' operator overloading ,inline.
    virtual void virtual_function();       // Necessary when using pointers to 'Name' and 'derived'
    virtual int abstract_method() = 0;     // Method to be implemented in derived classes. If this exists you cannot create a 'Name' object instance
    double operator()(double) const;       // overloading the "()" operator - Functor

   private:
    int member_;
    static int static_member;  // shared across all instances
}

class Derived : public Name {  // Derived class, inherits from 'Name'
   public:
    void virtual_function();  //
    int abstract_method() {
        //implementation;
        return 1;
    }
}

void
operator<<=(const char *text, const Name &A);  // Operator invoked by a 'const char *'

std::ostream &operator<<(std::ostream &stream, const Name &obj) {  //Overloading the stream operator
    //code
    return stream;
}

// Miscellaneous
using namespace std;

enum weekend { SAT,
               SUN };  // enumeration type declaration
weekday day = SAT;     // day is a variable of type weekend
static int x;          // Global lifetime even if local scope

int Class_name::static_member = 100;  //static variable definition
int x;
double y = static_cast<double>(x);

// TEMPLATES

std::vector<class T> x;
//x.push_back(element);
//x.pop_pack();
//x.size();
//x[0];

template <class T>
T fun(T &a, T &b) {
    return (a > b ? a : b);
}

template <class T>
class Name {
    T value;

   public:
    Name(val) : value(val){};
};

// SMART POINTER
void UseSmartPointer() {
    // Declare a smart pointer on stack and pass it the raw pointer.
    unique_ptr<Song> song2(new Song(L"Nothing on You", L"Bruno Mars"));
    // Use song2...
    wstring s = song2->duration_;
    //...
}
