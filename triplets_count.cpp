int count(int arr[], int n, int val) 
{ 
    // n is the size of the array .
    sort(arr, arr+n);  
    int cnt = 0; 
  
    for (int i = 0; i < n - 2; i++) 
    { 
        // initializing the left_ind and right_ind 
        int left_ind = i + 1, right_ind = n - 1; 
  
        // Using Meet in the Middle concept 
        while ( left_ind < right_ind ) 
        { 
              int sum = arr[i] + arr[left_ind] + arr[right_ind];
            if ( sum >=val ) 
                right_ind--; 
  
            // Else move left pointer 
            else
            { 
              // since all the element between left and right index have the value
             // less than the desired val which gives us the required sum.
             //Hence adding all these triplets in the cnt . 
                 cnt += (right_ind - left_ind); 
                left_ind++; 
            } 
        } 
    } 
    return cnt; 
} 
