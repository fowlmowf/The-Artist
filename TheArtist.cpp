#include <iostream> // Head file for basic input output operations
#include <string> // Header for store sentences

using std::cout; // Print to screen
using std::cin;	 // Get input from keyboard

int sanity = 0; //When hits 0, player nuetral. Mental Health.
int health; //0-100. When hits 0, player dies. Physical Health. 

bool GameActive; // A switch ( 0, 1, true or false ) to represent the game state
	
void ClearScreen(); // CLears Screen.
void MenuScreen(); // A Function to show the Menu screen
void Intro();

int main()
{
	MenuScreen(); // Call the menu screen function - Line 26
	
	while(GameActive) // While the game is active ( Started or not dead )
	{
		ClearScreen();
		Intro(); // Game instructions here
		break;
	}
	return 0; // Exit program
}

void ClearScreen()
{
	for(int i = 0; i < 256; i++)
	{
		cout << "\n";
	}
}

void MenuScreen()
{
	cout << "The Artist - By Harrison Robottom and Robert Walker\n\n"; // Display game title and author
	cout << "1. Play game\t0. Exit\n\n";		 // Display Game Options

	bool validchoice = 0;

	while(!validchoice)
	{
		cout << "Choice: ";
		int choice; // Allocate a place to store the users choice
		cin >> choice; // Get choice from the user

		if(choice == 1) { GameActive = 1; validchoice = 1; }
		else if(choice == 0) { GameActive = 0; validchoice = 1; }
		else { cout << "Please pick 1 or 0\n\n"; }
	}
}

void Intro()
{
	cout << "Your name is Daniel Jackson. You are 41 years old and living in North London. All your life you've been a painter.";
	cout << "\nEver since you were a child, painting has been your form of expression, your coping mechanism.";
	cout << "\nYou were raised by your father, your mother unfortunately died during child birth. You have never gotten along with your father.";
	cout << "\nYour father and you never saw eye to eye on art. He always pushed you to stop painting and start studying to become a lawyer.";
	cout << "\nOnce you turned eighteen, you decided that you had had enough of him putting you down for trying to follow your passion.";
	cout << "\nYou left to head to university to study art and culture. This is where you met the love of your life, Laurie.";
	cout << "\nYou graduated along with Laurie and your paintings started to fetch a pretty penny at exhibitions and local art galleries.";
	cout << "\nAfter a few years, your paintings started to attract big names in the art dealing business. After a year of fame, you married Laurie.";
	cout << "\nYou and Laurie spent three years happily together before she fell pregnant. You were both so excited to have your child. ";
	cout << "\nTo bring a new life into this world.";
	cout << "\n";
	cout << "\nYou named her ELlie, and she was everything to you. Everything.";
	cout << "\nHowever, as Laurie was in labor, her heart stopped as you were holding her hand and looking her in the eye.";
	cout << "\nYou've always been angered about how Laurie never got to see the one she died for... And this is where you started to descend.";
	cout << "\nDevestated by the loss of your wife, you turned to the drink as a solution... Another root of the weed.";
	cout << "\nAfter years of drowning your sorrows, you come to realise that your sorrows can swim. Alcohol isn't doing enough anymore.";
	cout << "\nYou NEED more.";
	cout << "\n";
	cout << "\nYou went to a dead end pub called the Mona Lisa, and met an old colleague named Collin. Once you became borderline paraletic, you spilt your guts.";
	cout << "\nYou told him that drinking just isn't enough. So he opened a door to a whole new world of debauchery and decadence.";
	cout << "\nEventually the substances and narcotic cocktails took their toll. You hit the floor, your last thoughts are of Ellie and Laurie.";
	cout << "\n...And sorrow.";
	

}
