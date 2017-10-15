// Kelsey Cameron
// Chemistry Test Practice 1

 #include <iostream>
 using namespace std;

 double startorbital = 0, endorbital = 0, energy1 = 0, freq = 0, wavelength = 0, c = 3.00 * 1000000000;

	double findenergy(double start, double end)
	{
	double energy;
	energy = (-2.178 * .000000000000000001) * ((1/(startorbital * startorbital)) - (1/(endorbital * endorbital)));
	return energy;

	}
	
	

	double findfreq (double energy2)
	{
	
	freq = energy1 / (6.626 * (.0000000000000000000000000000000001));
	return freq;
	}	



	 double findwavelength (double frequency)
	{
		wavelength = c / freq; 
		return wavelength;
	}
	
	int main() {

	cout << "Please enter the energy orbital that the Hydrogen electron is starting at.\n";
	cin >> startorbital;
	cout << "Please enter the energy orbital that the Hydrogen electron is ending at.\n";
	cin >> endorbital;
	energy1 = findenergy(startorbital, endorbital);
	freq = findfreq (energy1);
	wavelength = findwavelength(freq);
	cout << "Energy: " << energy1 << "\n";
	cout << "Frequency: " << freq << "\n";
	cout << "Wavelength: " << wavelength << "\n";
	cin >> energy1;
	}
	
	/*
Please enter the energy orbital that the Hydrogen electron is starting at.
4
Please enter the energy orbital that the Hydrogen electron is ending at.
6
Energy: -7.5625e-020
Frequency: -1.14134e+014
Wavelength: -2.6285e-005
	*/
	
