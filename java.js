let nums = [3,9,7,8,3,8,6,6];

var specialArray = function(nums) {
    //checking number of positive elements in nums
    let numOfPositiveElem = function(nums){
        let count = 0;
        for(let i=0;i<nums.length;i++){ 
            if(nums[i]>0){
                count++;
            }
        }
        
        return count;
    }

    let posElem = numOfPositiveElem(nums);
    console.log(posElem);
    
    //checking how many numbers gt or et numOfPositiveElem
    let gtORet = function(nums,numOfPositiveElem){
        let count = 0;
        for(let i=0;i<nums.length;i++){
        if(nums[i]>numOfPositiveElem||nums[i]==numOfPositiveElem){
                count++;
            }
        }
        return count;  
    }

   let grtORet = gtORet(nums,posElem)
   console.log(grtORet)
    
    if(posElem==grtORet){
        return grtORet;
    }
    else{
        return -1;
    }
    
    
};

console.log(specialArray(nums))