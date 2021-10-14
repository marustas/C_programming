void quicksort(int a[], int low, int high){
    if(low>=high) return;
int middle = split(a,low,high);
quicksort(a,low,middle-1);
quicksort(a,middle+1,high);


    }
