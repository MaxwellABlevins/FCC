#include <fstream>
#include <iostream>
#include <vector>



bool more_to_read(std::ifstream &file) {
  file >> std::noskipws;
  while (file.peek() == ' ') {
    char discard;
    file >> discard;
  }
  return !(file.eof() || std::iscntrl(file.peek()));
}

// Reads the words from the file and returns them in a vector.
std::vector<std::string> read_from_file(std::ifstream& file) {
    std::vector<std::string> words;
    
    while (more_to_read(file)) {
        std::string next_word;

        file >> next_word;
        words.push_back(next_word);
    }

    return words;
}

int fcc(const std::string &fixme_filename, const std::string &typo_filename,
        const std::string &fixo_filename, std::string &fixed_sentence) {
    //Delcare and open the fixos and typos files.
    std::ifstream fixos_file(fixme_filename);
    std::ifstream typos_file(typo_filename);

    //Declare vectors to hold the fixos and typos.
    std::vector<std::string> fixos;
    std::vector<std::string> typos;

    //Declare a string to hold the next word. Add the word to the fixos vector.

    //Declare a string to hold the next word. Add the word to the typos vector.


    for (fixo : fixos) {
        std::cout << fixo << std::endl;
    }

    for (typo : typos) {
        std::cout << typo << std::endl;
    }
      return -1;
    }






