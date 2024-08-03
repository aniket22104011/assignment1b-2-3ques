#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Read the paragraph input from the user
    cout << "Enter a paragraph: ";
    string paragraph;
    getline(cin, paragraph);

    // Use a map to store word frequencies
    map<string, int> wordFrequency;

    // Create a stringstream to process the paragraph
    stringstream ss(paragraph);
    string word;

    // Extract words from the paragraph
    while (ss >> word) {
        // Convert word to lowercase for case-insensitive comparison
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        // Increment the word count in the map
        wordFrequency[word]++;
    }

    // Print the word frequencies
    cout << "\nWord frequencies:\n";
    for (const auto& entry : wordFrequency) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
