/*
https://leetcode.com/problems/flipping-an-image/

Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].
 
Example 1:

Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
*/


 vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
   
   //Brute force approach 
   //takes extra space and time complexcity as used extra array to store the result
   
    *int r = arr.size();
    int c = arr[0].size();
    int i=0,j=0;
    int n = r-1;
    vector<vector<int>> res;
    for(int i=0;i<r;i++){
        vector<int>a;
        for(int j=r-1;j>=0;j--){
            a.push_back(arr[i][j]);
        }         
        res.push_back(a);
    }
   for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(res[i][j]==0){
                res[i][j] = 1;
            }
            else if(res[i][j]==1){
                res[i][j] = 0;
            }
        }
    }        
    return res; 
------------------------------------------------------------------
    //Optimal approach 
  
    for(int i=0;i<image.size();i++) {
        reverse(image[i].begin(),image[i].end());
    }
    for(int i=0;i<image.size();i++){
        for(int j=0; j<image[i].size();j++){
            if(image[i][j]==0){
                image[i][j] = 1;
            }
            else{
                image[i][j] = 0;
            }
         }
    }
    return image;
----------------------------------------------------------
  //Best approach as fliping and inversion takes at place
  

    */
    int n = image.size();
    float m = image[0].size();
    for(int i=0; i<n; i++){
        for(int j=0, k=m-1; j<ceil(m/2) ; j++,k--){
            int a = image[i][j], b = image[i][k];
            image[i][j] = !b;
            image[i][k] = !a;
        }
    }
    return image;      
}
