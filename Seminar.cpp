#include<iostream>
#include<string>
#include<vector>
using namespace std;

/* ALOKACIJA I DEALOKACIJA MEMORIJE;
int main() {
    int* ptr = new int(42); //kreiranje(alokacija)
    cout << "Value: " << *ptr << endl;
    delete ptr; //uništavanje(dealokacija)
    return 0;
}
*/
/*
class Example {
public:
    Example() { // Konstruktor
        cout << "Constructor called" << endl;
    }

    ~Example() { // Destruktor
        cout << "Destructor called" << endl;
    }
};

int main() {
    Example obj; // Kreiranje objekta
    return 0; // Automatski poziv destruktora 
}
*/
/*
class Base {
public:
    void display() {
        cout << "This is the base class" << endl;
    }
};

class Derived : public Base {//izvrðeno nasljeðivanje
public:
    void show() {
        cout << "This is the derived class" << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Poziv metode bazne klase
    obj.show();    // Poziv metode izvedene klase
    return 0;
}
*/
/*
class Base {
public:
    virtual void display() {//odi je virtual
        cout << "This is the base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Override metode bazne klase
        cout << "This is the derived class" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->display(); // Poziva overridden metodu iz izvedene klase
    delete obj;
    return 0;
}
*/
/*
class Base {
public:
    int value = 10;

    void display() {
        cout << "Base value: " << value << endl;
    }
};

class Derived : public Base {
public:
    int value = 20; //Sjencenje ovdi

    void display() {
        cout << "Derived value: " << value << endl;
    }
};

int main() {
    Derived obj;
    obj.display();          // Poziva display iz izvedene klase
    obj.Base::display();    // Poziva display iz bazne klase
    return 0;
}
*/
/*
class Base1 {
public:
    void display() {
        cout << "This is Base1" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "This is Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived obj;
    obj.display(); // Poziv metode iz Base1
    obj.show();    // Poziv metode iz Base2
    return 0;
}
*/
/*
class Animal {
public:
    virtual void makeSound() = 0;  // Èisto virtualna funkcija, definira suèelje
    virtual ~Animal() {}          //  destruktor
};

class Dog : public Animal {
public:
    void makeSound() override {  
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {  
        cout << "Meow!" << endl;
    }
};

int main() {
    Dog dog;      
    Cat cat;  
    Animal* animal1 = &dog;  
    Animal* animal2 = &cat;
    animal1->makeSound(); 
    animal2->makeSound();  

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math math;
    cout << math.add(3, 5) << endl;       // Poziva int verziju
    cout << math.add(3.5, 5.2) << endl;  // Poziva double verziju
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const {
        cout << "Some generic animal sound" << endl;
    }
    virtual ~Animal() = default;
};


class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override { 
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal; 
    Dog dog;
    Cat cat;
    animal = &dog;
    animal->makeSound(); 
    animal = &cat;
    animal->makeSound();

    return 0;
}
*/
/*
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 5) << endl;        // Radi sa int
    cout << add(3.5, 5.2) << endl;   // Radi sa double
    return 0;
}
*/
template <typename T>
class Box {
private:
    T value;
public:
    void setValue(T val) {
        value = val;
    }

    T getValue() const {
        return value;
    }
};

int main() {
    Box<int> intBox;
    intBox.setValue(42);
    cout << intBox.getValue() << endl;

    Box<string> strBox;
    strBox.setValue("Hello");
    cout << strBox.getValue() << endl;

    return 0;
}