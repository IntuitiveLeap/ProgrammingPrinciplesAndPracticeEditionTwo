// find_bathroom.cpp

// Expanding on what you have learned, write a program that lists the instructions
// for a computer to find the upstairs bathroom, discussed in §2.1. Can you think
// of any more steps that a person would assume, but that a computer would not?
// Add them to your list.
// This is a good start in “thinking like a computer.” Warning: For most people,
// “go to the bathroom” is a perfectly adequate instruction. For someone with no
// experience with houses or bathrooms (imagine a stone-age person, somehow
// transported into your dining room) the list of necessary instructions could be
// very long. Please don’t use more than a page. For the benefit of the reader,
// you may add a short description of the layout of the house you are imagining.


#include "std_lib_facilities.h"

int main()
{
    cout << "stand up from your chair.\n"; // each line shall be one step in the instructions
    cout << "rotate your body 90 degrees to the right.\n";
    cout << "walk forward 3 meters, then stop.\n";
    cout << "rotate your body 90 degrees to the left.\n";
    cout << "walk forward 2 meters, then stop.\n";
    cout << "rotate your body 90 degrees to the left.\n";
    cout << "open the bathroom door.\n"; // difficult for a computer to understand!
    cout << "walk forward 1 meter, the stop.\n";
    cout << "you have arrived in the bathroom.\n";

    //keep_window_open()
    return 0;
}