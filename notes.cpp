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
    void virtual_function();  
    int abstract_method() {
        //implementation;
        return 1;
    }
}

// Virtual functions are binded at runtime 
// Non-virtual functions are binded at compile time

// Late binding(Runtime) is done in accordance with the content of pointer 
// (i.e. location pointed to by pointer) an Early binding(Compile time) is done according to the type of pointer,

// Miscellaneous
////////////////////////////////////////////////////////////////////////////////

void operator<<=(const char *text, const Name &A);  // Operator invoked by a 'const char *'

std::ostream &operator<<(std::ostream &stream, const Name &obj) {  //Overloading the stream operator
    //code
    return stream;
}

////////////////////////////////////////////////////////////////////////////////

using namespace std;

enum weekend { SAT, SUN };	// enumeration type declaration
weekday day = SAT;     		// day is a variable of type weekend
////////////////////////////////////////////////////////////////////////////////
static int x;          // Global lifetime even if local scope
int Class_name::static_member = 100;  //static variable definition
////////////////////////////////////////////////////////////////////////////////
int x;
double y = static_cast<double>(x);
// TEMPLATES
////////////////////////////////////////////////////////////////////////////////
std::vector<typename T> x;
//x.push_back(element);
//x.pop_pack();
//x.size();
//x[0];

template <typename T>
T fun(T &a, T &b) {
    return (a > b ? a : b);
}

template <typename T>
class Name {
    T value;

   public:
    Name(val) : value(val){};
};
//template class member function definition
template<typename T>
typ_zwaracany nazwa_sz_klasy<T>::nazwa_funkcji(args) {/*...*/}

// SMART POINTER
////////////////////////////////////////////////////////////////////////////////
void UseSmartPointer() {
    // Declare a smart pointer on stack and pass it the raw pointer.
    unique_ptr<Song> song2(new Song(L"Nothing on You", L"Bruno Mars"));
    // Use song2...
    wstring s = song2->duration_;
    //...
}

////////////////////////////////////////////////////////////////////////////////
// override - checks if the function that we are declaring overrides the virtual method from the base class.
// final - do not override/inherit from
struct A {
	virtual void foo();
};
struct B final : A {	// B is a final struct that inherits from A
	void foo()final; //B::foo is overridden and is the final override.
	void foo()const override // error B::foo does not override A::foo
	void bar()final; // error non-virtual function cannot be overrridden.
};

//typeid
////////////////////////////////////////////////////////////////////////////////
#include <typeinfo>
Klasa obj;
cout << typeid(obj).name() << endl;
if(typeid(obj) == typeid(Klasa)) // do something

// Dreaded diamond - solution = virtual inheritance
////////////////////////////////////////////////////////////////////////////////

class srodek_trans
{...};
class samochod: virtual public srodek_trans
{...};
class lodz: virtual public srodek_trans
{...};
class amfibia: public samochod, public lodz // Due to virtual inheritance srodek_trans members will not be duplicated.
{...};
/*
		srodek_trans
                /        \
	   samochod	 lodz
                \       /
		 amfibia
*/

//Exceptions - standard expections
////////////////////////////////////////////////////////////////////////////////
#include <exception>
using namespace std;

struct MyException : public exception {
   const char * what () const throw () { // throw() === noexcept
      return "C++ Exception";
   }
};
 
int main() {
   try {
      throw MyException();
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } catch(std::exception& e) {
      //Other errors
   }
}

////// More Templates
////////////////////////////////////////////////////////////////////////////////

//szablon funkcji, który jako argument przyjmuje obiekt klasy, ale powstały na podstawie typ szablonu funkcji
template<typename T>
ostream& operator<<(ostream &o, klasa<T>& K);

//Obiekt klasy szablonowej będący składnikiem innej klasy szablonowej
template<typename T> class K1
	{...};

template<typename T> class K2
{
	K1<int> a;
	K1<T> b;
};
//Definicja składnika statycznego - deklaracja oczywiście w ciele klasy: (static int a);
template<typename T> int K<typ>::a;
template<typename T> K<T>* K<typ>::a;

//Używanie Typedef z szablonami
template<typename T, unsigned short a,double (*ptr)(double, double)> class
K{...};

K<std::string, 10, fun> a;
typedef K<std::string, 10, fun> Kstr10Fun; //brzydkie :/
Kstr10Fun b;


//Specjalizowane wersje klasy szablonowej
template <>
class K<char *> {
   public:
    void print();
};
template <>
class K<std::string> {
   public:
    void print();
};

//Częściowa specjalizacja
template <typename T>
class K<T &> {
};

//Specjalizacja dla typów wskaźnikowych
template <>
class K<void *> {
};

//Parametry domyślne
template <typename T1, typename T2 = int>
class A;

template <class T, class Allocator = std::allocator<T>>
class vector;

//Zwykła klasa odziedzicza klasę szablonową
template <typename T>
class Box {
   public:
    T box;
};

class BoxFloatOpis : public Box<float> {
    float square;
};

//Szablon klas odziedziczony przez inny szablon klas
template <typename T>
class Box {
    T mock;
};

template <typename T>
class BoxOpis : public Box<T> {
    T mock;
};

template <typename T1, typename T2>
class BetterBox : public Box<T2> {
    T1 mock;
};

//Szablonowe parametry szablonów
template <typename T, template <typename ElemType, typename AllocType> class Cont = std::deque>
class stack {};
