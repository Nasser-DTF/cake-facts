#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Array of cake facts
    const char* cakeFacts[] = {
        "The world's largest cake weighed over 128,000 pounds.",
        "The tradition of a birthday cake can be traced back to ancient Greece.",
        "The most expensive cake ever made cost over $75 million.",
        "The record for the tallest cake is over 108 feet.",
        "The word 'cake' comes from the Old Norse word 'kaka.'",
        "Marie Antoinette never said 'Let them eat cake.'",
        "The first cupcake recipe appeared in 1796.",
        "Red velvet cake was originally made with beetroot for color.",
        "The largest cupcake ever made weighed over 1,200 pounds.",
        "The world's most expensive cupcake costs over $1,000."
    };

    // Calculate the number of facts in the array
    int numFacts = sizeof(cakeFacts) / sizeof(cakeFacts[0]);

    // Generate a random index to select a random fact
    int randomIndex = std::rand() % numFacts;

    // Print the random cake fact
    std::cout << "Random Cake Fact: " << cakeFacts[randomIndex] << std::endl;

    return 0;
}
