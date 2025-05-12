#include <iostream>
#include <string>
using namespace std;

#define tax_rate_define 0.35  

int main() {
    cout << "The purpose of this code is to analyze product sales and inventory for a store.\n"
         << "Do not forget that C++ is a compiled language.\n";

    string product_name;
    int product_category;
    int initial_inventory(0);   
    int remaining_inventory{0}; 
    float product_price = 0.0f;
    int sold_items = 0;
    const float tax_rate = 0.35;  

    cout << "What is the product name?";
    getline(cin, product_name);

    cout << "What is the product category?[1-5] ";
    cin >> product_category;

    cout << "What is initial inventory quantity? ";
    cin >> initial_inventory;

    cout << "What is the product price? ";
    cin >> product_price;

    cout << "What is the number of items sold? ";
    cin >> sold_items;

    
    auto total_sales = sold_items * product_price;  
    decltype(initial_inventory) updated_inventory = initial_inventory - sold_items; 
    
    string status = (updated_inventory < 10) ? "Low inventory" : "Sufficient inventory";

    if (product_category >= 1 && product_category <= 5) {
        cout << "Valid category \n";
    } else {
        cout << "Invalid category! Please enter a number between 1 and 5 \n";
    }

    switch (product_category) {
        case 1: cout << "Category 1: Electronics\n"; break;
        case 2: cout << "Category 2: Groceries\n"; break;
        case 3: cout << "Category 3: Clothing\n"; break;
        case 4: cout << "Category 4: Stationery\n"; break;
        case 5: cout << "Category 5: Miscellaneous\n"; break;
    }

    cout << "Receipt:-\n";
    for (int i = 1; i <= sold_items; i++) {
        cout << " for item " << i;
        cout << product_price << endl;  // Missing semicolon was here
        cout << updated_inventory << endl;  // Fixed the format for printing updated inventory
    }
    
    cout << "\nProduct Name:" << product_name;
    cout << "\nProduct Category:" << product_category;
    cout << "\nProduct Price:" << product_price;
    cout << "\nSold Items:" << sold_items;

    cout << "\nNew inventory:" << updated_inventory;
    cout << "\nTotal sales: " << total_sales;
    cout << "\nInventory status: " << status;
    cout << "\nConstant tax rate: " << tax_rate;
    cout << "\nPreprocessor defined tax rate: " << tax_rate_define << endl;
}
