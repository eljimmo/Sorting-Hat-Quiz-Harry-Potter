#include <iostream>
 
int main() {
 
  // The magic starts here


 // declaring integers and initialie them as the following
 int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;



//declaring answers as integers
 int answer1, answer2, answer3, answer4;



//output telling the player the name of the game
std::cout << "======================="
<< "\n";
std::cout << "The Sorting Hat Quiz!\n";
std::cout << "=======================" << "\n";

//first question
std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
//first answers shown
std::cout << "1) The Good" << "\n";
std::cout << "2) The Great" << "\n";
std::cout << "3) The Wise" << "\n";
std::cout << "4) The Bold" << "\n";

std::cin >> answer1;

if (answer1 == 1) {
  hufflepuff++;

}
else if (answer1 == 2) {
  slytherin++;

}
else if (answer1 == 3) {
  ravenclaw++;
}

else if (answer1 == 4) {
  gryffindor++;

}
else {
  std::cout << "Invalid options\n";
}

std::cout << "Dawn or Dusk?" << "\n";

std::cout << "1) Dawn" << "\n";

std::cout << "2) Dusk" << "\n";

std::cin >> answer2; 

if (answer2 == 1) { 
    gryffindor++;
    ravenclaw++;
  //awarding points to gryff and rave
  std::cout << "You choose Dawn\n";

}
else if (answer2 == 2) {
    hufflepuff++;
      slytherin++;
//awarding points to huff and sly
  std::cout << "You choose Dusk\n";
}
else {
  std::cout << "Invalid Input\n";
}

std::cout << "Q3) Which kind of instrument most pleases your ear?" << "\n";
//question 3 and options 
std::cout << "1) The Violin" << "\n";
std::cout << "2) The Trumpet" << "\n";
std::cout << "3) The Piano" << "\n";
std::cout << "4) The Drum" << "\n";

std::cin >> answer3;

if (answer3 == 1) {
  //adding a point to slyt
    slytherin++;
std::cout << "You choose The Violin!\n"; 
}
else if (answer3 == 2){
    hufflepuff++;
std::cout << "You choose The Trumpet!\n";
}

else if (answer3 == 3) {
      ravenclaw++;
    std::cout << "You choose The Piano\n";

}

else if (answer3 == 4) {
  gryffindor++;
  std::cout << "You choose The Drum!\n";

}

else {
  std::cout << "Invalid input!\n";
}

std::cout << "Q4) Which road tempts you most?" << "\n";

std::cout << "1) The wide, sunny grassy lane\n";

std::cout << "2) The narrow, dark, lantern-lit alley\n";


std::cout << "3) The twisting, leaf-strewn path through woods\n";

std::cout << "4) The cobbled street lined (ancient buildings)\n";

std::cin >> answer4;

if (answer4 == 1) {
  hufflepuff++;
}
else if (answer4 == 2) {
  slytherin++;
}
else if (answer4 == 3) {
  gryffindor++;
}
else if (answer4 == 4) {
  ravenclaw++;
}
  // ========== Sorting & tally & response ==========

std::cout << "\nCongrats on being sorted into... ";

  int max = 0;
std::string house;

if (gryffindor > max) {
 
  max = gryffindor;
  house = "Gryffindor";
 
}
 
if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Hufflepuff";
 
}
 
if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Ravenclaw";
 
}
 
if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
 
}
 
std::cout << house << "!\n";

}
