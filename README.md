# OOPS Cheat Sheet

The only cheat sheet you'll ever need - in Coding Interviews - for **OOPS**

## Concepts

- Class and Object
- Encapsulation
- Abstraction
- Polymorphism
- Inheritance
- Binding
- Access Specifier
- Friend Function
- Constructor
- Destructor

### Class and Object : 

An object is an instance of a class, and a class is an abstract data type. Inside it we define data members and member functions.

### Encapsulation :

Binds together function and data in a class.

### Abstraction :

Exposing only relevant details to the users and hiding unimportant details.

### Polymorphism :

Provides a way for an entity to behave in several forms.

 - Compile Time Polymorphism
 - Run Time Polymorphism

### Inheritance :

Deriving a new class from the earlier existing class. New class inherits features from old class.

 - Public Inheritance -
        + All public members of base class become public members of derived class
        + All protected members of base class become protected members of derived class
        + Private Members aren't inherited

 - Private Inheritance -
        + Public members of base class become private members of derived class
        + Protected members of base class become private members of derived class
        + Private Members aren't inherited

 - Protected Inheritance -
        + Public members of base class become protected members of derived class
        + Protected members of base class become protected members of derived class
        + Private Members aren't inherited


	> Containership : Use object of one class as a member of other class.
	
### Binding :
Association of method call to the method body is called binding.

 - *Static Binding or Early Binding -* Resolved during Compile time.
        + The binding of static, private and final methods is compile-time.
        + Such methods cannot be overridden and the type of the class is determined at the compile time.
 
 - *Dynamic Binding or Late Binding -* In method overriding both parent and child classes have same method and in this case the type of the object determines which method is to be executed. And, the type of object is determined at the run time.

### Access Specifier :

Public, Private and Protected
> Default Access Specifier is private. Again, general convention - Data Members are private and Member Function public.

### Friend Function :

Friend function can access private, protected and public members of that class.
   - Used when two or more classes want to share a common function.
   - friend keyword is used in function declaration and not definition.
   - Since it is not a member of the class, friend function cannot be called by using . operator.
    - Can be used in private or public visibility without affecting its meaning.

### Static Class Members :
Static Members are one for a class and not for an object. Static members can be either functions or static data.
   - Static function must be defined within the class.
   - In a static function only static data members, other static variables or other static function can be used.
   - Converse of the above point isn't true.

### Constructor :
Initializes the objects of the class.
 - Name of constructor same as the name of class
 - Invoked automatically when objects of the class are created.
 - Do not have any return type because they don't return any value.
 - We can have as many constructors for a class as we want. (Function Overloading should be taken care of)
 - Copy Constructor : 
	- When a new object is initialized to an object of the same class.
	- When an object is passed to a function by value.
	- When an object is returned from a function by value.
	- When the compiler generates temporary object.

### Destructor :

 - Name same as the object, but preceded with a tilde.
 - Called when the object goes out of scope.
 - Doesn't take any arguments.
 - Destructor has no return type.
