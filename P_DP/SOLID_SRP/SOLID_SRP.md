

# SOLID

## Single Responsibility Principle
A class should only have one reason to change 

## Cohesion and Coupling

Cohesion is the degree to which the various parts of a software component are related.

Coupling is defined as the level of inter dependency between various software components. 

Tightly coupling is bad in software. 


## Cohesion
 
 Aim for high Cohesion
 
## Coupling 
 
 Aim for Loose Coupling
 
 
 ## Benefits
 
 Software is simple and easy to understand
 Changes are contained/ traceable
 
Testing benefits of SRP 

 more testing coverage/ simpler test cases
 test success is inherently built into the source
 
Implementing SRP is so easy a penguin can do it 

 make each program do one thing well. 
 
 
 ## Advantages Single Responsibility Principle:
 
It will reduce the Complexity of the application code.
 A code is based on its functionality. 
 A class holds the logic for a single functionality. So, it reduces the complexity of the application code.
 
It will increase readability, extensibility, and also maintenance. As each class or module has a single functionality, it is easy to read and maintain the application code.

It will increase the testability of the functions. When the functionality changes, then we do not need to test all the functionalities as each module is only having a single functionality.

It will reduce the tight coupling between the software components. It reduced the dependency between the software components. One method’s code does not depend on other methods. So, changes in one method will not reflect changes in another method.


 
 3-layer architecture to implement this project. 
 
 Our application includes three layers: API, Application, Entity, and Infrastructure ( Data Access Layer).
 
## Project Structure (Modules)

API: Handle requests from clients.
Application: Process business logic.
Data Access Layer: 
	Entities: POCO classes, construction, and model validation.
	Infrastructure: Communicate with the database (Persistent Layer).