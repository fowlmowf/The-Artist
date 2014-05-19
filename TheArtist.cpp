#include <iostream> // Head file for basic input output operations
#include <string> // Header for store sentences

using std::cout; // Print to screen
using std::cin;	 // Get input from keyboard
using std::string; // Memory for a sentence

int sanity = 0; //Mental Health. When hits 0, player neutral. > 0 positive mentality. < 0 negative mentality 
int GetChoice(int Number);

bool ValidChoice;
bool GameActive; // A switch ( 0, 1, true or false ) to represent the game state

void ClearScreen(); // Clears Screen.
void MenuScreen(); // A Function to show the Menu screen
void Intro();
void StartGame();

int main()
{
	ClearScreen();
	MenuScreen(); // Call the menu screen function - Line 26
	
	while(GameActive) // While the game is active ( Started or not dead )
	{
		ClearScreen();
		Intro(); // Game instructions here
		StartGame();
		// Painting 2
		// Painting 3
		break;
	}
	return 0; // Exit program
}

void ClearScreen()
{
	for(int i = 0; i < 256; i++) cout << "\n";
}

void MenuScreen()
{
	cout << "**********************************************************\n"; // Display game title and author
	cout << "*			The Artist                        *\n";
	cout << "*							  *\n";
	cout << "*          By Harrison Robottom and Robert Walker        *\n"; 
	cout << "*                                                        *\n";
	cout << "*          1. Play game                   0. Exit        *\n";
	cout << "**********************************************************\n\n";
	
	// Display Game Options

	switch(GetChoice(2))
	{
	case 0:
		GameActive = 0;
		break;
	case 1:
		GameActive = 1; 
		break;		
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
	cin.get();
	cout << "\n";
	cout << "\nYou named her ELlie, and she was everything to you. Everything.";
	cout << "\nHowever, as Laurie was in labor, her heart stopped as you were holding her hand and looking her in the eye.";
	cout << "\nYou've always been angered about how Laurie never got to see the one she died for... And this is where you started to descend.";
	cout << "\nDevestated by the loss of your wife, you turned to the drink as a solution... Another root of the weed.";
	cout << "\nAfter years of drowning your sorrows, you come to realise that your sorrows can swim. Alcohol isn't doing enough anymore.";
	cout << "\nYou NEED more.";
	cin.get();
	cout << "\n";
	cout << "\nYou went to a dead end pub called the Mona Lisa, and met an old colleague named Collin. Once you became borderline paraletic, you spilt your guts.";
	cout << "\nYou told him that drinking just isn't enough. So he opened a door to a whole new world of debauchery and decadence.";
	cout << "\nEventually the substances and narcotic cocktails took their toll. You hit the floor, your last thoughts are of Ellie and Laurie.";
	cout << "\n...And sorrow.";
	cin.get();
}

int GetChoice(int Number)
{
	ValidChoice = 0;
	int choice; // Allocate a place to store the users choice
	
	while(!ValidChoice)
	{
		cout << "\n\nChoice: ";
		cin >> choice; // Get choice from the user
		
		if(choice >= Number) // If choice is greater than the amount of allowed choices
		{
			cout << "\n\nPick number from 0 to " << Number-1; // Error message
		}
		else
		{
			ValidChoice = 1; // If it gets here choice is valid, continue
		}
		cin.ignore();
	}
	
	switch(choice)
	{
	case 0: return 0; break;
	case 1: return 1; break;
	case 2: return 2; break;
	case 3: return 3; break;
	case 4: return 4; break;
	}
}

void StartGame()
{
	ClearScreen();
	cout << "Daniel takes a deep breath in before opening his eyes. As they slowly open, he notices he's awoken in an abandoned building.";
	cout << "\nIt's in a state of complete disrepair. It looks like nobody has stepped foot in here for years.";
	cout << "\nThe place is covered in dust. It looks like this was some kind of smack den at some point.";
	cout << "\nAs I bring myself to stand, a man startles me.";
	cin.get();
	cout << " \n\nVirgil: Awake at last, I see? You took your time.";
	cin.get();
	cout << "\nDaniel: Who the fuck are you? Where am I? The fuck did you do to me?";
	cin.get();
	cout << "\nVirgil: Now, now, Mister Jackson. My name's Virgil. I did nothing, you bought yourself here. Don't you remember?";
	cin.get();
	cout << "\nDaniel: I... I don't remember anything. Why're we here?";
	cin.get();
	cout << "\nVirgil: All will be explained soon enough, my friend. Walk with me, Jackson. You'll learn the truth soon enough.";
	cin.get();
	cout << "\nDaniel: How do I know I can trust you?"; 
	cin.get();
	cout << "\nVirgil: You don't. But I'm sure you don't currently have much to lose.";
	cout << "\nVirgil: Come with me, I'll answer a single question. Or you can go your own way, makes no difference to me.";
	cin.get();
	cout << "\n\nChoose response:\n\n";
	cout << "Choice 0 > \"I'll come with you\"\t\tChoice 1 > \"I'll find my own way\"";

	switch(GetChoice(2))
	{
	case 0: // Follow Virgil
		// 1 question
		
		cout << "\n\nDaniel: Let's just get this over with";
		cin.get();
		cout << "\nVirgil: I'm glad we can see eye to eye. So, you can ask me a single question, just, one.";
		cin.get();
		cout << "\n\nChoose response:\n\n";
		cout << "Choice 0 > \"Why am I here?\"\tChoice 1 > \"What happened to me?\"\tChoice 2 > \"Where am I?\"";
		
		switch(GetChoice(3))
		{
		case 0: // Why am I here?
			cout << "\n\nDaniel: Why am I here? The fuck am I doing in a shithole like this?";
			cin.get();
			cout << "\nVirgil: Think of it as pennance for your sins.";
			cin.get();
			cout << "\nDaniel: Pennance? What sins? I can't remember anything.";
			cin.get() ;
			cout << "\nVirgil: ...One. This way, if you will.";
			cin.get();
			break;
		case 1: // Why can't I remember anything?
			cout << "\n\nDaniel: What happened to me? How did I get here? I just can't... remember.";
			cin.get();
			cout << "\nVirgil: Your memory will return as we progress. As for what happened to you... Well, you'll find out soon.";
			cin.get();
			cout << "\nDaniel: That wasn't much of an answer.";
			cin.get();
			cout << "\nVirgil: I never told you that my answers were worth the value of your question.";
			cin.get();
			break;
		case 2: // Where am I?
			cout << "\n\nDaniel: Where am I? What is this place?";
			cin.get();
			cout << "\nVirgil: ";
			break;
		}
		break;
		
	case 1: // Virgil follows you
		// Finding painting 1
		
		cout << "\n\nDaniel: \"I think I'll find my own way out, thanks\"";
		
		switch(GetChoice(3)) // Virgil follows you
		{
		case 0: // Harsh Grip
			break;
		case 1: // Dunno
			break;
		case 2: // Helping hand
			break;
		}
		break;
	}
}
