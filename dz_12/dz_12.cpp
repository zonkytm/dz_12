#include "Abstract.h"
#include <algorithm>
#include <vector>

int main() {
	int size;
	string choise;
	cout << "Enter size:\n";
	cin >> size;
	vector<Animal*> zoo;
	for (int i = 0; i < size; i++)
	{
		int g = rand() % 3 + 1;
		switch (g)
		{
		case 1:
			zoo.push_back(new Parrot(rand()%12+1,"Red"));
		case 2:
			zoo.push_back(new Cat(rand() % 12 + 1, "Black"));
		case 3:
			zoo.push_back(new Dog(rand() % 12 + 1, "white"));
		default:
			break;
		}
	}



	for (int i = 0; i < zoo.size(); i++)
	{
		cout << zoo[i]->sort << endl;
	}
	cout << endl << endl;
	cout << "enter animal to kick out\n";
	cin >> choise;
	auto newEnd = remove_if(zoo.begin(), zoo.end(), [choise](Animal* animal) mutable {return animal->sort == choise; });
	// Удаляем все элементы, следующие после
	zoo.erase(newEnd, zoo.end());


	for (int i = 0; i < zoo.size(); i++)
	{
		cout << zoo[i]->sort << endl;
	}
}