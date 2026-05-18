class Solution { //Solved
public:
    int maxArea(vector<int>& height) {
        // int maxWater =0;

        // for(int i=0; i<height.size(); i++)
        // {
        //     for(int j=i+1; j<height.size(); j++)
        //     {
        //         int width = j-i;
        //         int minHeigth = min(height[i], height[j]);
        //         int area = width * minHeigth;
        //         maxWater = max(maxWater, area) ;
        //     }
        // }
        // return maxWater; ==> TLE error 

        //Optimized Code         

        int maxWater = 0;
        int lp=0, rp = height.size() - 1;

        while(lp < rp)
        {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);

            int currWater = w * ht;

            maxWater = max(maxWater , currWater );

            // if(height[lp] < height[rp])
            // {
            //     lp++;
            // }
            // else
            // {
            //     rp --;
            // }

            // Ternary Statement 

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater ;
    }
};