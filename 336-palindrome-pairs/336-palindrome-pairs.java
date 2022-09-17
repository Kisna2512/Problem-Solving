public class Solution {
    class TrieNode {
        public TrieNode[] next;
        public int index;
        public List<Integer> list;
        
        public TrieNode() {
            index = -1;
            next = new TrieNode[26];
            list = new ArrayList<>();
        }
    }
    
    /**
        Let the average length of the String be O(m), then addWord takes O(m^2) amount of time
    **/
    public void addWord(TrieNode root, String word, int wordIdx) {
        for (int i = word.length() - 1; i >= 0; i--) {
            char c = word.charAt(i);
            if (root.next[c - 'a'] == null) {
                root.next[c - 'a'] = new TrieNode();
            }
            
            /**
                check and mark if part of string is a palindrome.
            **/
            if(isPalindrome(word, 0, i)) root.list.add(wordIdx);
            root = root.next[c - 'a'];
        }
        
        root.index = wordIdx;
    }
    
    /**
        Search takes, O(m^2) amortized time.
    **/
    public List<List<Integer>> search(TrieNode root, String word, int wordIdx) {
        List<List<Integer>> res = new ArrayList<>();
        /** 
            Search part 1 : if the counterparts in Trie are complete words, then check if the unmatched string is a palindore, if it is then             w1 + w2 is a palindorome.
        **/
        for (int i = 0; i < word.length(); i++) {
            if (root.index != -1 && wordIdx != root.index && isPalindrome(word, i, word.length() - 1)) {
                res.add(Arrays.asList(wordIdx, root.index));
            }
            
            char c = word.charAt(i);
            root = root.next[c - 'a'];
            if (root == null) return res;
        }
        
        /**
            Search part 2 : if w1 (current search word) is completely matched, see if there is any other word that is complete, if yes w2 is
            the reverse of w1 and therefore w1 + w2 is a plaindrome.
        **/
        if (root.index != wordIdx && root.index != -1) {
            res.add(Arrays.asList(wordIdx, root.index));
        }
        
        /** 
            If w1 is completely matched and if there are any words that are larger than w1 and matched completely and have the rest of the               string as a palindrome then w1 + w2 will be a plaindrome.
        **/
        for (Integer k : root.list) {
            res.add(Arrays.asList(wordIdx, k));
        }
        
        return res;
    }
    
    private boolean isPalindrome(String word, int s, int e) {
        while(s < e && word.charAt(s) == word.charAt(e)) {
            s++;
            e--;
        }
        
        return s >= e;
    }
    
    /**
        Time complexity : O(n * m^2).
        Space Complexity : O(n * m).
    **/
    public List<List<Integer>> palindromePairs(String[] words) {
        TrieNode root = new TrieNode();
        
        /**
            addWord is invoked O(n) number of times, therefore it takes O(n * m^2) Time.
        **/
        for(int i = 0; i < words.length; i++) {
            addWord(root, words[i], i);
        }
        
        /**
            Search is invoked O(n) times, it takes O(n * m^2) worse case time.
        **/
        List<List<Integer>> res = new ArrayList<>();
        for (int i = 0; i < words.length; i++) {
            res.addAll(search(root, words[i], i));
        }
        
        return res;
    }
}