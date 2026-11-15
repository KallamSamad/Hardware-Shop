# Hardware-Shop

A simple menu system that uses a do while loop to continuously show the menu until 5 is pressed.

## Features

- I created the base Hardware class inside the header file. I used a pure virtual function because Hardware is an abstract class which I will use to specify the CPU and GPU classes respectively.
- The concept was the same as the Stack program in the sense I use heap memory to save the collected hardware so it dynamically grows
- This is yet another example of polymorphism because CPU and GPU classes inherit from the Hardware base class, allowing different hardware types to be handled through a common interface.

  ## Screenshot

  <img width="906" height="712" alt="image" src="https://github.com/user-attachments/assets/3700e877-23f5-4dc5-aec1-320435e33b3c" />
