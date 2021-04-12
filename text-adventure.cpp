#include <iostream>

int main() {
  std::cout << "ORIGINAL STORY!!\n\n";
  std::cout << "Rules: to choose just type the number. Type any other number to quit.\n\n";
  bool continueGame = true;
  int survival = 0;
  int choice1, choice2, choice3, choice4;

  while (continueGame == true) {
    std::cout << "You're walking through the forest and you watch from afar 2 ways, there is a wolf to the right and is a little dark to the left. Which way to go?\n  1) Right\n  2) Left\n\n";
    std::cin >> choice1;
    if (choice1 == 1) {
      std::cout << "The wolf was actually hunting a rabbit so... you just walk through and continue your adventure.\n\n";
      survival++;
    } else if (choice1 == 2) {
      std::cout << "You walk through a clear path and... suddenly there is an earthquake that shakes everything... EVEN A BIG MOUNTAIN JUST RIGHT BESIDES YOU!. You ran with everything you can and barely manage to survive. You're too tired to continue but you must reach your goal.\n\n";
      survival--;
    } else {
      std::cout << "You have choosen to quit the game. Thanks for playing!.\n\n";
      continueGame = false;
      break;
    };
    
    std::cout << "The path seems clear after a while, but you can watch an old woman ahead, she seems lost. You decide to:\n  1) Ignore her\n  2) Talk to her\n\n";
    std::cin >> choice2;
    if (choice2 == 1) {
      std::cout << "Well... you have already have much hardships and you don't have the time to waste leisurely giving directions to an old granny. As you go past her for a few kilometers it seems like your body it's gaining weight, you feel more tired each step. You suddenly remember an old saying about this place about a ghost that stops travelers just to talk a bit to feel better. You regret but you can just continue to get away from the actions of the ghost.\n\n";
      survival--;
    } else if (choice2 == 2) {
      std::cout << "You ask the old lady if she needs something, she just says that she's resting a bit after a while of traveling. You talk to her about you journey and you give a few directions to each other. After a few minutes talking you say goodbye and feel more refreshed than usual for a talk that long. As you walk away from the granny you remember an old saying about a ghost of this place, feeling shivers you watch fast past your shoulder just to see an empty place, no sign of the old lady.\n\n";
      survival++;
    } else {
      std::cout << "You have choosen to quit the game. Thanks for playing!.\n\n";
      continueGame = false;
      break;
    };

    std::cout << "You continue your journey to your destination when you hear the sound of water running. As you walk the sound keep getting more louder and you reach a big river, you need to cross it to reach your goal. The only way to cross the river is a boat of a fisherman that give travelers a hand to cross. You walk to him but both in front and behind you are people waiting to cross, women with children, elderly... it's close to your turn and as the fisherman is getting to the river's edge you think about your next course of action:\n  1) You keep your turn and get on the boat\n  2) You give your turn to the person behind you\n\n";
    std::cin >> choice3;
    int kindness = 0;
    if (choice3 == 1) {
      std::cout << "";
    } else if (choice3 == 2) {
      bool turn = true;
      while (turn) {
        std::cout << "You give your turn to the person behind to cross and you wait. As the fisherman keeps getting closer you think your next course of action:\n  1) You decide to get on board now\n  2) You give your turn to the person behind you\n\n";
        std::cin >> choice4;
        kindness++;
        if (choice4 == 1) {
          turn = false;
          std::cout << "As you get on board and get away from the shore to hear the group of people behind saying goodbye and various good words to your kindness to the people you gave your turn.\n\n";
        } else if (choice4 == 2) {
          //? Nothing to see here, if you can see this just wait for your turn
          kindness++;
        } else {
          std::cout << "You have choosen to quit the game. Thanks for playing!.\n\n";
          continueGame = false;
          turn = false;
          break;
        };
      };
    } else {
      std::cout << "You have choosen to quit the game. Thanks for playing!.\n\n";
      continueGame = false;
      break;
    };
    if (survival == 2 && kindness >= 3) {
      std::cout << "You reach the other side of the river, and as you get off the boat the fisherman recognizes your acomplishments over the other side and decide to give you a few fishes for food on the road and advice. As you continue to walk he just keep going shaking his hand saying goodbye. Your body and mind feels refreshed as you walk towards the future with DETERMINATION.\n\n   FIN...?\n\n";
    } else if (survival == 2 && kindness >= 1) {
      std::cout << "You reach the other side of the river, and as you get off the boat the fisherman recognizes your acomplishments over the other side and decide to give you a fish for you to eat on the road and a few pats on the back to congratulate you for your kindness. Your body and mind feels refreshed as you walk towards the future with DETERMINATION.\n\n    FIN...?\n\n";
    } else if (survival == 2 && kindness == 0) {
      std::cout << "You reach the other side of the river, and as you get off you watch back and the fisherman prepares for his way back. Your body feels refreshed as you walk towards the future!\n\n   FIN...?\n\n";
    } else if (survival >= 0 && kindness >= 3) {
      std::cout << "You reach the other side of the river, as you get off the boat the fisherman try to reach you over to give you a few fishes and advice on the road ahead. Your mind feels refreshed as you walk towards the future!\n\n   FIN...?\n\n";
    } else if (survival < 0 && kindness >= 3) {
      std::cout << "You barely make to the other side of the road. As you give a step to the shore your mind can't keep with the fatigue and you collapse. In your dream there seems to be a light giving you energy and enveloping you with the words 'FOR YOUR KINDNESS'. You wake up covered in light cloth and a few fished are besides you with a note on top: 'FOR A TATTERED BODY YOU'VE SHOWED ME A GREAT SIGHT...', the rest of the note just say to eat and advice on the journey. Your mind feels refreshed as you watch the sky!\n\n    FIN...?\n\n";
    } else if (survival < 0 && kindness >= 1) {
      std::cout << "You barely make to the other side of the road. As you give a step to the shore your mind can't keep with the fatigue and you collapse. In your dream there seems to be a light enveloping you with the words 'FOR YOUR KINDNESS'. You wake up covered in light cloth and a fish is besides you with a note on top: 'YOU SHOULD REST BUD. EAT AND GET WELL.'. Your body and mind could be better but you're alive at least, uh?.\n\n   FIN...?\n\n";
    } else if (survival > 0 && kindness == 0) {
      std::cout << "You reach the other side of the river, as you get off the boat the fisherman goes to the other side to continue to get people. You're alive and not everything is bad.\n\n    FIN...?\n\n";
    } else if (survival < 0 && kindness == 0) {
      std::cout << "As you reach the shore and the boat keeps shaking you can barely make it there, your body and mind collapse and your journey flashed before your eyes. That's the last thing you remember as your mind becomes dark.\n\n    FIN...?\n\n";
    };
    continueGame = false;
  }
  return 0;
}
