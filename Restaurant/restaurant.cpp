#include <bits/stdc++.h>
using namespace std;
class Resturant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

private:
    int total_tax = 0;

public:
    void set_tax(int tax)
    {
        total_tax += tax;
    }
    int get_tax()
    {
        return total_tax;
    }
};

void menu_add(int x)
{
}
int main()
{
    int size, i, j, sum;
    cin >> size;
    Resturant *kfc = new Resturant();
    for (int i = 0; i < size; i++)
    {
        cin >> (*kfc).food_item_codes[i];
        getchar();
        getline(cin, kfc->food_item_names[i]);
        cin >> kfc->food_item_prices[i];
    }
flag1:
    cout << "\t\t\t\t\t\t\t\tMAKE BILL" << endl;
    cout << "\t\t\t\t\t\t\t________________________" << endl;
    cout << "Item Code\t\t\t\t"
         << "Item Name\t\t\t\t"
         << "Item Price" << endl;
    for (i = 0; i < size; i++)
    {
        cout << (*kfc).food_item_codes[i] << "\t\t\t\t\t"
             << (*kfc).food_item_names[i] << "\t\t\t"
             << (*kfc).food_item_prices[i] << "\t\t\t" << endl;
    }
    int table_no, items, total_price;
    cout << "\nEnter Table No: ";
    cin >> table_no;
    cout << "Enter Number of Items: ";
    cin >> items;
    int item_code[items], item_quantity[items];
    bool invalid_code;
    for (i = 0; i < items; i++)
    {
        invalid_code = true;
        cout << "Enter Item " << i + 1 << " Code: ";
        cin >> item_code[i];
    flag2:
        for (j = 0; j < size; j++)
        {
            if (item_code[i] == kfc->food_item_codes[j])
            {
                invalid_code = false;
            }
        }
        if (invalid_code)
        {
            cout << "Wrong code!!!\nPlease Enter Item " << i + 1 << " Code Again: ";
            cin >> item_code[i];
            goto flag2;
        }
        cout << "Enter Item " << i + 1 << " Quantity: ";
        cin >> item_quantity[i];
    }
    cout << "\n\t\t\t\t\t\t\t\tBILL SUMMARY" << endl;
    cout << "\t\t\t\t\t\t\t\t________________________" << endl;
    cout << "Table No. : " << table_no << endl;
    cout << "Item Code\t\t\t\t"
         << "Item Name\t\t\t\t"
         << "Item Price\t"
         << "Item Quantity\t"
         << "Total Price" << endl;
    sum = 0;
    for (i = 0; i < items; i++)
    {
        for (j = i; j < size; j++)
        {
            if (item_code[i] == kfc->food_item_codes[j])
            {
                total_price = (*kfc).food_item_prices[j] * item_quantity[i];
                sum += total_price;
                cout << (*kfc).food_item_codes[j] << "\t\t\t\t\t"
                     << (*kfc).food_item_names[j] << "\t\t\t"
                     << (*kfc).food_item_prices[j] << "\t\t"
                     << item_quantity[i] << "\t\t"
                     << total_price << endl;
            }
        }
    }
    float tax = (float)sum * 0.05;
    cout << "Tax\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << tax << endl;
    cout << "\n_________________________________________________________________________________________________________________________________" << endl;
    cout << "Net Total\t\t\t\t\t\t\t\t\t\t\t\t\t" << float(sum) + tax << " Taka" << endl;
    kfc->set_tax(int(tax));
    cout << "\n\nTotal tax: " << kfc->get_tax() << endl;
    goto flag1;
    return 0;
}
