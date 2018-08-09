// PresidentTrivia.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Player {
	int points;
	string name;

public:
	Player(string alias);  //Player constructor
	~Player();             //Player destructor  

	int pointValue(int totalPoints) { return points = totalPoints; }; //inline function
};

void playerSetUp();
void results(int totalPoints, int SIZE); 
void presidentQuiz();
void answerReveal(char *answer);

int main()
{
	playerSetUp();
	presidentQuiz();

	cin.get();
	cin.get();
	return 0;
}


Player::Player(string alias) //Implement Player constructor
{
	name = alias;
}

Player::~Player() //Implement Player destructor
{}

int Player::pointValue(int totalPoints)
{
	return points = totalPoints;
}

void results(int totalPoints, int SIZE)
{
	cout << "You got " << totalPoints << " out of " << SIZE << " points.";
}

void presidentQuiz()
{
	const int SIZE = 20;
	char answer[SIZE];
	int points = 0;

	cout << "1. During George Washington's first term, what was the capital of the U.S.?\n\n";
	cout << "A. Philadelphia\n";
	cout << "B. New York City\n"; //correct
	cout << "C. Boston\n";
	cout << "D. Massachusetts\n";
	cin >> answer[0];
	cout << endl << endl;

	if (answer[0] == 'b' || answer[0] == 'B')
		points++;

	cout << "2. To what political party did John Adams belong to?\n\n";
	cout << "A. Republican Party\n";
	cout << "B. Democratic Party\n";
	cout << "C. Whig Party\n";
	cout << "D. Federalist Party\n"; //correct
	cin >> answer[1];
	cout << endl << endl;

	if (answer[1] == 'd' || answer[1] == 'D')
		points++;

	cout << "3. To prevent the capture of American merchant ships by the British and French \n";
	cout << "what law was passed in 1807?\n\n";
	cout << "A. The Embargo Act\n"; //correct
	cout << "B. The Protectionist Act\n";
	cout << "C. The Anti-Foreign Trade Act\n";
	cout << "D. America First Act\n";
	cin >> answer[2];
	cout << endl << endl;

	if (answer[2] == 'a' || answer[2] == 'A')
		points++;

	cout << "4. James Madison is known as the father of what famous document?\n\n";
	cout << "A. The Bill of Rights\n";
	cout << "B. The Gettysburg Address\n";
	cout << "C. The U.S. Constitution\n"; //correct
	cout << "D. The Declaration on Independence\n";
	cin >> answer[3];
	cout << endl << endl;

	if (answer[3] == 'c' || answer[3] == 'C')
		points++;

	cout << "5. What was unusual about the electoral vote total James Monroe received when\n";
	cout << "he was reelectecedin 1820?\n\n";
	cout << "A. He received all the electoral votes except one.\n"; //correct
	cout << "B. The electoral was split. The Secretary of State had to break the tie.\n";
	cout << "C. There was no such thing as electoral votes yet, only popular votes.\n";
	cout << "D. There was a mistake and the electoral votes had to be recounted.\n";
	cin >> answer[4];
	cout << endl << endl;

	if (answer[4] == 'a' || answer[4] == 'A')
		points++;

	cout << "6. How was John Quincy Adams related to John Adams, the second president?\n\n";
	cout << "A. nephew\n";
	cout << "B. cousin\n";
	cout << "C. son-in-law\n";
	cout << "D. son\n"; //correct
	cin >> answer[5];
	cout << endl << endl;

	if (answer[5] == 'd' || answer[5] == 'D')
		points++;

	cout << "7. What nickname was Andrew Jackson given by the soldiers he led?\n\n";
	cout << "A. Old Hickory\n"; //correct
	cout << "B. Iron Jack\n";
	cout << "C. Stonewall Jackson\n";
	cout << "D. Big Oak\n";
	cin >> answer[6];
	cout << endl << endl;

	if (answer[6] == 'a' || answer[6] == 'A')
		points++;

	cout << "8. How did Martin Van Buren's independent treasury system change the way\n"
		<< "in which money was paid to the U.S. Government?\n\n";
	cout << "A. Money owed to the U.S. Government could be paid in paper money.\n";
	cout << "B. Money owed to the U.S. Government had to be paid in gold or silver, not paper money\n"; //correct
	cout << "C. Copper was added to gold and silver as a way of payment\n";
	cout << "D. Bonds were first issued to add revenue to the U.S. Government\n";
	cin >> answer[7];
	cout << endl << endl;

	if (answer[7] == 'b' || answer[7] == 'B')
		points++;

	cout << "9. What did all the members of John Tyler's Cabinet, except Daniel Webster,\n "
		<< " do after he vetoed a bill to create a new Bank of the United States?\n\n";
	cout << "A. Impeach him for incompetence\n";
	cout << "B. Celebrate and priase his decision\n";
	cout << "C. Create a similar bill involving less federal control\n";
	cout << "D. They all resigned\n"; //correct
	cin >> answer[8];
	cout << endl << endl;

	if (answer[8] == 'd' || answer[8] == 'D')
		points++;

	cout << "10. President Millard Fillmore belonged to the Know-Nothing Party, which strongly supported ________?\n\n";
	cout << "A. expanding west\n";
	cout << "B. subsidizing steel manufacturing\n";
	cout << "C. unrestricted immigration\n"; //correct
	cout << "D. increasing tobacco growth and trade\n";
	cin >> answer[9];
	cout << endl << endl;

	if (answer[9] == 'c' || answer[9] == 'C')
		points++;

	cout << "11. In what war was Franklin Pierce a soldier?\n\n";
	cout << "A. the Mexican War\n"; //correct
	cout << "B. the War of 1812\n";
	cout << "C. the Napoleonic Wars\n";
	cout << "D. the French and Indian War\n";
	cin >> answer[10];
	cout << endl << endl;

	if (answer[10] == 'a' || answer[10] == 'A')
		points++;

	cout << "12. What political party broke up during the 1850s?\n\n";
	cout << "A. Democtratic Party\n";
	cout << "B. Republican Party\n";
	cout << "C. Federalist Party\n";
	cout << "D. Whig Party\n"; //correct
	cin >> answer[11];
	cout << endl << endl;

	if (answer[11] == 'd' || answer[11] == 'D')
		points++;

	cout << "13. James Buchanon served as a U.S. Ambassador for what two European nations?\n\n";
	cout << "A. Spain and France\n";
	cout << "B. Great Britain and Germany\n";
	cout << "C. Great Britain and Russia\n"; //correct
	cout << "D. France and Denmark\n";
	cin >> answer[12];
	cout << endl << endl;

	if (answer[12] == 'c' || answer[12] == 'C')
		points++;

	cout << "14. What state did Abraham Lincoln serve as a memeber of the House of Representatives?\n\n";
	cout << "A. Mississippi\n";
	cout << "B. Illinois\n"; //correct
	cout << "C. New Hampshire\n";
	cout << "D. Virginia\n";
	cin >> answer[13];
	cout << endl << endl;

	if (answer[13] == 'b' || answer[13] == 'B')
		points++;

	cout << "15. During Andrew Johnson's term, what piece of land did the U.S. purchase?\n\n";
	cout << "A. Guam\n";
	cout << "B. Alaska\n"; //correct 
	cout << "C. Virgin Islands\n";
	cout << "D. California\n";
	cin >> answer[14];
	cout << endl << endl;

	if (answer[14] == 'b' || answer[14] == 'B')
		points++;

	cout << "16. What was not permitted in the White House when Rutherford B. Hayes was president?\n\n";
	cout << "A. the press\n";
	cout << "B. cigars or any kind of tobacco products\n";
	cout << "C. drinking alcohol\n"; //correct
	cout << "D. dogs or cats\n";
	cin >> answer[15];
	cout << endl << endl;

	if (answer[15] == 'c' || answer[15] == 'C')
		points++;

	cout << "17. Who was Charles Guiteau?\n\n";
	cout << "A. the assassin of James A. Garfield\n"; //correct
	cout << "B. the man who purchased Alaska\n";
	cout << "C. owner of the First Continental Railroad\n";
	cout << "D. the Vice President to James A. Garfield\n";
	cin >> answer[16];
	cout << endl << endl;

	if (answer[16] == 'a' || answer[16] == 'A')
		points++;

	cout << "18. What did Grover Cleveland believe should be the basis for U.S. money?\n\n";
	cout << "A. paper, silver and gold\n";
	cout << "B. silver and gold\n";
	cout << "C. paper backed by gold\n";
	cout << "D. gold only\n"; //correct
	cin >> answer[17];
	cout << endl << endl;

	if (answer[17] == 'd' || answer[17] == 'D')
		points++;

	cout << "19. What was the name of the soldiers Theodore Roosevelt led in the Spanish-American War?\n\n";
	cout << "A. Theodore's Musketeers\n";
	cout << "B. Teddy's Titans\n";
	cout << "C. Rough Riders\n"; //correct
	cout << "D. Rangers of Roosevelt\n";
	cin >> answer[18];
	cout << endl << endl;

	if (answer[18] == 'c' || answer[18] == 'C')
		points++;

	cout << "20. What university did Woodrow Wilson serve as both professor and president?\n\n";
	cout << "A. Princeton\n"; //correct
	cout << "B. Brown University\n";
	cout << "C. Yale\n";
	cout << "D. Harvard\n";
	cin >> answer[19];
	cout << endl << endl;

	if (answer[19] == 'a' || answer[19] == 'A')
		points++;

	results(points, SIZE);
	answerReveal(answer);
}

void answerReveal(char *answer)
{
	if (answer[0] == 'b' || answer[0] == 'B')
		cout << "\n\n1. Correct\n";
	else
		cout << "\n\n1. During Washington's first term in office, New York City was the capital of the U.S.\n\n";

	if (answer[1] == 'd' || answer[1] == 'D')
		cout << "2. Correct\n";
	else
		cout << "2. John Adams belonged to the Federalist Party.\n\n";

	if (answer[2] == 'a' || answer[2] == 'A')
		cout << "3. Correct\n";
	else
	{
		cout << "3. To prevent the capture of American merchant ships by the British \n";
		cout << "and French, the Embargo Act was passed.\n\n";
	}

	if (answer[3] == 'c' || answer[3] == 'C')
		cout << "4. Correct\n";
	else
		cout << "4. James Madison is known as the father of the U.S. Constitution.\n\n";

	if (answer[4] == 'a' || answer[4] == 'A')
		cout << "5. Correct\n";
	else
	{
		cout << "5. James Monroe was against no opposition in the election of 1820. He received all electoral \n";
		cout << "votes except one.\n\n";
	}

	if (answer[5] == 'd' || answer[5] == 'D')
		cout << "6. Correct\n";
	else
		cout << "6. John Quincy Adams was the son of John Adams.\n\n";

	if (answer[6] == 'a' || answer[6] == 'A')
		cout << "7. Correct\n";
	else
		cout << "7. Andrew Jackson's nickname was Old Hickory.\n\n";

	if (answer[7] == 'b' || answer[7] == 'B')
		cout << "8. Correct\n";
	else
	{
		cout << "8. Martin Van Buren created the independent U.S. Treasury which converted all balances owned \n";
		cout << "and owed to the U.S. Government to be paid in only gold or silver.\n\n";
	}

	if (answer[8] == 'd' || answer[8] == 'D')
		cout << "9. Correct\n";
	else
	{
		cout << "9. After John Tyler vetoed a bill to create a new Bank of the United States \n";
		cout << "his entire cabinet resigned.\n\n";
	}

	if (answer[9] == 'c' || answer[9] == 'C')
		cout << "10. Correct\n";
	else
	{
		cout << "10. The Know-Nothing Party, which President Millard Fillmore belonged to, strongly supported \n";
		cout << "unrestricted immigration.\n\n";
	}

	if (answer[10] == 'a' || answer[10] == 'A')
		cout << "11. Correct\n";
	else
	{
		cout << "11. Franklin Pierce was a soldier in the Mexican War.\n\n";
	}

	if (answer[11] == 'd' || answer[11] == 'D')
		cout << "12. Correct\n";

	else
	{
		cout << "12. The Whig party broke up in the 1850s.\n\n";
	}

	if (answer[12] == 'c' || answer[12] == 'C')
		cout << "13. Correct\n";

	else
	{
		cout << "13. James Buchanon served as a U.S. Ambassador to Great Britain and Russia.\n\n";
	}

	if (answer[13] == 'b' || answer[13] == 'B')
		cout << "14. Correct\n";

	else
	{
		cout << "14. Abraham Lincoln served in the House of Representatives for Illinois.\n\n";
	}

	if (answer[14] == 'b' || answer[14] == 'B')
		cout << "15. Correct\n";

	else
	{
		cout << "15. During Andrew Johnson's term, the U.S. purchased Alaska.\n\n";
	}

	if (answer[15] == 'c' || answer[15] == 'C')
		cout << "16. Correct\n";

	else
	{
		cout << "16. Rutherford B. Hayes prohibited drkinking alcohol in the White House.\n\n";
	}

	if (answer[16] == 'a' || answer[16] == 'A')
		cout << "17. Correct\n";

	else
	{
		cout << "17. Charles Guiteau assassinated James Garfield.\n\n";
	}

	if (answer[17] == 'd' || answer[17] == 'D')
		cout << "18. Correct\n";

	else
	{
		cout << "Grover Cleveland believed that only gold should be the basis for U.S. money.\n\n";
	}

	if (answer[18] == 'c' || answer[18] == 'C')
		cout << "19. Correct\n";

	else
	{
		cout << "19. Theodore's soldiers in the Spanish-American War were called the Rough Riders.\n\n";
	}
    
	if (answer[19] == 'a' || answer[19] == 'A')
		cout << "20. Correct\n";

	else
	{
		cout << "Woodrow Wilson was a professor and president of Princeton.\n\n";
	}

}