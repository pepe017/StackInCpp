#include "stack.cpp"

int main()
{
    int size;
    cout << "enter size: ";
    cin >> size;
    stack S(size);

    int c, item;
    while (1)
    {
        cout << "1.push\n2.pop\n3.display\n4.top\n5.isEmpty\n6.exit\nenter choice:" << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "enter the number: ";
            cin >> item;
            S.push(item);
            break;

        case 2:

            item = S.pop();
            cout << "popped number: " << item;
            break;

        case 3:

            cout << "total Stack: " << endl;
            S.display();
            break;
        case 4:

            item = S.top();
            cout << "top number: " << item<<endl;
            break;
        case 5:
            cout << "isEmpty = " << S.isEmpty()<<endl;
            break;
        case 6:
            return 0;
            break;
        default:
            cout<<"Invalid choice\n";
        }
    }
}