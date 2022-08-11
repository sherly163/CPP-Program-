#include <iostream> 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Mencari Nilai Terbesar dan Terkecil ##" << endl;
  cout << "======================================================" << endl;
  cout << endl;
 
  int input[100], arr_count, i, max_num, min_num;
 
  cout << "Input banyaknya element Array: ";
  cin >> arr_count;
 
  cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
  cout << endl;
 
  for(i = 0; i < arr_count; i++){
    cin >> input[i];
  }
 
  cout << endl;
 
  max_num = input[0];
  min_num = input[0];
  for(i = 0; i < arr_count; i++){
    if(input[i] > max_num){
      max_num = input[i];
    }
    else if(input[i] < min_num){
    	min_num = input[i];
	}
  }
 
  cout  << "Angka terbesar adalah: " << max_num;
  cout  << endl;
  cout  << "Angka terkecil adalah: " << min_num;
  cout << endl;
  return 0;
}
