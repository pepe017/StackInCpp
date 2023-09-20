#include "stack.cpp"

int main()
{
    int size;
    cout << "\033[1;33m enter size:\033[1;0m ";
    cin >> size;
    stack S(size);

    int c, item;
    while (1)
    {
        cout << "\033[1;33m1.push\n2.pop\n3.display\n4.top\n5.isEmpty\n6.exit\nenter choice:\033[1;0m";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "\033[1;33menter the number:\033[1;0m ";
            cin >> item;
            S.push(item);
            break;

        case 2:

            item = S.pop();
            cout << "\033[1;33mpopped number: " << item<<"\033[1;0m";
            break;

        case 3:

            cout << "\033[1;33mtotal Stack: " << endl;
            S.display();
            break;
        case 4:

            item = S.top();
            cout << "\033[1;33mtop number: " << item<<"\033[1;0m"<<endl;
            break;
        case 5:
            cout << "\033[1;33misEmpty = " << S.isEmpty()<<"\033[1;0m"<<endl;
            break;
        case 6:
            return 0;
            break;
        default:
            cout<<"\033[1;31mInvalid choice\033[1;0m\n";
        }
    }
}