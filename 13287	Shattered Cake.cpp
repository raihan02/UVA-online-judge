#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll widthOfCake, numberOfPiece;


    while(cin >> widthOfCake)
    {
        ll numberOfPiece;
        ll sumComponent = 0;
        cin >> numberOfPiece;
        ll width, length;
        for(int i = 1; i <= numberOfPiece; i++)
        {
            cin >> width >> length;

            sumComponent +=  ( width * length );
        }

        printf("%lld\n", sumComponent/ widthOfCake);
    }

}
