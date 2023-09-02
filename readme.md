# CPP Module 01

This module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.

## Skills

- Object-oriented programming
- Imperative programming

### Exercise

#### Exercise 00: BraiiiiiiinnnzzzZ

| Turn-in directory | Files to turn in                                                                | Forbidden functions |
| ----------------- | ------------------------------------------------------------------------------- | ------------------- |
| ex00/             | Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp | None                |

First, implement a Zombie class. It has a string private attribute name.
Add a member function void announce( void ); to the Zombie class. Zombies
announce themselves as follows:

Don’t print the angle brackets (< and >). For a zombie named Foo, the message
would be:
Foo: BraiiiiiiinnnzzzZ...

Then, implement the two following functions:

- **Zombie\* newZombie( std::string name );**

  - It creates a zombie, name it, and return it so you can use it outside of the function
    scope.

- **void randomChump( std::string name );**
  - It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case
it’s better to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don’t need them anymore. The destructor must
print a message with the name of the zombie for debugging purposes.
