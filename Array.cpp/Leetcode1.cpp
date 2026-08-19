class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxwidth=0;
        while(left<right){
            int width=right-left;
            int h=min(height[left],height[right]);

            int area=width*h;
            maxwidth=max(maxwidth,area);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxwidth;
    }
};