#include <iostream>
using namespace std;

int main()
{
    int q,w;

    q=0;
    w=0;

    char s;

    cin>>q>>w;

    swith(s){

    case '*':
        cout<<w*q;
        break;
    case '/':
        cout<<w/q;
        break;
    case '+':
        cout<<w+q;
        break;
    case '-':
        cout<<w-q;
        break;

    }

    return 0;
}
