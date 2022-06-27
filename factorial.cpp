#include <bits/stdc++.h>
using namespace std;

string multiplyTwoNumbers(string num1, string num2) {
   if (num1 == "0" || num2 == "0") {
      return "0";
   }
   string product(num1.size() + num2.size(), 0);
   for (int i = num1.size() - 1; i >= 0; i--) {
      for (int j = num2.size() - 1; j >= 0; j--) {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
            product[i + j + 1] = n % 10;
            product[i + j] += n / 10;
      }
   }
   for (int i = 0; i < product.size(); i++) {
      product[i] += '0';
   }
   if (product[0] == '0') {
      return product.substr(1);
   }
   return product;
}
int main() {
   int n;

   cout << "Enter Number : ";

   cin >> n;

   string str,ans = "1";

   for(int i=1; i<=n; i++){
    str = to_string(i);
    ans = multiplyTwoNumbers(str,ans);
   }

   cout << "factorial of " << n  << " : " << endl;
   cout << ans << endl;
   return 0;
}