#include <iostream>
using namespace std;

int main() {
	
	int i = 0;

	/*
	"if ()" ფუნქციაში შეტანილი ცვლადის მნიშვნელობა ინგრემენტის და დეგრემენტის("++"/"--") ოპერატორებს არ აღიქვამს. აღიქვამს მხოლოდ მოცემულ პოზიციაზე გამოვლენილი ცვლადის მნიშვნელობას
	*/

	if (i++) cout << "მუშაობს: i++\n"; // "if (i++)" ნიშნავს "i" ცვლადიში არსებული  სიმბოლო არის ნულზე მეტი და შემდეგ ემატება რიცხვი "++". ამის გამო ფუნქცია არ გამოვა ჭეშმარიტი, რადგან ნული უტოლდება "false" ოპერატორს

	if (++i) cout << "მუშაობს: ++i\n";  // "if (++i)" ნიშნავს შეკრების შემდეგ გამოვლენილი "i" ცვლადი თუ არ უტოლდება ნულს, ფუნქცია მიიღებს ჭეშმარიტ თეზისს. ნაჩვენები ფუნქცია იქნება ჭეშმარიტი

	return 0;
}