#include <cstdlib>
#include <iostream>
#include <string>

 using namespace std;
 
 int main(int argc, char *argv[])
 {
 	
 	const int N =16;
 	int card[N];
 	int sum = 0;
 	int evenSum, oddSum = 0;
 	string input = "";
 	cout<<"INSERTA EL NUMERO DE TARJETA: ";
 	cin>> input;
 	
 	for (int i = 0; i < input.size(); i++) card[i] = input[i] - '0';
 	
 	for (int i = N - 1; i >= 0; i--)
 	{
 		int p;
 		int num = card[i];
 		if (i % 2 == 0)
 		{
 			p = num * 2;
 			if (p > 9) p = p - 9;
 			evenSum += p;
		 }
		 else {
		 	p = num;
		 	oddSum += p;
		 }
		 
		 
		 
	 }
	 
	 
	 sum = evenSum + oddSum;
	 cout <<"la primer suma es: " << evenSum;
	 cout <<"\n la suma impar es: " << oddSum;
	 cout <<"\n el total es: " << sum <<"\n\n";
	 
	 if (sum % 10 == 0) cout << "LA TARJETA ES VALIDA!\n";
	 else cout << "LA TARJETA NO ES VALIDA!!\n" << endl;
	 
	 
 	
 	system("PAUSE");
 	return EXIT_SUCCESS;
 	
 }
