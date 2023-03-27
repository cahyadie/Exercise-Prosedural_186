#include <iostream>
using namespace std;

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
	double nilM, nilB;
	cout << "Masukan nilai Matematika = ";
	cin >> nilM;
	cout << "Masukan nilai Bahasa Inggris = ";
	cin >> nilB;
	cout << "Status kelulusan = " << status(rerata(nilM, nilB));
	cout << "\nStatus kelulusan = " << status2(rerata(nilM, nilB),nilM);
	return 0;
}