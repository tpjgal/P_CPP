# Design Pattern 

## Structural Patterns

### Adapter Design Pattern

	Adapter design pattern is used to provide a way for **reusing an existing class**.
 
 Intent
 
	Convert the interface of a class into another interface clients expect.
	Adapter lets classes work together that could not otherwise because of incompatible interfaces.
	The intent is to convert the interface of existing class to the one which client is expecting.
	
Problem

Want to use existing system/component but the current system used by client does not have interfaces that are compatible with existing one.
The client has the interface that he wants to use, we have an existing class which can be reused but it has different interface. So either a new class is required or we have to find a way to use the existing one.

Solution

Come up with a class which adapts the interface of existing system/component to the new one which client expects.
The system will adapt the existing interface and will provide it in the way client expects.

Where it is applicable?

There is an existing class which we want to use in a system and may require to provide interface in the way applicable for the system. 
Or we can say we want to reuse the class but we don't have compatible interfaces.