// TO DO
/*
Obiekty tworzone na stosie i stercie
Wywołanie funkcji z konstruktora lub destruktora klasy podstawowej
*/



// 2019-03-15
// Przykłady konstruktorów
struct A{
    A() = default;
    ~A() {_destr();}
    A(const A& a) {_constr(a);}
    A& operator=(const A& a){
        if(this == &a){
            return *this;
        }
        
        _destr();
        _constr(a);
        return *this;
    }
    // const A& operator=(const A& a){ // inna wersja - z 'const'
    // }
    private:
    
    int *_ptr = nullptr;
    void _constr(const A& a){
        _ptr = new int(a._ptr);
    }
    void _destr(){
        delete _ptr;
    }
};
/*********************************/
a[2] = 2[a]; // to samo

int x{0}; // x = 0
int x{} // x = 0
int x{1.8} // blad kompilacji
int x = 1.8; // x = 1
/*********************************/
