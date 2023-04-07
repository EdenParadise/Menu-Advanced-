#include<iostream>
#include<ctime>

using namespace std;

void login(string* nickname, string* password);

void profile(string* nickname, string* password, int* profilecheck,int *check);
void changenick(string* nickname);
void changepass(string* password);

void settings(int* setcheck, int* check);
void author(int* setcheck);
void github(int* setcheck);

void game(int* gamecheck, int* check);
void play(int* gamecheck);

void main()
{
	srand(time(NULL));

	string nickname;
	string password;

	int check = 0;

	setlocale(LC_ALL, "Rus");

	login(&nickname, &password);

	while (check < 1 || check>4)
	{
		system("cls");
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "������� ����:\n" << endl;
		cout << "��� �������(1) " << endl;
		cout << "���������(2) " << endl;
		cout << "Minigame(3) " << endl;
		cout << "Exit(4)" << endl;
		cout << "������� �����: ";
		cin >> check;

		int profilecheck = 0;
		int setcheck = 0;
		int gamecheck = 0;

		switch (check)
		{
		case 1:
			
			while (profilecheck == 0)
			{
				profile(&nickname, &password, &profilecheck, &check);

				if (profilecheck == 1)
				{
					changenick(&nickname);
					profilecheck = 0;
				}
				if (profilecheck == 2)
				{
					changepass(&password);
					profilecheck = 0;
				}

			}

			break;

		case 2:
			
			while (setcheck == 0)
			{
				settings(&setcheck,&check);
				if (setcheck == 1)
				{
					github(&setcheck);
				}


				if (setcheck == 2)
				{
					author(&setcheck);
				}


			}
			break;
		case 3:
			while (gamecheck == 0)
			{
				game(&gamecheck, &check);
				if (gamecheck == 1)
				{
					play(&gamecheck);
					
				}

			}
		}
	}
}

void login(string* nickname, string* password)
{
	system("cls");
	cout << "\t\t\t����, ������������������� ������" << endl;
	cout << "������� ���� ���: ";
	cin >> *nickname;
	cout << "������� ������: ";
	cin >> *password;

}


void profile(string* nickname, string* password, int *profilecheck, int *check)
{
	system("cls");
	while (*profilecheck < 1 || *profilecheck>3)
	{

		system("cls");
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "�������:\n" << endl;
		cout << "��� �������: " << *nickname << endl;
		cout << "��� ������: " << *password << endl;

		cout << "\n�������� �������(1)" << endl;
		cout << "�������� ������(2)" << endl;
		cout << "��������� � ����(3)\n" << endl;
		cout << "������� �����: ";
		cin >> *profilecheck;
		if (*profilecheck == 3)
		{
			*check = 0;
		}
	}

}

void changenick(string *nickname)
{
	system("cls");
	cout << "\t\t\t����, ������������������� ������" << endl;
	cout << "������� ����� ���: ";
	cin >> *nickname;

}
void changepass(string* password)
{
	system("cls");
	cout << "\t\t\t����, ������������������� ������" << endl;
	cout << "������� ����� ������: ";
	cin >> *password;
}


void settings(int* setcheck, int* check)
{
	system("cls");
	while (*setcheck < 1 || *setcheck>3)
	{
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "���������:\n" << endl;
		cout << "�������� �������� ��� ����(1)" << endl;
		cout << "����� � �������������(2)" << endl;
		cout << "��������� � ����(3)\n" << endl;
		cout << "������� �����: ";
		cin >> *setcheck;
		if (*setcheck == 3)
		{
			*check = 0;
		}
	}
}

void author(int *setcheck)
{
	while (*setcheck != 0)
	{
		system("cls");
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "���������:\n" << endl;
		cout << "����� ���� ������� - Eden#7227 (Discord)\n���� ����������� � ��������������:\n�������\n����������\n���������� �������\n������\n�.�\n" << endl;
		cout << "��������� � ����(0)\n" << endl;
		cout << "������� �����: ";
		cin >> *setcheck;
	}
}
void github(int* setcheck)
{
	while (*setcheck != 0)
	{
		system("cls");
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "���������:\n" << endl;
		cout << "�������� ��� ���� ������� ����� ����� �����:\nhttps://github.com/EdenParadise\n" << endl;
		cout << "��������� � ����(0)\n" << endl;
		cout << "������� �����: ";
		cin >> *setcheck;
	}
}


void game (int* gamecheck, int *check)
{
	system("cls");
	while (*gamecheck < 1 || *gamecheck>2)
	{
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "���� ����:\n" << endl;
		cout << "��������� ��������� �� �������������� ������� � ��������� �����!\n" << endl;
		cout << "�������(1)" << endl;
		cout << "��������� � ����(2)\n" << endl;
		cout << "������� �����: ";
		cin >> *gamecheck;
		if (*gamecheck == 2)
		{
			*check = 0;
		}
	}
}

void play(int* gamecheck)
{
	int usersum = 0;
	int score = 0;
	int exit = 1;
	while (exit == 1)
	{
		system("cls");
		cout << "\t\t\t����, ������������������� ������" << endl;
		cout << "���� ����:\n" << endl;
		int usersum;
		int num1 = rand() % 20, num2 = rand() % 20, action = rand() % 4;
		int sum;
		
		switch (action)
		{
		case 0:
			sum = num1 + num2;
			cout << num1 << " + " << num2 << " = ";
			cin >> usersum;
			
			if (usersum == sum)
			{
				score += 10;
				cout << "���������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
				
				break;
			}
			else if (usersum != sum)
			{
				score -= 10;
				cout << "�����������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
				
			}
			break;
		case 1:
			sum = num1 - num2;
			cout << num1 << " - " << num2 << " = ";
			cin >> usersum;
			cout << "\n" << score << endl;
			if (usersum == sum)
			{
				score += 10;
				cout << "���������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
			
				break;
			}
			else if (usersum != sum)
			{
				score -= 10;
				cout << "�����������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
		
			}
			break;
		case 2:
			sum = num1 * num2;
			cout << num1 << " * " << num2 << " = ";
			cin >> usersum;
			cout << "\n" << score << endl;
			if (usersum == sum)
			{
				score += 10;
				cout << "���������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
			
				break;
			}
			else if (usersum != sum)
			{
				score -= 10;
				cout << "�����������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
			
			}
			break;
		case 3:
			sum = num1 / num2;
			cout << num1 << " / " << num2 << " = ";
			cin >> usersum;
			cout << "\n" << score << endl;
			if (usersum == sum)
			{
				score += 10;
				cout << "���������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;
			
				break;
			}
			else if (usersum != sum)
			{
				score -= 10;
				cout << "�����������!, � ��� " << score << " ������!" << endl;
				cout << "��� �� ���������� �������(1)\n";
				cout << "��� �� ��������� � ����(0)";
				cin >> exit;

			}
			break;
			
		}
		
	}
	*gamecheck = 0;
}
