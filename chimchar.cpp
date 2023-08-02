#include <iostream>
#include <vector>

int main() {
    
    // Variables
    std::string nickname;
    std::string command;
    
    // Vectors
    std::vector<std::string> stats = {"Level", "Hunger", "Happiness"};
    std::vector<int> statValue = {1, 1, 1};
    
    // Introduction Message + Chimchar nickname input
    std::cout << "Welcome to Chimchar Care.\n\n"

                "You've been entrusted with raising a Chimchar, a fire-type chimp Pokemon. Your goal is to keep Chimchar happy and healthy\n"
                "by paying close attention to chimchar's hunger and happiness.\n\n"
                
                "If Chimchar's needs are neglected it will be harder to train. Work hard to Train your Chimchar till it becomes an Infernape!\n\n"
                
                "Are you ready to take on the challenge of raising Chimchar? Lets get started!\n\n"
                
                "First give your Chimchar a nickname: ";
    std::cin >> nickname;

    // Explanation to User of game mechanics + commands
    std::cout << "\n" << nickname << "loves his new name! I think you'll get along great!\n\n"

                "Now it's time to learn how to take care of " << nickname << ".\n\n"

                "You'll need to frequently check in on " << nickname << "'s hunger and happiness in order to train him. Here's what each one means:\n\n"

                "Hunger - Feed " << nickname << " by typing 'feed'. Hunger goes down when you interact with " << nickname << ". If hunger hits 0, " << nickname << " will be unable to do anything else except eat!\n"
                "Happiness - Play with " << nickname << " by typing 'play'. Low happiness makes " << nickname << " disinterested in training.\n"
                "Training - Train " << nickname << " by typing 'train'. This will level up " << nickname << " bringing him ever closer to evolution!.\n\n"

                "Type 'stats' at any time to review " << nickname << "'s hunger, happiness and level.\n"
                "These are their current Values:\n"
                << stats[0] << "-" << statValue[0] << " " << stats[1] << "-" << statValue[1] << " " << stats [2] << "-"<< statValue[0] << "\n\n"
                
                "Type 'help' at any time to review commands and their effects.\n\n"
                
                "If you balance " << nickname << "'s needs right, " << nickname << " will evolve in no time.\n\n"
                
                "Now let's get started with caring for your new friend!\n\n";

    //Main game while loop
    while(statValue[0] < 5) {
        
        // Prints congratualtion message for evlolving Chimchar into a monferno
        if (statValue[0] == 3) {

            std::cout << "Woah! " << nickname << " is evolving\n\n"

                        "Congratulations " << nickname << " evolved into Monferno\n\n"

                        "You're doing great!\n\nAt this rate " << nickname << " will be an Infernape in no time.\n\n";

            std::cout << "What do you want to do with " << nickname << " : ";
            std::cin >> command;

        }

        //Asks user to input chimchar interaction command
        else {

            std::cout << "What do you want to do with " << nickname << " : ";
            std::cin >> command;

        }

        // Conditional statements for "feed" command
        if (command == "feed") {
            
            // If hunger is < 5 "feed" stat increases hunger by 1
            if (statValue[1] < 5) {
            
                statValue[1] = statValue[1] + 1;
            
            }
            
            // If hunger = 5 "feed" no longer increases hunger
            else {

                std::cout << "\n" << nickname << " is too full to eat any more.\n";
            }

        }

        // Conditional statements for "play" command
        else if (command == "play") {

            // if hunger = 0 chimchar is unable to play to increase happiness by 1
            if (statValue[1] == 0) {

                std::cout << "\n" << nickname << " is too hungry to to play.\n";

            }

            // If happiness is < 5 "play" command activates successfuly increasing the value 1
            else if (statValue[2] < 5) {

               statValue[2] = statValue[2] + 1; 
               statValue[1] = statValue[1] - 1;
            }
            
            // If hapiness is = to 5 "play" will no longer increase the value by 1
            else {
                
                std::cout << "\n" << nickname << " doesn't want to play anymore.\n";

            }
        }

        // If user types "train" increases level by 1
        else if (command == "train") {

            // Prevents increasing level with "train" if hunger = 0
            if (statValue[1] == 0) {

                std::cout << "\n" << nickname << " is too hungry to to train.\n";

            }

            // Prevents increasing level with "train" if happiness = 0
            else if (statValue[2] == 0) {

                std::cout << "\n" << nickname << " wants to play.\n";

            }

            // Increases level by +1 if happiness & hunger are both > 0
            else {

                statValue[0] = statValue[0] + 1;
                statValue[1] = statValue[1] - 1;
                statValue[2] = statValue[2] - 1;
                std::cout << "\nNice! " << nickname << " is now Lvl " << statValue[0] << "!\n";

            }

        }

        // If user types "stats" reveals chimchar's current stat values
        else if (command == "stats") {

            std::cout << "\nThese are " << nickname << "'s current stats:\n" 
            << stats[0] << " - " << statValue[0] << "\n" << stats[1] << " - " << statValue[1] << "\n" << stats [2] << " - "<< statValue[2] << "\n\n";
        }

        // If user types "commands" prints list of valid inputs and their effects
        else if (command == "help") {

            std::cout << "\nCommands:\n"
                        "feed: Increases " << nickname << "'s hunger stat by 1\n"
                        "play: Increases " << nickname << "'s happiness stat by 1\n"
                        "train: Increases " << nickname << "'s level  by 1\n"
                        "stats: Reveals " << nickname << "'s current stats\n"
                        "help: Shows the list of commands and their effects\n";

        }

        // Error message for invalid command inputs from user
        else {

            std::cout << "\nInvalid input\n";
        }
        
        // Improves readability
        std::cout << "\n";
    }
    
    //Congratulations message to user for completing Game
    std::cout << "Woah! " << nickname << " is evolving\n\n"

                "Congratulations, you've done it! Your excellent care and dedication has helped " << nickname << " evolve into Infernape\n\n"

                "With this accomplishment you've proven yourself to be a top-notch Pokemon trainer!\n\n"

                "Thank you for playing Chimchar Care!\n";
                
}


