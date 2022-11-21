class Solution {

    public String removeDuplicates(String s) {
        Stack<Character> st = new Stack<Character>();

        for (int i = 0; i < s.length(); i++) {
            if (st.empty() == true) {
                st.push(s.charAt(i));
            } else if (st.peek() == s.charAt(i)) {
                st.pop();
            } else {
                st.push(s.charAt(i));
            }
        }

        String ans = "";

        while (st.empty() == false) {
            ans = st.peek() + ans;
            st.pop();
        }

        return ans;
    }
}
