# Abstraction

To describe some object and his iteration with other things. To setup some paraments, that could be crucial for that exact problem. But the point is: there is no correct structure of this parament. Also this paraments are depends on  context. For instance:

We want to sit down on the chair. What is crucial for us?
- What is his Structural Integrity? 
  - I wouldn't like to fell down, while I sit on it
- Is he stands stable enough?
  - I would like to sit on 2-legs chair.

The details that matter in our abstraction are directly related to the problem we are trying to solve

Let's try another example for the chair, but in different condition: We would like to buy for our room. In this case the details, that matter is:
-  Structural Integrity (as a basic need)
-  Stability (as a basic need)
-  Style (does it fit to your room?)
-  Color (do you like it?)
-  Fabric
-  Cost
  
But what if we want to buy an antique chair for some kind of investments? In this case there will be some uniq parametrs:
- Rarity
- Condition
- Cost


As you can see, the important traits depends on problem, that we would like to solve or describe.

Every object should have:
- State
  - Characteristics of the object (Fields)
- Behavior
  - What we can do to the object
  - What we can tell the object to do to itself (Methods)
- Identity
  - That is how we can distinguish one object from another (Memory address)

Let's try to describe the die as a class:
- **State**: number of sides, side that's on top - Fields. But the fields should be in the private section accessed through getters. Setters is not implemented here because it's cheating: you can't roll the die during the game in real world and choose the side of the die after it rolls
- **Behavior**: roll. Accessed through a methods
- **Identity**: instantiation

### TODO
- Class
- Fields
- Methods
- Constructor
- Destructor
- Public
- Private


## Tasks:
- [Exercise. Gravity, It's Just a Theory](/Course_3_Class_Development/Module_1/1_Gravity/Gravity.md)
- [Exercise. A Classy Apple](/Course_3_Class_Development/Module_1/2_Apple/Apple.md)
- [Exercise. Apple Fields and Getters](/Course_3_Class_Development/Module_1/3_Apple_Fields/Apple_Fields.md)
- [Exercise. Building an Apple](/Course_3_Class_Development/Module_1/4_Building_an_Apple/Building_an_Apple.md)
- [Exercise. Eating an Apple](/Course_3_Class_Development/Module_1/5_Eating_an_Apple/Eating_an_Apple.md)
- [Programming Assignment. Nom Nom Nom](/Course_3_Class_Development/Module_1/6_Nom_Nom/Nom_Nom.md)