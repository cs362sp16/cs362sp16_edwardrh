#include "dominion.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (int argc, char** argv) {
  struct gameState G;
  struct gameState *p = &G;
  
  //Have an array with all variables
  //Make a for loop that randomly assigns array
  
  int k1[] = {adventurer, council_room, feast, gardens, mine, remodel, smithy,
              village, baron, great_hall, minion, steward, tribute, ambassador,
              cutpurse, embargo, outpost, salvager, sea_hag, treasure_map};
  int k[10];
  //= {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};
  int num;
  for(num = 0; num < 10; num++){
	  k[num] = k1[rand() % 19];
  }

  printf ("Starting game.\n");
  
  int nump = (rand() % 3) + 1;
  
  initializeGame(nump, k, atoi(argv[1]), p);
  
  int money = 0;
  int adventurerPos = -1;
  int councilPos = -1;
  int feastPos = -1;
  int gardensPos = -1;
  int minePos = -1;
  int remodelPos = -1;
  int smithyPos = -1;
  int villagePos = -1;
  int baronPos = -1;
  int greatPos = -1;
  int minionPos = -1;
  int stewardPos = -1;
  int tributePos = -1;
  int ambassadorPos = -1;
  int cutpursePos = -1;
  int embargoPos = -1;
  int outpostPos = -1;
  int salvagerPos = -1;
  int seaPos = -1;
  int treasurePos = -1;
  int i = 0;
  
  int numAdventurers = 0;
  int numCouncils = 0;
  int numFeasts = 0;
  int numGardens = 0;
  int numMines = 0;
  int numRemodels = 0;
  int numSmithies = 0;
  int numVillages = 0;
  int numBarons = 0;
  int numGreats = 0;
  int numMinions = 0;
  int numStewards = 0;
  int numTributes = 0;
  int numAmbassadors = 0;
  int numCutpurses = 0;
  int numEmbargos = 0;
  int numOutposts = 0;
  int numSalvagers = 0;
  int numSeas = 0;
  int numTreasures = 0;
  
  while (!isGameOver(p)){
	  money = 0;
	  int adventurerPos = -1;
	  int councilPos = -1;
	  int feastPos = -1;
	  int gardensPos = -1;
	  int minePos = -1;
	  int remodelPos = -1;
	  int smithyPos = -1;
	  int villagePos = -1;
	  int baronPos = -1;
	  int greatPos = -1;
	  int minionPos = -1;
	  int stewardPos = -1;
	  int tributePos = -1;
	  int ambassadorPos = -1;
	  int cutpursePos = -1;
	  int embargoPos = -1;
	  int outpostPos = -1;
	  int salvagerPos = -1;
	  int seaPos = -1;
	  int treasurePos = -1;
	  
	  for (i = 0; i < numHandCards(p); i++){
		if (handCard(i, p) == copper)
			money++;
		else if (handCard(i, p) == silver)
			money += 2;
		else if (handCard(i, p) == gold)
			money += 3;
		else if (handCard(i, p) == adventurer)
			adventurerPos = i;
		else if (handCard(i, p) == council_room)
			councilPos = i;
		else if (handCard(i, p) == feast)
			feastPos = i;
		else if (handCard(i, p) == gardens)
			gardensPos = i;
		else if (handCard(i, p) == mine)
			minePos = i;
		else if (handCard(i, p) == remodel)
			remodelPos = i;
		else if (handCard(i, p) == smithy)
			smithyPos = i;
		else if (handCard(i, p) == village)
			villagePos = i;
		else if (handCard(i, p) == baron)
			baronPos = i;
		else if (handCard(i, p) == great_hall)
			greatPos = i;
		else if (handCard(i, p) == minion)
			minionPos = i;
		else if (handCard(i, p) == steward)
			stewardPos = i;
		else if (handCard(i, p) == tribute)
			tributePos = i;
		else if (handCard(i, p) == ambassador)
			ambassadorPos = i;
		else if (handCard(i, p) == cutpurse)
			cutpursePos = i;
		else if (handCard(i, p) == embargo)
			embargoPos = i;
		else if (handCard(i, p) == outpost)
			outpostPos = i;
		else if (handCard(i, p) == salvager)
			salvagerPos = i;
		else if (handCard(i, p) == sea_hag)
			seaPos = i;
		else if (handCard(i, p) == treasure_map)
			treasurePos = i;
	   }
	  
	if (whoseTurn(p) == 0) {
    if (smithyPos != -1) {
        printf("0: smithy played from position %d\n", smithyPos); 
		playCard(smithyPos, -1, -1, -1, p); 
		printf("smithy played.\n");
		money = 0;
		i = 0;
	while(i<numHandCards(p)){
	  if (handCard(i, p) == copper){
	    playCard(i, -1, -1, -1, p);
	    money++;
	  }
	  else if (handCard(i, p) == silver){
	    playCard(i, -1, -1, -1, p);
	    money += 2;
	  }
	  else if (handCard(i, p) == gold){
	    playCard(i, -1, -1, -1, p);
	    money += 3;
	  }
	  i++;
	}
      }
      if (money >= 8) {
        printf("0: bought province\n"); 
        buyCard(province, p);
      }
      else if (money >= 6) {
        printf("0: bought gold\n"); 
        buyCard(gold, p);
      }
      else if ((money >= 4) && (numSmithies < 2)) {
        printf("0: bought smithy\n"); 
        buyCard(smithy, p);
        numSmithies++;
      }
      else if (money >= 3) {
        printf("0: bought silver\n"); 
        buyCard(silver, p);
      }  
	if (adventurerPos != -1) {
        printf("1: adventurer played from position %d\n", adventurerPos);
		playCard(adventurerPos, -1, -1, -1, p); 
		money = 0;
		i = 0;
	while(i < numHandCards(p)){
	  if (handCard(i, p) == copper){
	    playCard(i, -1, -1, -1, p);
	    money++;         
	  }
	  else if (handCard(i, p) == silver){
	    playCard(i, -1, -1, -1, p);
	    money += 2;
	  }
	  else if (handCard(i, p) == gold){
	    playCard(i, -1, -1, -1, p);
	    money += 3;
	  }
	  i++;
	}
      }
      if (money >= 8) {
        printf("1: bought province\n");
        buyCard(province, p);
      }
      else if ((money >= 6) && (numAdventurers < 2)) {
        printf("1: bought adventurer\n");
		buyCard(adventurer, p);
		numAdventurers++;
      }
	  else if (money >= 6){
        printf("1: bought gold\n");
	    buyCard(gold, p);
        }
      else if (money >= 3){
        printf("1: bought silver\n");
	    buyCard(silver, p);
      }
      printf("0: end turn\n");
      endTurn(p);
    }
	  
	  for(i = 1; i < nump + 1; i++){
		  printf("Player %d: %d\n", i, scoreFor(i, p));
	  }
  } //end of While

  printf ("Finished game.\n");
  for(i = 1; i < nump + 1; i++){
		  printf("Player %d: %d\n", i, scoreFor(i, p));
	  }

  return 0;
}