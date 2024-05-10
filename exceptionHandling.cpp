#include <iostream>
#include <stdexcept> // Needed for out_of_range exception
using namespace std;

int main() {
    try {
        // Division by zero
        int numerator = 10;
        int denominator = 0;
        int result = numerator / denominator; // This will throw a division by zero exception

        // This line won't be executed due to the exception thrown above
        cout << "Result of division: " << result << endl;

        // Accessing an out-of-bounds element in an array
        int arr[5] = {1, 2, 3, 4, 5};
        cout << arr[10] << endl; // This will throw an out_of_range exception
    }
    catch (const std::out_of_range& e) {
        cout << "Caught out_of_range exception: " << e.what() << endl;
    }
    catch (const std::exception& e) {
        cout << "Caught generic exception: " << e.what() << endl;
    }
    catch (...) {
        cout << "Caught unknown exception." << endl;
    }

    return 0;
}
