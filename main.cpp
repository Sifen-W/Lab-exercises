#include <iostream>
#define taxRatePreProcessor 0.05
using namespace std;

int main() {
    // 1. Display an introductry message
   cout << "Welcome to the product sales and inventory analysis program" <<endl;
   cout << "C++ is a compiled language therefore, it plays a significant role in the performance and efficiency of a product sales and inventory analysis program." << endl;

   // 2. Declare Variables for Product Details
   string productName;
   int productCategory;
   int initialInventory;
   float productPrice;
   int itemsSold;
   
   // 3. Declare Variables for Computed Values
   int newInventory;
   float totalSales;
   string inventoryStatus;

   // 4. Demonstrate Different Initialization Methods
   int sample1 = 67; 

   string sample2;
   sample2 = "apple";

   char sample3 {'s'};

   // 5. Use Type Deduction to Create Extra Helper Variables
   auto totalSalesCopy = totalSales;
   decltype(initialInventory) initialInvetoryCopy = 70;

   //6. Define Constants
   const float taxRateConstant = 0.05f;

   //7. Input From the User
   cout << "Enter the product name: ";
   cin >> productName;

   cout << "Enter the product category: " <<endl;
   cout << "1. Electronics" <<endl;
   cout << "2. Groceries" <<endl;
   cout << "3. Clothing" <<endl;
   cout << "4. Stationary" <<endl;
   cout << "5. Miscellaneous" <<endl;
   cin >> productCategory;

   cout << "Enter the initial inventory quantity: ";
   cin >> initialInventory;

   cout << "Enter the product price per unit: ";
   cin >> productPrice;

   cout << "Enter the number of items sold: ";
   cin >> itemsSold;

   // 8. Perform Calculations
   newInventory = initialInventory - itemsSold;
   totalSales = itemsSold * productPrice;

   // 9. Use a Conditional (Ternary) Operator
   inventoryStatus = (newInventory < 10)? "Low Inventory" : "Sufficient Inventory";

   // 10. Implement flow control

   if(productCategory >=1 && productCategory<=5){
    cout << "YOU HAVE ENTERED A VALID CATEGORY" <<endl;

   }
   else {
    cout << "YOU HAVE ENTERED AN INVALID CATEGORY!!" <<endl;
   }

   switch (productCategory) {
    case 1:
        std::cout << "Category 1: Electronics" <<endl;
        break;
    case 2:
        std::cout << "Category 2: Groceries" <<endl;
        break;
    case 3:
        std::cout << "Category 3: Clothing" <<endl;
        break;
    case 4:
        std::cout << "Category 4: Stationery" <<endl;
        break;
    case 5:
        std::cout << "Category 5: Miscellaneous" <<endl;
        break;
    default:
        std::cout << "INVALID CATEGORY!!!" <<endl;
   }

   // Use a For Loop

   cout << "Receipt:" <<endl;
   for (int i = 1; i <= itemsSold; i++)
   {
    cout << "Item " << i << ": $" << productPrice <<endl;
   }
   
   // 12. Output All Information
   cout << "Tax Rates:" <<endl;
   cout << "Preprocessor Tax Rate: " << taxRatePreProcessor << endl;
   cout << "Const Tax Rate: " << taxRateConstant << endl;

   cout << "Product Details: " << endl;
   cout << "Product Name: " << productName << endl;
   cout << "Product Category: " << productCategory << endl;
   cout << "Initial Inventory: " << initialInventory << endl;
   cout << "Product Price: $" << productPrice << endl;
   cout << "Items Sold: " << itemsSold <<endl;

   cout << "Computed Values: " << endl;
   cout << "New Inventory: " << newInventory << endl;
   cout << "Total Amount: $" << totalSales << endl;
   cout << "Inventory Status: " << inventoryStatus << endl;

   cout << "Helper Variables: " <<endl;
   cout << "Auto Helper: " << totalSalesCopy << endl;
   cout << "Decltype Helper: " << initialInvetoryCopy << endl;

return 0;

}
    

