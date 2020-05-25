#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "gamechanger.h"

int main(){
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  // Gamechanger stats
  // Gamechanger stats;
  // stats.printPlatform();

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);

  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Difficulty_level();
  game.Run(controller, renderer, kMsPerFrame);
  game.print_results(game.getSnake()->getDifficultyLevel());
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Congratulations !!!" << std::endl;
  std::cout << "At Difficulty level : "<< game.getSnake()->getDifficultyLevel() << std::endl;
  std::cout << "You Score : " << game.GetScore() << "\n";
  std::cout << "and Size : " << game.GetSize() << "\n";
  return 0;
}