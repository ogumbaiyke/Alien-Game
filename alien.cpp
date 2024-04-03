#include <iostream>
#include "alien_functions.hpp"
#include <vector>

int main() {
  
  greet();
  
  std::string codeword = "codecadmey";
  std::string answer = "__________";

  int misses = 0;

  std::vector<char> incorrect;
  bool guess = false;

  char letter;


  while (answer != codeword && misses < 7){

    display_misses(misses);

    display_status(incorrect, answer);

    std::cout << "Please enter your guess: ";
    std::cin >> letter;

    for (int i = 0; i < codeword.length(); i++){

      if (letter == codeword[i]){
        answer[i] = letter;
        guess = false;

      }

    }

    if (guess) {

     std::cout << "\nCorrect! You're closer to cracking the codeword.\n";

}   
    else {

    std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";

    incorrect.push_back(letter);
    
    misses++;

  }
   
  }
  
  end_game(answer, codeword);
  
}
