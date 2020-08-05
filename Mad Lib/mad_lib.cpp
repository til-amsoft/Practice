//===================================================================================
// Name        : Mad Lib
// Author      : Tilly Softly
// Description : Mad Lib Present for my dearest Emily on her birthday
//===================================================================================
#include <iostream>
#include <string>

int main(){
	std::string adjective1;
	std::string noun1;
	std::string verbed;
	std::string adjective2;
	std::string adjective3;
	std::string colour;
	std::string adjective4;
	std::string noun2;
	std::string noun3;
	std::string animal1;
	std::string adjective5;
	std::string animal2;
	std::string adjective6;
	std::string adverb;
	std::string verb1;
	std::string adjective7;
	std::string verb2;

	std::cout<<"Happy Birthday my darling!\nTo complete this mad lib you're gonna need a colour, an adverb, 2 animals, 3 other nouns, 3 verbs and 7 adjectives - try not to get too whelmed!\nLots of Love, Tilly xxx";
	std::cout<< "\nLet's start with an adjective: ";
	std::cin>>adjective1;
	std::cout<<"Now a noun: ";
	std::cin>>noun1;
	std::cout<<"Give me a verb ending in -ed: ";
	std::cin>>verbed;
	std::cout<<"Another adjective: ";
	std::cin>>adjective2;
	std::cout<< "And another: ";
	std::cin>>adjective3;
	std::cout<< "Now a colour: ";
	std::cin>>colour;
	std::cout<< "Yet another adjective: ";
	std::cin>>adjective4;
	std::cout<<"Let's have a noun please: ";
	std::cin>>noun2;
	std::cout<<"And another (Halfway there!): ";
	std::cin>>noun3;
	std::cout<<"Name an animal: ";
	std::cin>>animal1;
	std::cout<< "and give me an adjective: ";
	std::cin>>adjective5;
	std::cout<< "and another animal: ";
	std::cin>>animal2;
	std::cout<< "AND another adjective: ";
	std::cin>>adjective6;
	std::cout<< "an adverb (that describes a doing word): ";
	std::cin>>adverb;
	std::cout<<"a verb (present tense): ";
	std::cin>>verb1;
	std::cout<<"one last adjective: ";
	std::cin>>adjective7;
	std::cout<<"and finally, another present tense verb: ";
	std::cin>>verb2;
	std::cout<<"Your completed story:\n\n";
	std::cout<<"It's my birthday and there's a "<<adjective1<<" box the size of a "<<noun1<<" with my name on it. \nIt's "<<verbed<<" in "<<adjective2<<" wrapping paper with a "<<adjective3<<" "<<colour<<" ribbon on top. \nI wonder what's inside the box! Could it be a "<<adjective4<<" stuffed "<<noun2<<"? Or maybe a remote control "<<noun3<<"? \nI'd love it if there was a "<<animal1<<" or a "<<adjective5<<" "<<animal2<<" inside, a "<<adjective6<<" pet just for me! \nI can't wait to "<<adverb<<" "<<verb1<<" that "<<adjective7<<" paper and "<<verb2<<" what's inside!";


}