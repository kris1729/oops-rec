// static allo --> stack --> by Defalt chhoti hoti hai --> use (local variable)
// ans parameter of function --> uski size ko aap change bhi kr sakte compiler me jakr
// jab tak aap << new >> keyword use nahi krte tab tak static me 



// use new --> Dynamic --> aur uska add share kiya jata hai aur use pointer 
// me store krte hai -->  aap ko dellocate krna padta hau --> Using delete 
// keyword
// dynamic ka pointer (stack ) me store hota hai ..


// use good practic is to allocate big variable in dynamic 

// Example--> int* arr = new int[n]; 
            //   float *var = new float;


// 2D array...

/*         int **arr = new int *[row];
           for(int i =0;i<row;i++){
            arr[i] = new int[col];
           }


*/