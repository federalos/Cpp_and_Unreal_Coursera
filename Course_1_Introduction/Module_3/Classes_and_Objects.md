# Classes

The main idea of Object Oriented Paradigm (OOP) is that we can build software as a set of interacting software, entities or objects.
Keyword of this module:

*classes*, *objects*, *state*, "behavior", "identity", "construct", "getters", "setters"

Objects consist of:
- State
  - Characteristics of this object. For instance: Amount of fuel in car
- Behavior
  - What we can do to the object
  - What we can tell the object to do itself
- Identity
  - So we can distinguish one object from another (one car from others car in area)

Let's tru to describe the **Playing Card** as an object:
- **State: **
  - Rank, 
  - Suit, 
  - Face up or not

All this could be stored in some fields in class. But these fields should be private for protection purposes. How can we operate in these fields? We can use Getters and Setters—public methods of class that help us set the fields or get a class field out of this class. 

- Behavior:
  - flip over (change the state of face up to not)
  - Accessed through function

- Identity:
  - When we create a new card object?
  - Memory address 

The OOP stands on **Encapsulation** idea. That means, that object, class or data will no be interfere outside of itself (Outside of it entity). Some kind of shell for data.

Another important idea of OOP information hiding.