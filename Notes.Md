# oops : object oriented programming:

Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

# oops concept:

Class
Objects
Data Abstraction
Encapsulation
Inheritance
Polymorphism
Dynamic Binding
Message Passing

# class:

A class is a user-defined data type. It consists of data members and member functions, which can be accessed and used by creating an instance of that class. It represents the set of properties or methods that are common to all objects of one type. A class is like a blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, Car is the class, and wheels, speed limits, mileage are their properties.

# object:

It is a basic unit of Object-Oriented Programming and represents the real-life entities. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated. An object has an identity, state, and behavior. Each object contains data and code to manipulate the data. Objects can interact without having to know details of each other’s data or code, it is sufficient to know the type of message accepted and type of response returned by the objects.

For example “Dog” is a real-life Object, which has some characteristics like color, Breed, Bark, Sleep, and Eats.

# data abstraction:

Data abstraction is one of the most essential and important features of object-oriented programming. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. Consider a real-life example of a man driving a car. The man only knows that pressing the accelerators will increase the speed of the car or applying brakes will stop the car, but he does not know about how on pressing the accelerator the speed is increasing, he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.

# encapsulation:

Encapsulation is defined as the wrapping up of data under a single unit. It is the mechanism that binds together code and the data it manipulates. In Encapsulation, the variables or data of a class are hidden from any other class and can be accessed only through any member function of their class in which they are declared. As in encapsulation, the data in a class is hidden from other classes, so it is also known as data-hiding.

# inheritance:
it is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

Inheritance is an important pillar of OOP(Object-Oriented Programming). The capability of a class to derive properties and characteristics from another class is called Inheritance. When we write a class, we inherit properties from other classes. So when we create a class, we do not need to write all the properties and functions again and again, as these can be inherited from another class that possesses it. Inheritance allows the user to reuse the code whenever possible and reduce its redundancy.

# polymorphism:

The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. For example, A person at the same time can have different characteristics. Like a man at the same time is a father, a husband, an employee. So the same person posses different behavior in different situations. This is called polymorphism.

types -> compile time -> [function overloading] and [operator overloading]
-> run time -> [ virtual function ]

# access modifiers :

public private protected

# public:

we can access all properties inside as well as outside of the class:

# private:

we can access all properties only inside of a class only

# getter and setter:

getter is used to get values like void display()
setter is used to set values like void set_rollno(int roll){}
* we can use various checks in these getters and setters:

# constructor:
A constructor in C++ is a special method/function that is automatically called when an object of a class is created.
It doesnot have any return type:

# destructor :
to deallocate the allocated space:
last function that is going to be called before an object is destroyed

# padding:
padding is used to fill unwanted memory location :
for classes we generally allocate space like this  :
[which take 1 bit] -> those dataare filled in multiple of 1;
[which take 2 bit] -> are filled in multiple of 2:
[which take 4 bits] -> are filled in multiple of 4:
 ex: class{
    char c;
    char b;
    int a;
 };

 here memory will be 8 bytes:
 method : first we allocate  1byte and then 1byte and then 4bytes from multiple of 4 i.e from 4 to 7, here 2 to 3  will go in padding :

 but for class{
    char b;
    int a;
    char c;
 };
 memory will be:12
 method: first we allocate 1byte at 0 then 1,2,3 will go in padding
 then 4byte will be allocted from 4 to 7 then 1 byte will be allocated at 8 make wuals to 9 bytes :
* rule : here highest memory data type is int with 4 bytes so it should divide result i.e 9 but here it isn't therefore we pick after 9 closest byte i.e 12

hence ans=12bytes;

* to minimise padding we use greedy alignment i.e highest memory datatype write first and same type together

# dynamic memory allocation:
bydefault we get memory space in stack but its side is less:
tfr we use dynamic allocation to get memory space in heap:

student*s = new student;

