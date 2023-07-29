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
    - Level goes up when trained
    - Input validation

- Evolution
    - Chimchar > Monferno Lvl.16
    - Monferno > Infernape Lvl.36

- Check for win/lose conditions
- Congratulations for completing game by evloving chimchar into infernape message

- Extras
    - Gender Selection
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
    std::vector<std::string> stats = {"Level", "Hunger", "Happiness",};
    std::vector<int> statValue = {1, 1, 1, 1};

    std::cout << "Welcome to Chimchar Care.\n\n"

                "You've been entrusted with raising a Chimchar, a fire-type chimp Pokemon. Your goal is to keep Chimchar happy and healthy\n"
                "by paying close attention to chimchar's hunger and happiness.\n\n"
                
                "If Chimchar's needs are neglected it will be harder to train. Work hard to Train your Chimchar till it becomes an Infernape!\n\n"
                
                "Are you ready to take on the challenge of raising Chimchar? Lets get started!\n\n"
                
                "First give your Chimchar a nickname: ";
    std::cin >> nickname;

    std::cout << "\n" << nickname << "loves his new name! I think you'll get along great!\n\n"

                "Now it's time to learn how to take care of " << nickname << ".\n\n"

                "You'll need to frequently check in on " << nickname << "'s hunger and happiness in order to train him. Here's what each one means:\n\n"

                "Hunger - Feed " << nickname << " by typing 'feed'. Hunger goes down when you interact with " << nickname << ". If hunger hits 0, " << nickname << " will be unable to do anything else except eat!\n"
                "Happiness - Play with " << nickname << " by typing 'play'. Low happiness makes " << nickname << " disinterested in training.\n"
                "Training - Train " << nickname << " by typing 'train'. This will level up " << nickname << " bringing him ever closer to evolution!.\n\n"

                "Type 'stats' at any time to review " << nickname << "'s hunger, happiness and level.\n"
                "These are their current Values:\n"
                << stats[0] << ": " << statValue[0] << " " << stats[1] << ": " << statValue[1] << " " << stats [2] << ": "<< statValue[0] << "\n\n"
                
                "Type 'commands' at any time to review commands and their effects.\n\n"
                
                "If you balance " << nickname << "'s needs right, " << nickname << " will evolve in no time.\n\n"
                
                "Now let's get started with caring for your new friend!\n";

                
}


