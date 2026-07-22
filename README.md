# 🎮 Unmatched Game

Welcome to **Unmatched Game**, a terminal-based adaptation of the famous *Unmatched* board game. This project recreates the strategic one-versus-one experience of the original game in a fully interactive terminal environment using modern C++.
Players take control of legendary heroes such as **Sherlock Holmes** and **Count Dracula**, each equipped with unique abilities, sidekicks, and customized decks of cards. 
Every match requires tactical movement, careful card management, and intelligent combat decisions to defeat the opposing hero. 
This project was developed as an Object-Oriented Programming project and demonstrates modular software architecture, game design principles, and clean C++ programming practices.

## ✨ Features

- 🧩 Fully Object-Oriented Design
- 🎴 Complete Card System
- ⚔️ Turn-Based Combat System
- 🧠 Unique Hero Abilities
- 👥 Hero & Sidekick Mechanics
- 🗺️ Zone-Based Board System
- 🎮 Interactive Terminal UI main menu using FTXUI
- 🎲 Turn Management
- 📦 Deck, Hand and Discard Pile Management
- 🏗 Modular Project Architecture

- ## 🎲 Heroes

Currently implemented fighters:

- 🕵️ Sherlock Holmes
  - special ability: Sherlock Holmes and Dr. Watson's abilities can never be disabled.

- 🧛 Count Dracula
  - special ability: At the start of your turn, you may deal 1 damage to a fighter adjacent to Dracula (even your sisters). if you do draw a card.


## 📂 Project Structure
```
Unmatched/
├── CMakeLists.txt
├── README.md
├── .gitignore
├── .gitmodules
├── external/
│   └── ftxui/
├── include/
│   ├── board/
│   │   ├── Board.h
│   │   └── Space.h
│   ├── card/
│   │   ├── Card.h
│   │   ├── Deck.h
│   │   ├── DiscardPile.h
│   │   └── Hand.h
│   ├── effect/
│   │   ├── Effect.h
│   │   ├── DraculaCards/
│   │   └── SherlockCards/
│   ├── fighter/
│   │   ├── Fighter.h
│   │   ├── Hero.h
│   │   ├── Sidekick.h
│   │   ├── Dracula.h
│   │   ├── Sherlock.h
│   │   ├── Sisters.h
│   │   └── DrWatson.h
│   ├── game/
│   │   ├── Game.h
│   │   ├── CombatSystem.h
│   │   └── TurnManager.h
│   ├── player/
│   │   └── Player.h
│   ├── ui/
│   │   ├── MainMenu.h
│   │   ├── TerminalUI.h
│   │   └── MapTemplate.h
│   └── utils/
└── src/
    ├── main.cpp
    ├── board/
    │   ├── Board.cpp
    │   └── Space.cpp
    ├── card/
    │   ├── Card.cpp
    │   ├── Deck.cpp
    │   ├── DiscardPile.cpp
    │   └── Hand.cpp
    ├── effect/
    │   ├── Effect.cpp
    │   ├── DraculaCards/
    │   └── SherlockCards/
    ├── fighter/
    │   ├── Fighter.cpp
    │   ├── Hero.cpp
    │   ├── Sidekick.cpp
    │   ├── Dracula.cpp
    │   ├── Sherlock.cpp
    │   ├── Sisters.cpp
    │   └── DrWatson.cpp
    ├── game/
    │   ├── Game.cpp
    │   ├── CombatSystem.cpp
    │   └── TurnManager.cpp
    ├── player/
    │   └── Player.cpp
    └── ui/
        ├── MainMenu.cpp
        └── TerminalUI.cpp
```
## 🛠 Technologies Used
- C++17
- CMake
- FTXUI
- Object-Oriented Programming


## 📥 Installation

### Prerequisites
- C++17 Compiler
- CMake 3.20+
- Git

Clone the repository:

```bash
git clone https://github.com/momoshinz/Unmatched.git
cd Unmatched
```

Build the project:

```bash
cmake -S . -B build
cmake --build build
```

Run:

```bash
./build/Unmatched
```

Windows:

```bash
build\Unmatched.exe
```

## 🎮 Gameplay
Each player controls one Hero and their Sidekicks.

During every turn:
1. Move fighters across the map.
2. Play Attack, Defense, Versatile or Scheme cards.
3. Trigger special abilities.
4. Defeat the opponent's Hero to win the match.


## 🏛 Project Architecture
The project follows an object-oriented modular architecture.

Main modules include:
- Game
- Player
- Fighter
- Board
- Combat System
- Card System
- User Interface (UI)
- Effects

The complete class diagram is provided in the project report.

## 📜 License

This project was developed for educational purposes as an Object-Oriented Programming course project.

## 🙏 Acknowledgements
This project is inspired by the **Unmatched** board game published by Restoration Games.

Special thanks to:
- Restoration Games
- FTXUI
- CMake

## 👨‍💻 Team Members
- [Mohadese Nejatbakhsh](https://github.com/momoshinz)
- [Dina Sharifypanah](https://github.com/Dinanooo)

## Repository Link
(https://github.com/momoshinz/Unmatched.git)
