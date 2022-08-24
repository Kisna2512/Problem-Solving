// Link:- https://leetcode.com/problems/first-bad-version/

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int start=1;
        int end=n;
        while(start < end)
        {
            int mid=(start)+((end-start)/2);
            if(isBadVersion(mid)==false)
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return start;
    }
}
