## Abstraction
Abstraction is the process of hiding internal implementation details and exposing only the essential features of an object. This simplifies code by focusing on what an object does, rather than how it does it.

### Real-World Example:
Think of a car. When you drive a car, you use its features like the steering wheel, accelerator, and brakes without needing to understand how the engine works internally.

## Encapsulation
Encapsulation is the bundling of data and methods that operate on that data into a single unit (class). It restricts direct access to the data using access specifiers like private, protected, and public.

### Real-World Example:
Consider a bank account. You can interact with the account (e.g., check balance, withdraw money) through the provided methods, but you cannot directly access or modify the internal data.

## Constructors and destructor
A constructor is a special method invoked when an object is created, while a destructor is called to clean up resources when the object is destroyed.

### Real-World Example:
Think of a hotel room. Unlocking and entering the room initializes the room (constructor), while locking it up after leaving releases it (destructor).

## Copy Constructor
A copy constructor is used to create a new object as a copy of an existing object, ensuring a deep copy of data when necessary.

### Real-World Example:
Photocopying a document creates a new copy with the same content as the original, but it is a separate entity.

## Friend Functions and Classes
Friend functions or classes are given special access to the private and protected members of another class.

### Real-World Example:
Think of a hospital where doctors have special access to patient records, but the general public does not

## Inheritance
Inheritance allows a class (child class) to derive properties and methods from another class (parent class), promoting code reuse and modularity.

## Single Inheritance
A single child class inherits properties and methods from one parent class, enabling code reuse and simplicity.

### Real-World Example: 
A car class inheriting general vehicle properties such as engine and wheels.

## Multiple Inheritance
A single child class inherits properties and methods from multiple parent classes, combining functionalities from both.

### Real-World Example:
A smartphone inheriting functionalities from a phone class and a computer class (e.g., calls and apps).

## Multilevel Inheritance
A class inherits from another class, which itself is derived from a parent class, forming a chain of inheritance.

### Real-World Example: 
A race car inherits from a car class, which in turn inherits from a general vehicle class.

## Hierarchical Inheritance
Multiple child classes inherit properties and methods from a single parent class, promoting shared functionality.

### Real-World Example: 
A bird class serving as the parent for specific child classes like sparrow, eagle, or penguin.

## Hybrid Inheritance
A combination of two or more types of inheritance, often involving multiple and hierarchical inheritance together.

### Real-World Example:
A tablet inheriting properties from both a smartphone class and a laptop class.

## Polymorphism
## Function Overloading
A function with the same name performs different tasks based on the number or type of arguments.

### Real-World Example: 
An "add" function that adds integers, concatenates strings, or adds floating-point numbers.

## Method Overriding
A child class provides a specific implementation for a method already defined in its parent class.

### Real-World Example:
A bird class having a "fly" method that a penguin class overrides to indicate it cannot fly.

## Operator Overloading
Operators like + or == are redefined to work with user-defined types such as classes.

### Real-World Example: 
A complex number class defining the + operator to add two complex numbers.

## Abstract Class
A class that contains at least one pure virtual function, serving as a blueprint for derived classes.

### Real-World Example:
A "shape" class with a pure virtual method area() implemented differently in derived classes like circle and rectangle.

## Diamond Problem
The Diamond Problem (also known as the Deadly Diamond of Death) is a problem that occurs in object-oriented programming languages that support multiple inheritance, such as C++. It arises when a class inherits from two classes that both inherit from a common base class.
In such cases, there can be ambiguity about which version of the base class methods or properties should be inherited by the derived class. This situation forms a diamond shape in the class hierarchy, where a class inherits from two classes that share a common ancestor.