# Virtual Chimchar
This is a simple text-based pet care game made in C++ where you take care of a virtual Chimchar from Pokémon. It is designed to run in the terminal.

## How to Play
When you start the game, you will be introduced to your new Chimchar. You can give it a nickname if you want.

You need to take care of your Chimchar by:

- **Feeding it** - Type `feed` to feed your Chimchar. This will increase its hunger level.

- **Playing with it** - Type `play` to play with your Chimchar. This will make it happier.

- **Training it** - Type `train` to train your Chimchar. This will make it stronger.

The game ends when your Chimchar becomes an Infernape. Good luck trainer!

## Requirements
This program requires:

- C++ compiler

- C++ standard library

## Credits
This game was created as a small personal project to learn C++.

The Chimchar, Monferno and Infernape characters are properties of The Pokémon Company. This project is not affiliated with or endorsed by The Pokémon Company.

## To-Do List

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
    - clean-up code using functions
    - Gender Selection
    - Test functions to validate program logic
    - Random messages messages about interaction with chimchar based on value of all stats
    - Saving/loadiing progress
    - Random events that affect stats
    - Easter eggs/secrets
    
- Aspirational
    - UI
    - Graphics/Audio
    - Vivarium of Pokemon
