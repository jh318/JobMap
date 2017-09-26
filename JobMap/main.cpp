#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

class StatBlock {
public:
	int strength = 0;
	int dexterity = 0;
	int constition = 0;
	int smartyPantsNess = 0;
};

class Character {
public:
	StatBlock stats;

};



int main() {

	map<string, StatBlock> characterClass;

	StatBlock barbarianStartingStats;
	barbarianStartingStats.strength = 19;
	barbarianStartingStats.dexterity = 18;
	barbarianStartingStats.constition = 2;
	barbarianStartingStats.smartyPantsNess = 13;

	StatBlock cleverManStartingStats;
	cleverManStartingStats.strength = 10;
	cleverManStartingStats.dexterity = 10;
	cleverManStartingStats.constition = 5;
	cleverManStartingStats.smartyPantsNess = 20;

	StatBlock intelligentManStartingStats;
	intelligentManStartingStats.strength = 1;
	intelligentManStartingStats.dexterity = 1;
	intelligentManStartingStats.constition = 1;
	intelligentManStartingStats.smartyPantsNess = 3;

	characterClass["Barbarian"] = barbarianStartingStats;
	characterClass["CleverMan"] = cleverManStartingStats;
	characterClass["IntelligentMan"] = intelligentManStartingStats;

	int characterChoice = 0;
	string playerCharacterChoice = "No Class";
	
	cout << "Please choose a number for a character's Job" << endl;
	cout << "1: Barbarian\n2:CleverMan\n3:IntelligentMan" << endl;
	cin >> characterChoice;
	cout << characterChoice << endl;

	switch (characterChoice) {
		case(1):
			playerCharacterChoice = "Barbarian";
			break;
		case(2):
			playerCharacterChoice = "CleverMan";
			break;
		case(3):
			playerCharacterChoice = "IntelligentMan";
			break;
		default:
			break;
		
			
	}

	Character PlayerCharacter;
	PlayerCharacter.stats = characterClass[playerCharacterChoice];

	cout << playerCharacterChoice << endl;
	cout << PlayerCharacter.stats.strength << endl;
	cout << PlayerCharacter.stats.dexterity << endl;
	cout << PlayerCharacter.stats.constition << endl;
	cout << PlayerCharacter.stats.smartyPantsNess << endl;

	system("pause");

	return 0;
}