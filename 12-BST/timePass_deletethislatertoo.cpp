/*

every root should check its children
if its greater or not 
*/

bool isMaxHeap(int arr[], int n) {

    if(n == 0){
        return false;
    }
    else if(n == 1){
        return true;
    }
    
    else if(n == 2){
        if(arr[0] > arr[1]){
            return true;
        }
        else{
            return false;
        }
    }
    
	// check for the 1st root
    else{
   
        int i, j, k;
        
    // loop it for the rest of the elements and also take care of leaf
	for(i = 0, j = 1, k = 2; k > n - 1;){
        
        
        int root = arr[i];
        int leftChild = arr[j];
        int rightChild = arr[k];
        
        if(root > leftChild && root > rightChild){
            i++;
        }
        else{
            return false;
        }
        
        j = (2 * i) + 1;
        k = (2 * i) + 2;
    }
        
        if(j > n - 1){
            
        }
        else{
            if(arr[i] > arr[j]){
                
            }
            else {
                return false;
            }
        }
    return true;
    }
}
