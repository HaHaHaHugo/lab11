#include<iostream>
#include<string>
using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};
int drawCard(void){
	return rand()%13+1;
}
int calScore(int x,int y,int z){
	return (cardScores[x]+cardScores[y]+cardScores[z])%10;
}
int findYugiAction(int s){	
	if(s == 9) return 2;
	else if(s < 6) return 1;
	else{
		int y = rand()%100+1;
		if(y<=69) return 1;
		else return 2;
	}
}

void checkWinner(int p, int y){
	cout << "\n---------------------------------\n";
	if(p==y) cout <<   "|             Draw!!!           |";
	else if(p>y) cout <<   "|         Player wins!!!        |";
	else cout <<   "|          Yugi wins!!!         |";
	cout << "\n---------------------------------\n";
}
int main(){	
    srand(rand()); 
	int playerScore, yugiScore, playerAction, yugiAction;
	int playerCards[3] = {drawCard(), drawCard(), 0};
	int yugiCards[3] = {drawCard(), drawCard(), 0};

	cout << "---------ORE NO TURN, DRAW!!!------------\n";
	cout << "Your cards: " << cardNames[playerCards[0]] << " " << cardNames[playerCards[1]] << "\n";
	playerScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
	cout << "Your score: " << playerScore << "\n";
	do{
		cout << "(1) Destiny draw (2) Stay, SELECT: ";
		cin >> playerAction;
	}while(playerAction==2);
	if(playerAction == 1){
		playerCards[] = drawCard();
  		playerScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
		cout << "Player draws the 3rd card!!!" << "\n";
		cout << "Your 3rd card: " << "\n";
		cout << "Your new score: " << "\n";
	}
	cout << "---------YUGI'S TURN, DRAW!!!------------\n";
	cout << "Yugi's cards: " << "\n";
	yugiScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
	cout << "Yugi's score: " << yugiScore << "\n";
	yugiAction = findYugiAction(yugiScore);
	if(yugiAction == 1){
		cout << "Yugi draws the 3rd card!!!\n";
		cout << "Yugi's 3rd card: " << "\n";
		cout << "Yugi's new score: " << "\n";
	}
	cout << "------------ Turn end -------------------\n";
	checkWinner(playerScore,yugiScore);
}
