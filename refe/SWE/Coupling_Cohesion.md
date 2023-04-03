Software Engineering | Coupling and Cohesion

Introduction: The purpose of Design phase in the Software Development Life Cycle is to produce a solution to a problem given in the SRS(Software Requirement Specification) document. The output of the design phase is Software Design Document (SDD). 

Coupling and Cohesion are two key concepts in software engineering that are used to measure the quality of a software system’s design.

Coupling refers to the degree of interdependence between software modules. High coupling means that modules are closely connected and changes in one module may affect other modules. Low coupling means that modules are independent and changes in one module have little impact on other modules.

Cohesion refers to the degree to which elements within a module work together to fulfill a single, well-defined purpose. High cohesion means that elements are closely related and focused on a single purpose, while low cohesion means that elements are loosely related and serve multiple purposes.

Both coupling and cohesion are important factors in determining the maintainability, scalability, and reliability of a software system. High coupling and low cohesion can make a system difficult to change and test, while low coupling and high cohesion make a system easier to maintain and improve.

Basically, design is a two-part iterative process. First part is Conceptual Design that tells the customer what the system will do. Second is Technical Design that allows the system builders to understand the actual hardware and software needed to solve customer’s problem. 

coupling and cohesion

Conceptual design of the system: 

Written in simple language i.e. customer understandable language.
Detailed explanation about system characteristics.
Describes the functionality of the system.
It is independent of implementation.
Linked with requirement document.
Technical Design of the system: 

Hardware component and design.
Functionality and hierarchy of software components.
Software architecture
Network architecture
Data structure and flow of data.
I/O component of the system.
Shows interface.
Modularization: Modularization is the process of dividing a software system into multiple independent modules where each module works independently. There are many advantages of Modularization in software engineering. Some of these are given below: 

Easy to understand the system.
System maintenance is easy.
A module can be used many times as their requirements. No need to write it again and again.
Coupling: Coupling is the measure of the degree of interdependence between the modules. A good software will have low coupling. 
 

coupling

Types of Coupling: 

Data Coupling: If the dependency between the modules is based on the fact that they communicate by passing only data, then the modules are said to be data coupled. In data coupling, the components are independent of each other and communicate through data. Module communications don’t contain tramp data. Example-customer billing system.
Stamp Coupling In stamp coupling, the complete data structure is passed from one module to another module. Therefore, it involves tramp data. It may be necessary due to efficiency factors- this choice was made by the insightful designer, not a lazy programmer.
Control Coupling: If the modules communicate by passing control information, then they are said to be control coupled. It can be bad if parameters indicate completely different behavior and good if parameters allow factoring and reuse of functionality. Example- sort function that takes comparison function as an argument.
External Coupling: In external coupling, the modules depend on other modules, external to the software being developed or to a particular type of hardware. Ex- protocol, external file, device format, etc.
Common Coupling: The modules have shared data such as global data structures. The changes in global data mean tracing back to all modules which access that data to evaluate the effect of the change. So it has got disadvantages like difficulty in reusing modules, reduced ability to control data accesses, and reduced maintainability.
Content Coupling: In a content coupling, one module can modify the data of another module, or control flow is passed from one module to the other module. This is the worst form of coupling and should be avoided.
Cohesion: Cohesion is a measure of the degree to which the elements of the module are functionally related. It is the degree to which all elements directed towards performing a single task are contained in the component. Basically, cohesion is the internal glue that keeps the module together. A good software design will have high cohesion. 

cohesion

Types of Cohesion: 

Functional Cohesion: Every essential element for a single computation is contained in the component. A functional cohesion performs the task and functions. It is an ideal situation.
Sequential Cohesion: An element outputs some data that becomes the input for other element, i.e., data flow between the parts. It occurs naturally in functional programming languages.
Communicational Cohesion: Two elements operate on the same input data or contribute towards the same output data. Example- update record in the database and send it to the printer.
Procedural Cohesion: Elements of procedural cohesion ensure the order of execution. Actions are still weakly connected and unlikely to be reusable. Ex- calculate student GPA, print student record, calculate cumulative GPA, print cumulative GPA.
Temporal Cohesion: The elements are related by their timing involved. A module connected with temporal cohesion all the tasks must be executed in the same time span. This cohesion contains the code for initializing all the parts of the system. Lots of different activities occur, all at unit time.
Logical Cohesion: The elements are logically related and not functionally. Ex- A component reads inputs from tape, disk, and network. All the code for these functions is in the same component. Operations are related, but the functions are significantly different.
Coincidental Cohesion: The elements are not related(unrelated). The elements have no conceptual relationship other than location in source code. It is accidental and the worst form of cohesion. Ex- print next line and reverse the characters of a string in a single component.
ADVANTAGES OR DISADVANTAGES:
Advantages of low coupling:
Improved maintainability: Low coupling reduces the impact of changes in one module on other modules, making it easier to modify or replace individual components without affecting the entire system.
Enhanced modularity: Low coupling allows modules to be developed and tested in isolation, improving the modularity and reusability of code.
Better scalability: Low coupling facilitates the addition of new modules and the removal of existing ones, making it easier to scale the system as needed.
Advantages of high cohesion:
Improved readability and understandability: High cohesion results in clear, focused modules with a single, well-defined purpose, making it easier for developers to understand the code and make changes.
Better error isolation: High cohesion reduces the likelihood that a change in one part of a module will affect other parts, making it easier to
isolate and fix errors.Improved reliability: High cohesion leads to modules that are less prone to errors and that function more consistently, 
leading to an overall improvement in the reliability of the system.
Disadvantages of high coupling:
Increased complexity: High coupling increases the interdependence between modules, making the system more complex and difficult to understand.
Reduced flexibility: High coupling makes it more difficult to modify or replace individual components without affecting the entire system.
Decreased modularity: High coupling makes it more difficult to develop and test modules in isolation, reducing the modularity and reusability of code.
Disadvantages of low cohesion:
Increased code duplication: Low cohesion can lead to the duplication of code, as elements that belong together are split into separate modules.
Reduced functionality: Low cohesion can result in modules that lack a clear purpose and contain elements that don’t belong together, reducing their functionality and making them harder to maintain.
Difficulty in understanding the module: Low cohesion can make it harder for developers to understand the purpose and behavior of a module, leading to errors and a lack of clarity.
