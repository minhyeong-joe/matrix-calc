// Minhyeong Joe
// Self-Exercise Purpose
// March 16th, 2016
// Matrix Calculations (Matrix Multiplication, Matrix Determinant)

#include <iostream>
using namespace std;

void Matrix_Multiplication();
void Matrix_Determinant();

int main()
{
	int choice;
	char loop = 'y';
	do
	{
		cout << " ***************** Main Menu ***************** " << endl;
		cout << "Enter the corrensponding number to access the function." << endl;
		cout << "1. Matrix Multiplication" << endl << "2. Matrix Determinant" << endl << "3. Exit" << endl;
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 1:
		{
				  Matrix_Multiplication();
				  break;
		}
		case 2:
		{
				  Matrix_Determinant();
				  break;
		}
		case 3:
		{
				  cout << "The Program will now terminate. . ." << endl;
				  cin.get();
				  loop = 'n';
				  break;
		}
		default:
		{
				   cout << "Invalid Input" << endl;
				   cin.get();
				   system("cls");
				   break;
		}
		}
	} while (loop == 'y');
	return 0;
}

void Matrix_Multiplication()
{
	system("cls");
	int m, n, p, q, A[20][20], B[20][20], C[20][20];
	char loop = 'y', ans;
	do
	{
		cout << "Enter the dimension of the first matrix.(space in place of \"x\")" << endl;
		cin >> m >> n;
		cin.ignore();
		cout << "Enter the dimension of the second matrix.(space in place of \"x\")" << endl;
		cin >> p >> q;
		cin.ignore();
		while (n != p)
		{
			cout << "Undefined" << endl;
			cin.get();
			system("cls");
			cout << "Enter the dimension of the first matrix.(space in place of \"x\")" << endl;
			cin >> m >> n;
			cin.ignore();
			cout << "Enter the dimension of the second matrix.(space in place of \"x\")" << endl;
			cin >> p >> q;
			cin.ignore();
		}
		cout << "Enter the elements of the first matrix." << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cin >> A[i][j];
					cin.ignore();
				}
			}
		cout << "Enter the elements of the second matrix." << endl;
			for (int i = 0; i < p; i++)
			{
				for (int j = 0; j < q; j++)
				{
					cin >> B[i][j];
					cin.ignore();
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < q; j++)
				{
					C[i][j] = 0;
					for (int k = 0; k < n; k++)
						C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
				}
			}
			cout << "The resulting matrix is" << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < q; j++)
				{
					cout << C[i][j] << " ";
				}
				cout << endl;
			}
			do
			{
				cout << endl << "Would you like another calculation?\n(Y)es or (N)o\n";
				cin >> ans;
				cin.ignore();
				switch (ans)
				{
				case 'y':
				case 'Y':
				{
							break;
				}
				case 'n':
				case 'N':
				{
							loop = 'n';
							break;
				}
				default:
				{
						   cout << "invalid input" << endl;
						   break;
				}
				}
			} while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');
			system("cls");
	} while (loop == 'y');
}
void Matrix_Determinant()
{
	char loop = 'y';
	int n = 0, A[2][2], B[3][3], C[4][4], detA, detB, detC;
	system("cls");
	while (loop == 'y')
	{
		cout << "Enter 2 for 2x2 matrix, 3 for 3x3 matrix, and 4 for 4x4 matrix." << endl
			<< "Enter 1 to go back to main menu" << endl;
		cin >> n;
		cin.ignore();
		switch (n)
		{
		case 1:
		{
				  cout << "Returning to main menu";
				  cin.get();
				  system("cls");
				  loop = 'n';
				  break;
		}
		case 2:
		{
				  cout << "2x2 determinant" << endl;
				  cout << "Enter the elements of the matrix" << endl;
				  for (int i = 0; i < 2; i++)
				  {
					  for (int j = 0; j < 2; j++)
					  {
						  cin >> A[i][j];
						  cin.ignore();
					  }
				  }
				  detA = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
				  cout << "Determinant for your matrix entered is " << detA << endl;
				  cout << "Press Enter to go back to Determinant Menu";
				  cin.get();
				  system("cls");
				  break;
		}
		case 3:
		{
				  cout << "3x3 determinant will be added";
				  cin.get();
				  system("cls");
				  break;
		}
		case 4:
		{
				  cout << "4x4 determinant will be added";
				  cin.get();
				  system("cls");
				  break;
		}
		default:
		{
				   cout << "invalid input";
				   cin.get();
				   system("cls");
				   break;
		}
		}
	}
}