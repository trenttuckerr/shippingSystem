# Package Shipping System

This C++ project implements a basic package shipping system with support for regular packages and two-day packages. The program is designed to illustrate fundamental concepts of object-oriented programming, including inheritance, encapsulation, polymorphism, and exception handling.

## Classes

### Package Class

The `Package` class represents a general package with the following attributes:

- senderName
- senderAddress
- senderCity
- senderState
- senderZip
- recipientName
- recipientAddress
- recipientCity
- recipientState
- recipientZip
- weight
- costPerOunce

#### Methods

- **Constructor:** Initializes package attributes with provided values.
- **Getter and Setter Methods:** Allow access to and modification of private attributes, with validation for certain conditions.
- **calculateCost Method:** Calculates the cost of shipping based on the weight and cost per ounce.

### TwoDayPackage Class

The `TwoDayPackage` class is derived from the `Package` class and includes an additional attribute, `flatFee`, representing a flat fee for two-day shipping.

#### Additional Attributes

- flatFee

#### Methods

- **Constructor:** Initializes attributes from both the base class (`Package`) and the derived class.
- **Setter and Getter for Flat Fee:** Methods to set and get the flat fee.
- **calculateCost Method Override:** Overrides the base class method to include the flat fee in the total cost.

## Compilation

The project includes a makefile with rules for compilation:

- `Lab9`: Compiles the main program.
- `Package.o`: Compiles the base class.
- `TwoDayPackage.o`: Compiles the derived class.

To compile the program, use the command:

```bash
make Lab9
```

## Exception Handling

The code includes exception handling for invalid arguments, such as attempting to set a negative weight or cost per ounce.

## Purpose of the Lab

This lab serves as a learning exercise for students to understand and apply fundamental concepts of object-oriented programming. The focus includes inheritance, encapsulation, polymorphism, and exception handling.

## How to Run

After compilation, execute the program `Lab9` to run the package shipping system.

```bash
./Lab9
```

## Author

```markdown
- Trent Tucker
```

## Date

November 20, 2020
