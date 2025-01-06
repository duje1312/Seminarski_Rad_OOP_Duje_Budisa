'''
value = 42
print(f"Value: {value}")
'''
'''
class Example:
    def __init__(self):  # Konstruktor
        print("Constructor called")

    def __del__(self):  # Destruktor
        print("Destructor called")

# Kreiranje objekta
obj = Example()
# Destruktor se automatski poziva kada objekat
'''
'''
class Base:
    def display(self):
        print("This is the base class")

class Derived(Base):
    def show(self):
        print("This is the derived class")

# Kreiranje objekta izvedene klase
obj = Derived()
obj.display()  # Poziv metode bazne klase
obj.show()     # Poziv metode izvedene klase
'''
'''
class Base:
    def display(self):
        print("This is the base class")

class Derived(Base):
    def display(self):  #Znaci samo se mapise isti naziv kao i u baznoj klasi(automatski overrida).
        print("This is the derived class")

# Kreiranje objekta izvedene klase
obj = Derived()
'''
'''
class Base:
    def __init__(self):
        self.value = 10

    def display(self):
        print(f"Base value: {self.value}")

class Derived(Base):
    def __init__(self):
        super().__init__()
        self.value = 20  #Sjencenje ovdi

    def display(self):
        print(f"Derived value: {self.value}")

obj = Derived()
obj.display()    
super(Derived, obj).display()  # Poziva display iz bazne klase
'''
'''
class Base1:
    def display(self):
        print("This is Base1")

class Base2:
    def show(self):
        print("This is Base2")

class Derived(Base1, Base2):
    pass
obj = Derived()
obj.display()  # Poziv metode iz Base1
obj.show()     # Poziv metode iz Base2
'''
'''
from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def make_sound(self):
        pass

class Dog(Animal):
    def make_sound(self):
        print("Woof!")

dog = Dog()
dog.make_sound()
'''
'''
from abc import ABC, abstractmethod

# SUCELJE
class AnimalInterface(ABC):
    @abstractmethod
    def make_sound(self):
        #METODA KOJU SVAKA KLASA IMPLEMENTIRA
        pass

# KONKRETNA DOG KLASA
class Dog(AnimalInterface):
    def make_sound(self):
        print("Woof!")

# KONKRETNA CAT KLASA
class Cat(AnimalInterface):
    def make_sound(self):
        print("Meow!")


dog = Dog()
cat = Cat()

dog.make_sound()  
cat.make_sound()  
'''
'''
class Animal:
    def make_sound(self):
        print("Some generic animal sound")

class Dog(Animal):
    def make_sound(self):
        print("Woof!")

class Cat(Animal):
    def make_sound(self):
        print("Meow!")
def animal_sound(animal):
    animal.make_sound()

dog = Dog()
cat = Cat()

animal_sound(dog) 
animal_sound(cat)
'''
'''
from typing import TypeVar, Generic

T = TypeVar('T') 

class Box(Generic[T]):
    def __init__(self, value: T):
        self.value = value

    def get_value(self) -> T:
        return self.value


int_box = Box(42)  
print(int_box.get_value()) 

str_box = Box("Hello, world!")  
print(str_box.get_value())
'''