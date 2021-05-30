#include <iostream>
#include <stdlib.h>

using namespace std;

const short WIELKOSC_TAB = 15;
int * tab1;
int wybor;

int main()
{
    while( true )
    {
        int r, p, x;
        cout << "Wybierz nominal: " << endl;
        cout << "1. polski zloty (przeliczony w groszach)" << endl;
        cout << "2. amerykanski dolar (przeliczony w centach)" << endl;

        cin >> wybor;
        if( wybor == 1 || wybor == 2 )
        {

            switch( wybor )
            {
            case 1:
                tab1 = new int[ WIELKOSC_TAB ] { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 }; // zloty w groszach
                break;

            case 2:
                tab1 = new int[ WIELKOSC_TAB ] { 100000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1 }; // dolar w centach
                break;
            }

        }
        else
        {
            cout << "Wybrales zla liczbe" << endl;
            system( "PAUSE" );
            return 0;
        }

        cout << "Podaj reszte do wyplacenia: ";
        cin >> r;

        while( r > 0 )
        {
            int n = 0;
            for( int i = 0; i <= 15; ++i )
            {
                if(( tab1[ i ] <= r ) &&( tab1[ i ] > n ) )
                {
                    p = r / tab1[ i ];
                    n = tab1[ i ];

                    cout << tab1[ i ] << " x " << p << endl;
                }

            }

            r -= n;
            ++x;

        }

        delete[] tab1;
    }
    return 0;
}
