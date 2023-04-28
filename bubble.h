// bubble sort header file
class bubbleSort {
public:
    // constructor
    bubbleSort();

    // destructor
    ~bubbleSort();

    // sort function
    void sort(int arr[], int n) {
        for (int i = 0; i < n; i++) {
		//pass n times to check bubbles
		for (int j = n - 1; j > i; j--) {
			//compare adjacent elements
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
    }
    // swap function
    void swap(int& xp, int& yp) {
        int temp = xp;
        xp = yp;
        yp = temp;
    }

    // print function
    void printArray(int arr[], int size);

};

