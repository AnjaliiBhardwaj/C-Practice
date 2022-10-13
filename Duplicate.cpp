int duplicateNumber(int *arr, int n)
{
    //Write your code here
    for(int i=0;i<n;i++){
        bool unique=true;
        for(int j=0;j<n;j++){
            if (i==j){
                continue;
            }
            if (arr[i]==arr[j]){
                unique=false;
                break;
            }
            
        }
        if (!unique){
            return arr[i];
        }
        
    }
    return 0;
}