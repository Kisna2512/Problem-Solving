class Solution {
public int maximalRectangle(char[][] matrix) {
      int max=0;
    List<Integer> prevList = new ArrayList<>();
    for(int i=0;i<matrix.length;i++){
        List<Integer> list = new ArrayList<>();
        for(int j=0;j<matrix[i].length;j++){
           list.add(matrix[i][j]-'0');
        }
          prevList=prevList.isEmpty()?list:addTwoList(list,prevList);
            max=Math.max(findArea(prevList),max);
    }

    return max;
}

 private static int findArea(List<Integer> list) {
    int area=0;
    Stack<Integer> st = new Stack<>();
    for(int i=0;i<=list.size();i++){
        while (!st.isEmpty() && (i==list.size() || list.get(i)<=list.get(st.peek()))){
            int value = st.pop();
            int left = st.isEmpty()?-1:st.peek();
            int right = i;
            area=Math.max(area,list.get(value)*(right-left-1));
        }
        st.push(i);
    }

    return area;
}

private static List addTwoList(List<Integer> prevList, List<Integer> list) {
    List<Integer> newList = new ArrayList<>();
    for(int i=0;i<list.size();i++){
        if(prevList.get(i)==0){ // if there are zero in list that means it's not a complete rectangle
            newList.add(0);
        }else {
            newList.add(prevList.get(i)+list.get(i));
        }
    }

    return newList;
}
}
