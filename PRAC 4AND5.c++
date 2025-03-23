//PRAC 4 Write a menu driven program to perform string manipulation (without using inbuiltstring functions): 

//a. Show address of each character in string
#include <iostream> 
#include <cstring> 
using namespace std; 

void displayASCII (string str) { 
   cout << "ASCII values: \n";
   for (char c: str) {  
      cout << c << " ->" << int(c) << endl;
    } 
}  

void concatenateStrings (char str1[], char str2[]) {  
   int i= strlen(str1), j = 0; 
   while (str2[j] != '\0') { 
      str1[i] = str2[j];  
      i++; j++;  
   }  
   str1[i] = '\0'; 
} 

bool compareStrings (char str1[], char str2[]) { 
   int i = 0; 
   while (str1[i] != '\0' && str2[i] != '\0') { 
       if (str1[i] != str2[i]) 
           return false; 
       t++;  
   }   
   return str1[i] = str2[i]; 
}

int stringLength(char* str) { 
   int len = 0; 
   while (*str != '\0') {  
       len++; 
       str++; 
   } 
return len; 
}

//b. Concatenate two strings
void toUppercase (char str[]) { 
   int i = 0; 
   while (str[i] != '\0') { 
       if (str[i] >= 'a' && str[i] <= 'z') { 
           str[i] = 32; 
       } 
       i++; 
   } 
} 

void reverseString(char str[]) { 
   int len = stringLength (str); 
   for (int i = 0; i < len / 2; i++) {
      swap(str[i], str[len-i-1]); 
   } 
} 

int main() { 
    char str1[100], str2[100]; 
    
    cout << "Enter first string: "; 
    cin >> str1; 
    cout << "Enter second string: "; 
    cin >> str2; 

    displayASCII(str1); 


    concatenateStrings (str1, str2); 
    cout << "Concatenated String: " << str1 << endl; 

    cout << "Strings are << (compareStrings (str1, str2) ? "equal": "not equal") << endl; 

    cout << "Length of first string: " << stringLength(str1) << endl; 

    toUppercase(str1); 
    cout << "Uppercase String: "<< str1 << endl;

} 
//c. Compare two strings
void reverseString(char str[]) { 
   int len = stringLength(str); 
   for (int i = 0; i < len / 2; i++) { 
      swap(str[i], str[len i 1]); 
   } 
} 
int main() { 
   char str1[100], str2[100]; 

   cout << "Enter first string: "; 
   cin >> str1; 
   cout << "Enter second string: 
   cin >> str2; 

   displayASCII(str1); 

   concatenateStrings (str1, str2); 
   cout << "Concatenated String: "<< str1 << endl; 

   cout << "Strings are "<< compareStrings(str1, str2)<< endl; 

   cout << "Length of first string:" << stringLength(str1) << endl; 

   cout << "Uppercase String:" << str1 << endl; 

   reverseString(str1); 
   cout << "Reversed String:" << str1 << endl; 
   return 0; 
}


PRAC 5 Write a program to merge two ordered arrays to get a single ordered array

#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted arrays
vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    // Merge the arrays while both have elements left
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }

    // Add remaining elements from arr1, if any
    while (i < arr1.size()) {
        merged.push_back(arr1[i++]);
    }

    // Add remaining elements from arr2, if any
    while (j < arr2.size()) {
        merged.push_back(arr2[j++]);
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Merge the arrays
    vector<int> merged = mergeArrays(arr1, arr2);

    // Display the merged array
    cout << "Merged sorted array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
