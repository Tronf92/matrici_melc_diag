#include <iostream>
using namespace std;

void citire(int matrice[100][100],int n);
void afisare_melc(int matrice[100][100],int n);

void citire(int matrice[100][100],int n){
	int i,j;
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "matrice[" << i << "][" << j << "]= ";
			cin >> matrice[i][j];
		}
	}
}

void afisare_melc(int matrice[100][100],int n){
	int i,j,k,m;
	for(i=0;i<n;i++){
		for(j=n-1;j>0;j++){
		}
	}
}

void afisare_diag_sec(int matrice[100][100],int n){
	int i,j;
	cout << "Diagonala secundara si paralele ei: " << endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

			if(i==0){
				cout << "  ";
				j=1;
				while(j<n){
					cout << matrice[i][j] << " ";
					j++;
				}
				i=1;
				j=0;
				cout << endl;
			}
			
			if(i!=n-1 || j!=n-1){
				cout << matrice[i][j] << " ";
			}
		}
		cout << endl;
	}
}

void afisare_diag_p(int matrice[100][100],int n){
	int i,j;
	cout << "Diagonala principala si paralele ei: " << endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 && j==n-1){cout << " ";}
			else{
				if(i==n-1 && j==0){cout << " ";
				}
				else{
					cout << matrice[i][j] << " " ;
				}
			}
		}
		cout << endl;
	}
}

int main(){
	int matrice[100][100];
	int n;
	cout << "Introduceti n: ";
	cin >> n;
	citire(matrice, n);
	afisare_diag_sec(matrice,n);
	afisare_diag_p(matrice,n);

	system("pause");
	return 0;
}