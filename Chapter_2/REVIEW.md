# Chapter 2 Review

## Review Questions

1. What is the purpose of the “Hello, World!” program?
    - This program is used to verify that the installation of the build tools was successful and that the user's system is able to compile, link and run the source code file as well as properly locate any header files. On top of this, the `Hello, World!` program can offer the user some first insights on what errors look like and ways to correct them. It is often the user's first execution of any program they have written, so it can offer a sense of accomplishment.
2. Name the four parts of a function.
    - Return type
    - Function name
    - Function parameters
    - Function body
3. Name a function that must appear in every C++ program.
    - every C++ program must contain a main function
4. In the “Hello, World!” program, what is the purpose of the line `return 0;`?
    - This line of code sends the value `0` back to the caller (in this case the operating system). These return codes can be used to show whether the function executed successfully or if it ran into problems during execution.
5. What is the purpose of the compiler?
    - The compiler is used to translate the source code into a machine language that can be executed on the processor(s).
6. What is the purpose of the #include directive?
    - #include directives allow us to bring other existing code directly into our code. This is accomplished by essentially copy and pasting the referred to code into the location of the #include on the source code file. Using these directives, we can easily reuse existing code.
7. What does a .h suffix at the end of a file name signify in C++?
    - `*.h` files are header files
8. What does the linker do for your program?
    - The linker is used to link together the different object files needed for the final executable to function properly.
9. What is the difference between a source file and an object file?
    - A source file is human readable text, written in a programming language. An object file is the translation result of compiling a source file.
10. What is an IDE and what does it do for you?
    - An IDE is an Integrated Development Environment. It offers a text editor with code highlighting and code-completion, debugging and many other testing facilities. Many IDEs include template files for different project types among hundreds of other convenience features.
11. If you understand everything in the textbook, why is it necessary to practice?
    - Given enough practice, one can turn understanding into something more akin to muscle-memory, which can be the difference between a good skill level and a great skill level!

## Terms

These terms present the basic vocabulary of programming and of C++. If you want to understand what people say about programming topics and to articulate your own ideas, you should know what each means.

- //
  - This is a line comment. This symbol and following text on the same line is ignored by the compiler and is intended for human consumption.
- <<
  - Insertion operator. Used to direct data into a receiving object.
- C++
  - A higher level, compiled programming language built on top of the C language and including object-oriented facilities.
- comment
  - A message written into a source code file that is intended for use specifically by humans and not the compiler.
- compiler
  - A program that translates a higher-level, human-readable language into machine readable language. Also provides type and syntax checking.
- compile-time error
  - An error that occurs during the compilation process.
- cout
  - A function made available by including the std_lib_facilities.h file
- executable
  - The final result of successful compilation and linking. This type of file can be run by the machine directly.
- function
  - A reusable piece of code containing a return type, name, parameters and a body.
- header
  - A file that can be used inside another source file by means of the #include directive.
- IDE
  - An Integrated Development Environment. Usually includes a text editor, debugging facilities, formatting assistance, code highlighting, code completion, etc...
- "#include"
  - The "#include" directive. Commands the pre-processor to copy the file and paste it into the source file in the place of the directive.
- library
  - A separate piece of code intended for reuse inside other applications. Often includes task specific classes, functions or utilities.
- linker
  - A program that links object files together, resulting in an executable file if successful.
- main()
  - A mandatory function for every C++ application. Code execution starts in this function.
- object code
  - the result of compiling a single translation unit.
- output
  - Results of a running application directed outwards to the user(s) on screen on a printer, speakers, etc...
- program
  - A generic word that could refer to a running application, the source code needed to build an application, a .exe file, etc... Also, the set of instructions telling a computer "what to do".
- source code
  - Human readable code in a higher-level language such as C++, C or Python.
- statement
  - A statement is a section of C++ code that specifies an action and is not a pre-processor directive. Usually ends with a semi-colon.

## Exercises

1. Change the program to output the two lines
    - Hello, programming!
    - Here we go!
    - (completed in hello_programming.cpp source file)
2. Expanding on what you have learned, write a program that lists the instructions for a computer to find the upstairs bathroom, discussed in §2.1. Can you think of any more steps that a person would assume, but that a computer would not? Add them to your list. This is a good start in “thinking like a computer.” Warning: For most people, “go to the bathroom” is a perfectly adequate instruction. For someone with no experience with houses or bathrooms (imagine a stone-age person, somehow transported into your dining room) the list of necessary instructions could be very long. Please don’t use more than a page. For the benefit of the reader, you may add a short description of the layout of the house you are imagining.
    - (completed in find_bathroom.cpp source file)
3. Write a description of how to get from the front door of your dorm room, apartment, house, whatever, to the door of your classroom (assuming you are attending some school; if you are not, pick another target). Have a friend try to follow the instructions and annotate them with improvements as he or she goes along. To keep friends, it may be a good idea to “field test” those instructions before giving them to a friend.
    - n/a
4. Find a good cookbook. Read the instructions for baking blueberry muffins (if you are in a country where “blueberry muffins” is a strange, exotic dish, use a more familiar dish instead). Please note that with a bit of help and instruction, most of the people in the world can bake delicious blueberry muffins. It is not considered advanced or difficult fine cooking. However, for the author, few exercises in this book are as difficult as this one. It is amazing what you can do with a bit of practice.
    - Rewrite those instructions so that each individual action is in its own numbered paragraph. Be careful to list all ingredients and all kitchen utensils used at each step. Be careful about crucial details, such as the desired oven temperature, preheating the oven, the preparation of the muffin pan, the way to time the cooking, and the need to protect your hands when removing the muffins from the oven.
    - Consider those instructions from the point of view of a cooking novice (if you are not one, get help from a friend who does not know how to cook). Fill in the steps that the book’s author (almost certainly an experienced cook) left out for being obvious.
    - Build a glossary of terms used. (What’s a muffin pan? What does preheating do? What do you mean by “oven”?)
    - Now bake some muffins and enjoy your results.
5. Write a definition for each of the terms from “Terms.” First try to see if you can do it without looking at the chapter (not likely), then look through the chapter to find definitions. You might find the difference between your first attempt and the book’s version interesting. You might consult some suitable online glossary, such as www.stroustrup.com/glossary.html. By writing your own definition before looking it up, you reinforce the learning you achieved through your reading. If you have to reread a section to form a definition, that just helps you to understand. Feel free to use your own words for the definitions, and make the definitions as detailed as you think reasonable. Often, an example after the main definition will be helpful. You may like to store the definitions in a file so that you can add to them from the “Terms” sections of later chapters.
    - completed in the Terms section
