#include <iostream>
using namespace std;

int licznik = 0;
int w[1000];

int wynik2()
{
   int w[1000];
   int max = 1;
   
   w[0] = 1;
   w[1] = 1;
   w[2] = 1;

   for(int i = 3; i <= 8; i++)
   {
        if(i % 2 == 0)
        {
            w[i] = w[i-3] + w[i-1] + 1;
    	}
		else
		{
            w[i] = w[i - 1] % 7;
    	}
		if(w[i] > max)
        {
			
		    max = w[i];
   		}
   }
   cout << max;
}

int wynik(int i) {
		
		
        if (i < 3) {
                licznik += 1;
                return 1;
        }
        else {
                if (i % 2 == 0) {
                        return wynik(i - 3) + wynik(i - 1) + 1;
                }
                else {
                        return wynik(i - 1) % 7;
                }
        }
}
int main(int argc, char** argv) {
        int i = 0;
        cout << "Zadanie 1.2 strona 5.\n\n";
        cout << "i | w(i) | E(i)\n";
        for(i = 0; i<11; i++){
                licznik = 0;
               
                cout << i;
                cout << " | ";
                cout << wynik(i);
                cout << " | ";
                cout << licznik << "\n";
        }
        wynik2();
        return 0;
}
