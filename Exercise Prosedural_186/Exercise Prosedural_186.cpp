#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct Kandidat {
	string name;
	int votes;
};

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rata) {
	if (rata >= 70)
		return "lulus";
	else
		return "gagal";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "lulus";
	else
		return "gagal";
}

int main(){
	vector<Kandidat> Kandidat;
	int numKandidat;

	cout << "Masukan berapa Kandidat: ";
	cin >> numKandidat;

	cout << "\nKandidat yang di terima:\n";
	for (int i = 0; i < numKandidat; i++) {
		if (Kandidat[i].nilM, nilB >= 60) {
			cout << Kandidat[i].name << endl;
		}
	}


	double nilM, nilB;
	cout << "Masukan nilai Matematika = ";
	cin >> nilM;
	cout << "Masukan nilai Bahasa Inggris = ";
	cin >> nilB;
	cout << "Status kelulusan = " << status(rerata(nilM, nilB));
	cout << "\nStatus kelulusan = " << status2(rerata(nilM, nilB),nilM);
	return 0;
}

