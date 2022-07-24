// #include <bits/stdc++.h>
// using namespace std;

// class Restaurant
// {
// public:
//     int food_item_codes[12];
//     string food_item_names[12];
//     int food_item_prices[12];
//     int total_tax;
// };

// int main() {

//     Restaurant royal;

//    return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Restaurant
{
private:
    int input;

public:
    void setRestu(int x)
    {
        input = x;
        int food_item_codes[12];
        string food_item_names[12];
        int food_item_prices[12];
        int total_tax;

        for (int i = 0; i < input; i++)
        {
            cin >> food_item_codes[i] >> food_item_names[i] >> food_item_prices[i];
        }
    }

    void showRestu()
    {
        int food_item_codes[12];
        string food_item_names[12];
        int food_item_prices[12];
        int total_tax;
        for (int i = 0; i < input; i++)
        {
            cout << food_item_codes[i] << endl
                 << food_item_names[i] << endl
                 << food_item_prices[i] << endl;
        }
    }
};

int main()
{
    Restaurant royal;
    int x;
    cin >> x;
    royal.setRestu(x);
    royal.showRestu();
    return 0;
}