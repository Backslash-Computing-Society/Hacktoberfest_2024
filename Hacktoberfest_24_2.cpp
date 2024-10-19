#include <iostream>
#include <unordered_map>

char firstNonRepeatingCharacter(const std::string& str) {
    std::unordered_map<char, int> charCount;

    // Count occurrences of each character
    for (char ch : str) {
        charCount[ch]++;
    }

    // Find the first non-repeating character
    for (char ch : str) {
        if (charCount[ch] == 1) {
            return ch; // Return the first non-repeating character
        }
    }

    return '\0'; // Return null character if all are repeating
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    char result = firstNonRepeatingCharacter(input);
    
    if (result != '\0') {
        std::cout << "The first non-repeating character is: " << result << std::endl;
    } else {
        std::cout << "No non-repeating characters found." << std::endl;
    }

    return 0;
}
