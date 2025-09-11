# Perfect Blackjack Computer

A C++ implementation of blackjack designed for both learning and mastery of probability and algorithms, with the ultimate goal of building a computerized "perfect player." The project features:

- **Basic Strategy:** Implements standard, chart-based blackjack play optimal for casual and professional human play.
- **Hi-Lo Card Counting:** Adds simulation and card tracking, building towards an intelligent blackjack bot.
- **Computer-Perfect Play:** Uses exhaustive deck composition analysis for mathematically optimal moves, leveraging the power of algorithms unavailable to human players.
- **Multi-Interface:** Playable via a terminal/console version (for embedded/hardware use) and a Raylib graphical version (for interactive desktop play).
- **Scalable Architecture:** Designed for eventual deployment in embedded systems (e.g., Raspberry Pi, microcontrollers).

## Project Goals

- Learn and implement increasingly sophisticated blackjack strategies, from basic play to perfect mathematical strategy.
- Build modular, maintainable C++ code suitable for both visual (Raylib) and console interfaces.
- Optimize for performance and portability across platforms.

## Features

- Modular class structures for card, deck, hand, player, dealer, and game logic
- Visual Raylib GUI or CLI play
- Switchable player modes (manual, basic strategy bot, card counting bot, perfect play bot)
- Git-based branching for phased development and easy collaboration/testing

## Roadmap

1. Terminal engine and basic strategy
2. Hi-Lo card counting module
3. Computer-perfect decision engine
4. Raylib UI and hardware compatibility
5. Documentation and deployment

## Getting Started

1. Clone the repository via SSH (`git clone git@github.com:Mark-722/BlackJack.git`)
2. Follow `INSTALL.md` for build instructions (coming soon)
3. Start the CLI blackjack (`bin/blackjack_cli`)
4. Run the Raylib visual version (`bin/blackjack_gui`)

## Contributing

Issues, suggestions, and feature branches are welcome.

## License

MIT License
