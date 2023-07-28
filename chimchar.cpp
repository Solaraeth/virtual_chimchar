/*To-Do List
- Opening text explaining Game
- Vector containing the stats
- Print Chimchar's current Stats
    - Hunger
    - Happiness
    - Cleanliness
    - Level

- Main game loop of player intraction with chimchar
    - Hunger goes up when fed and down when played with
    - Happieness goes up when played with and down when trained with further penalty for low hunger
    - Cleanliness goes down when played with and up when cleaned
    - Level goes up when trained
    - Input validation

- Evolution
    - Chimchar > Monferno Lvl.16
    - Monferno > Infernape Lvl.36

- Check for win/lose conditions
- Congratulations for completing game by evloving chimchar into infernape message

- Extras
    - Test functions to validate program logic
    - Random messages messages about interaction with chimchar based on value of all stats
    - Saving/loadiing progress
    - Random events that affect stats
    - Easter eggs/secrets
    
- Aspirational
    - UI
    - Graphics/Audio*/

#include <iostream>
#include <vector>

int main() {
    
    std::string nickname;
    std::vector<std::string> stats = {"Level", "Hunger", "Happiness", "Cleanliness"};
    std::vector<int> statValue = {1, 1, 1, 1};

    std::cout << "Welcome to Chimchar Care.\n\n"
                "You've been entrusted with raising a Chimchar, a fire-type chimp Pokemon. Your goal is to keep Chimchar happy and healthy\n"
                "by paying close attention to chimchar's hunger, happiness and cleanliness.\n\n"
                
                "If Chimchar's needs are neglected it will be harder to train. Work hard to Train your Chimchar till it becomes an Infernape!\n\n"
                
                "Are you ready to take on the challenge of raising Chimchar? Lets get started!\n\n"
                
                "First give your Chimchar a nickname: ";
    std::cin >> nickname;


}


