#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using doctest::Approx;

#include "Hangman.h"

TEST_CASE("test basics")
{
  Hangman game("game");

  CHECK(game.getWord() == "game");
  CHECK(game.getBoard() == "____");
  CHECK(game.getGuessedLetters() == "");
  CHECK(game.getWrongGuesses() == 0);
}
