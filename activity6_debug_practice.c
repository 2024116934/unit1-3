#include <stdio.h> 
#include <string.h> // For strcpy and strcmp
#include <stdint.h> // Fixed-width integer types

// Define a struct for a Pokémon
// typedef means we can use 'Pokemon' instead of 'struct Pokemon'
typedef struct {
    char name[10]; // Pokémon name (10 chars max - is that enough?)
    uint8_t level;  // Pokémon level: unsigned 8-bit integer
    uint16_t hp;   // Pokémon hit points: unsigned 16-bit integer
    char type[3]; // Pokémon type
} Pokemon;

// (a very bad) Function to check type effectiveness
float get_effectiveness(char attacker_type[], char defender_type[]);


int main(void) {
    // Create two Pokémon
    Pokemon charmander;
    Pokemon bulbasaur;

    // Assign values
    strcpy(charmander.name, "Charmander");
    charmander.level = 5;
    charmander.hp = 39;
    strcpy(charmander.type, "fire"); // Does this match the type in get_effectiveness? This is why its a good idea to use a function or enum for things that should be fixed values

    bulbasaur.name = "Bulbasaur"; // Sadly you can't do this in C :(
    bulbasaur.level = 5;
    bulbasaur.hp = 45;
    strcpy(bulbasaur.type, "Grass");

    // Create more Pokémon using initializer lists

    Pokemon Jigglypuff = {"Jigglypuff", 3, 115, "Normal"};
    Pokemon Pikachu = {7, 35, "Pikachu", "Electric"};

    // Display effectiveness
    float effectiveness = get_effectiveness(charmander.type, bulbasaur.type);
    printf("%s attacks %s\n", charmander.name, bulbasaur.name);
    printf("Effectiveness: %.1fx\n", effectiveness);

    effectiveness = get_effectiveness(Jigglypuff.type, Pikachu.type);
    printf("%s attacks %s\n", Jigglypuff.name, Pikachu.name);
    printf("Effectiveness: %.1fx\n", effectiveness);

    return 0;
}

// (a very bad) Function to check type effectiveness
// In a real game, this would be a big table or a more complex function
// Here, I just hardcoded a few cases for demonstration because I am lazy
float get_effectiveness(char attacker_type[], char defender_type[]) {
    if (strcmp(attacker_type, "Fire") == 0 && strcmp(defender_type, "Grass") == 0) {
        return 2.0;
    } else if (strcmp(attacker_type, "Water") == 0 && strcmp(defender_type, "Fire") == 0) {
        return 2.0;
    } else if (strcmp(attacker_type, "Grass") == 0 && strcmp(defender_type, "Water") == 0) {
        return 2.0;
    } else {
        return 1.0;
    }
}