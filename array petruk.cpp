//#include <iostream>
//using namespace std;
//
//int main(){
//	int a[] = {1,2,3,4,5,6,7,8,9,10};
//	cout << &a << endl;
//	cout << &a[1] << endl;
//	cout << &a[2] << endl;
//	
//	cout << sizeof(double) << endl;
//	
//	for (int i = 0 ; i < sizeof(a)/sizeof(int) ; i++){
//		cout << a[i] <<endl;
//	}
//	cout << sizeof(a) << endl;
//	
//	for (auto & i : a){
//		cout << i << endl;
//	}
//	
//	char b[] = {"hi maniez"};
//	cout << b << endl;
//	char c[] = {'h', 'i', 'i', '\0'};
//	cout << c << endl;
//	
//	cin >> n;
//	int a[n];
//	for (int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
//}
//	
//void printArray(int * arr, int size){
//	for (int i = 0 ; i < size ; i++){
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//	
//int main (){
//	int arr[] = {1, 2, 3, 4, 5};
//	int size = sizeof(arr) / sizeof(int);
//		
//	printArray (arr, size);
//		
//	return 0;
//}
//
//int main(){
//	int a = 5;
//	int* ptr = &a;
//	cout << a << endl;
//	cout << *ptr << endl;
//	
//	string a[] = {"hi", "maniez"};
//	cout << *a << endl;
//}
