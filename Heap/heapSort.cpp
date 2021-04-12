
class Solution
{
    public:
    void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
      
    }

    public:
    void buildHeap(int arr[], int n)  { 
        // Your Code Here
        for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
        
        //for(int i=0; i<n; i++)  cout<<arr[i]<<" ";  cout<<"\n"; 
    }

    
    public:
    void heapSort(int arr[], int n){
        //code here
        buildHeap(arr, n);
        for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    }
};
