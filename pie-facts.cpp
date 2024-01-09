#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Array of pie facts
    const char* pieFacts[] = {
        "Pies are superior to cakes.",
        "The first recorded pie recipe dates back to ancient Egypt.",
        "The Pilgrims brought pie to the first Thanksgiving in 1621.",
        "The world record for the largest pumpkin pie is over 3,500 pounds.",
        "In medieval England, pies were known as 'coffins.'",
        "The pie symbolizes good luck and prosperity for the New Year in some cultures.",
        "The phrase 'as easy as pie' originated from the 19th-century American expression 'easy as eating pie.'",
        "The most popular pie in America is apple pie.",
        "The world record for the most pies eaten in 8 minutes is 29.",
        "The sweet potato pie is a popular dessert during Thanksgiving in the Southern United States.",
        "The oldest reference to fruit pies is from the Romans in the 2nd century.",
        "Pies are better than cakes."
    };

    // Calculate the number of facts in the array
    int numFacts = sizeof(pieFacts) / sizeof(pieFacts[0]);

    // Generate a random index to select a random fact
    int randomIndex = std::rand() % numFacts;

    // Print the random pie fact
    std::cout << "Random Pie Fact: " << pieFacts[randomIndex] << std::endl;

    return 0;
}
